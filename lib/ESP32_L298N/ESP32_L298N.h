#ifndef _ESP32_L298N_
    #define _ESP32_L298N_
    #ifndef Arduino_h
		  #include <Arduino.h>
    #endif
    #ifndef _ESP32_ANALOG_WRITE_
        #include "ESP32_AnalogWrite.h"
    #endif
    //uncomment to select the use of 1,2 driver
    #ifndef L298N_2_MOTOR
      #define L298N_2_MOTOR
    #endif
    //uncomment to select the use of 1 driver of 4
    //#ifndef L298N_4_MOTOR
      //#define L298N_4_MOTOR
    //#endif

#ifdef L298N_2_MOTOR
  typedef struct control_driver
  {
    int8_t pinA;
    int8_t pin1;
    int8_t pin2;
    int8_t pin3;
    int8_t pin4;
    int8_t pinB;
  } control_driver_t;
#endif

  class L298N
  {
    public:
      #ifdef L298N_2_MOTOR
      L298N (uint8_t pwm_b, uint8_t pinA,uint8_t pin1,uint8_t pin2,uint8_t pin3,uint8_t pin4,uint8_t pinB)
      {
        analogWriteResolution(pinA,pwm_b);
        analogWriteResolution(pinB,pwm_b);
        pinMode(pin1, OUTPUT);
        pinMode(pin2, OUTPUT);
        pinMode(pin3, OUTPUT);
        pinMode(pin4, OUTPUT);
        dl298n.pin1=pin1;
        dl298n.pin2=pin2;
        dl298n.pin3=pin3;
        dl298n.pin4=pin4;
        dl298n.pinA=pinA;
        dl298n.pinB=pinB;
      }

      void moveMotor(uint16_t pwmA, uint16_t pwmB);
      void moveMotor(uint16_t pwmA);
      void backMotor(uint16_t pwmA, uint16_t pwmB);
      void backMotor(uint16_t pwmA);
      void moveMotor12(uint16_t pwmA);
      void backMotor12(uint16_t pwmA);
      void moveMotor34(uint16_t pwmA);
      void backMotor34(uint16_t pwmA);
      void mbMotor(uint16_t pwmA, uint16_t pwmB);
      void mbMotor(uint16_t pwmA);
      void bmMotor(uint16_t pwmA, uint16_t pwmB);
      void bmMotor(uint16_t pwmA);
      void stopMotor();
      void stopMotorF();
      
    #endif
    
    
    private:

      control_driver_t dl298n;

  };


#endif