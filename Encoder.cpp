#include "Encoder.h"
//
Encoder::Encoder(int speedpin, int directionpin)
{
	pinMode(speedpin, INPUT);
	pinMode(directionpin, INPUT);
	
	int spdpin = speedpin;
	int dirpin = directionpin;
	char cwise[] = "clockwise";
	char ccwise[] = "counterwise";
	int time0 = 0;
	int time1 = 0;
	int clockwise = 0;
	int period = 0;
	int frequency = 0;
	int rpm = 0;
	//attachInterrupt((speedpin - 2), motorpm, RISING);
	//attachInterrupt((directionpin - 2), motorDir, RISING);
}

double Encoder::RPM()
{
	frequency = 1000000/period;
	rpm = 100.5 * frequency/10930;
	return rpm;
}

boolean Encoder::direction()
{
	if (true)
	{
		return true;
	}
	else {
		return false;
	}

}

void Encoder::motorpm()
{
	time0 = time1;
 	time1 = micros();
 	period = time1 - time0;
}

void Encoder::motorDir()
{
	unsigned int portD_value = PORTD;
	clockwise = (portD_value & 4);
}
