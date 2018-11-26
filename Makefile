
servo: motor_main.o motor.o
	gcc -o servo motor_main.o motor.o -lwiringPi

motor_main.o: motor_main.c	
	gcc -c motor_main.c -lwiringPi

motor.o: motor.c
	gcc -c motor.c -lwiringPi

clean:
	rm -rf motor.o motor_main.o servo



