# OMNI_ROB_ESP32

##Download and use platformio to upload in ESP32 the proyect

####In the ESP32 boards open config.h and configure the diferents variables of omni-Rob
#Configure the ip address (line 45,46,47,48,49,50,51)

#Configure the ROS topics in config.h the variable OMNI_N in line 44
	#omni1--->"omni1"
	#omni2--->"omni2"
	#omni3--->"omni3"

#Configure ROUTER CONECTION
	ROUTER_SSID="<router ssid>"
	ROUTER_PASWORD="<router pasword>"

#If you have a router with broadcast 192.168.1.1 and netmask 255.255.255.0

	#Configure IP_ESP32
		#omni1--->192.168.1.151
		#omni2--->192.168.1.152
		#omni3--->192.168.1.153
	#Configure ROS_SERVER
		#omni1--->192.168.1.111
		#omni2--->192.168.1.112
		#omni3--->192.168.1.113
#If you have a router with diferen broadcas (example: 192.168.0.1 then 192.168.0---> <LocalNetwork>)
	#Configure IP_ESP32
		#omni1---><LocalNetwork>).151
		#omni2---><LocalNetwork>).152
		#omni3---><LocalNetwork>).153
	#Configure ROS_SERVER
		#omni1---><LocalNetwork>).111
		#omni2---><LocalNetwork>).112
		#omni3---><LocalNetwork>).113
	#configure your router's netmask with 255.255.255.0 if you have a diferent netmask

#Configure ROS_SERVER_PORT 
	#omni1--->11421
	#omni2--->11422
	#omni3--->11423


####To use the robot, first, initialize the mpu
	#In main.cpp uncomment line 2 #define _INIT_MPU_ 
	#connect the esp32 with serialUSB and donwload the program
	#obtain in serial 115200 the offsets values
	#Change the offset values in Include Folder --> MPU6050_LECTURA.h (line 64,65,66,67,68,69)
	#In main.cpp comment line 2 #define _INIT_MPU_
	#donwload the program and use with WiFi
