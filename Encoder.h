#ifndef Encoder_h
#define Encoder_h

#include "Arduino.h"

class Encoder
{
	public:
		Encoder(int speedpin, int directionpin);
		double RPM();
		boolean direction();
		void motorpm();
		void motorDir();
	private:
		int time0;
		int time1;
		int period;
		double frequency;
		double rpm;
		int spdpin;
		int dirpin;
		int clockwise;
		char cwise[10];
		char ccwise[12];
		//void motorpm();
		//void motorDir();
//		void motorpm()
//		{
//			time0 = time1;
//    		time1 = micros();
//    		period = time1 - time0;
//		}
//		void motorDir()
//		{
//			unsigned int portD_value = PORTD;
//			clockwise = (portD_value & 4);
//		}
};

#endif