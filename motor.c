#include "motor.h"

#define SERVO 1
const int pin = 18;

int servo(void){
	int shoot;

	if(wiringPiSetupGpio() == -1)
		return 1;
	//pinMode(pin, OUTPUT);
	//pinMode(pin, PWM_OUTPUT);

	softPwmCreate(pin, 0, 100);
	while(1){
		scanf("%d", &shoot);
		if(shoot==1){
			softPwmWrite(pin, 20);
			//usleep(88000);
			//softPwmWrite(pin, 0);
			//return 0;
		}
		else if(shoot==2){
			softPwmWrite(pin,5);
			//usleep(100000);
			//softPwmWrite(pin,0);
		}
		else if(shoot == 3) return 0;
	}
	
	return 0;
}
