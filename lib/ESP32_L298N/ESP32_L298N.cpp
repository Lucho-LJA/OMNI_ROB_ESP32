#include "ESP32_L298N.h"

#ifdef L298N_2_MOTOR

    void L298N::moveMotor(uint16_t pwmA, uint16_t pwmB)
      {
        analogWrite(dl298n.pinA,pwmA);
        analogWrite(dl298n.pinB,pwmB);
        digitalWrite(dl298n.pin1,1);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,1);
        digitalWrite(dl298n.pin4,0);
        
      }
    void L298N::moveMotor(uint16_t pwmA)
      {
        analogWrite(dl298n.pinA, pwmA);
        analogWrite(dl298n.pinB, pwmA);
        digitalWrite(dl298n.pin1,1);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,1);
        digitalWrite(dl298n.pin4,0);
        
      }
    void L298N::backMotor(uint16_t pwmA, uint16_t pwmB)
    {
        analogWrite(dl298n.pinA,pwmA);
        analogWrite(dl298n.pinB,pwmB);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,1);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,1);

        
    }
    void L298N::backMotor(uint16_t pwmA)
    {
        analogWrite(dl298n.pinA, pwmA);
        analogWrite(dl298n.pinB, pwmA);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,1);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,1);
        
    }
    void L298N::moveMotor12(uint16_t pwmA)
    {
        analogWrite(dl298n.pinA, pwmA);
        analogWrite(dl298n.pinB, 0);
        digitalWrite(dl298n.pin1,1);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,0);
    }
    void L298N::backMotor12(uint16_t pwmA)
    {
        analogWrite(dl298n.pinA, pwmA);
        analogWrite(dl298n.pinB, 0);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,1);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,0);
    }
    void L298N::moveMotor34(uint16_t pwmA)
    {
        analogWrite(dl298n.pinA, 0);
        analogWrite(dl298n.pinB, pwmA);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,1);
        digitalWrite(dl298n.pin4,0);
    }
    void L298N::backMotor34(uint16_t pwmA)
    {
        analogWrite(dl298n.pinA, 0);
        analogWrite(dl298n.pinB, pwmA);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,1);
    }
    void L298N::mbMotor(uint16_t pwmA, uint16_t pwmB)
    {
        analogWrite(dl298n.pinA,pwmA);
        analogWrite(dl298n.pinB,pwmB);
        digitalWrite(dl298n.pin1,1);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,1);
    }
    void L298N::mbMotor(uint16_t pwmA)
    {
        analogWrite(dl298n.pinA,pwmA);
        analogWrite(dl298n.pinB,pwmA);
        digitalWrite(dl298n.pin1,1);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,1);
    }
    void L298N::bmMotor(uint16_t pwmA, uint16_t pwmB)
    {
        analogWrite(dl298n.pinA,pwmA);
        analogWrite(dl298n.pinB,pwmB);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,1);
        digitalWrite(dl298n.pin3,1);
        digitalWrite(dl298n.pin4,0);
    }
    void L298N::bmMotor(uint16_t pwmA)
    {
        analogWrite(dl298n.pinA,pwmA);
        analogWrite(dl298n.pinB,pwmA);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,1);
        digitalWrite(dl298n.pin3,1);
        digitalWrite(dl298n.pin4,0);
    }
    void L298N::stopMotor()
    {
        analogWrite(dl298n.pinA, 0);
        analogWrite(dl298n.pinB, 0);
        digitalWrite(dl298n.pin1,0);
        digitalWrite(dl298n.pin2,0);
        digitalWrite(dl298n.pin3,0);
        digitalWrite(dl298n.pin4,0);
    }
    void L298N::stopMotorF()
    {
        analogWrite(dl298n.pinA, 1);
        analogWrite(dl298n.pinB, 1);
        digitalWrite(dl298n.pin1,1);
        digitalWrite(dl298n.pin2,1);
        digitalWrite(dl298n.pin3,1);
        digitalWrite(dl298n.pin4,1);
    }
#endif