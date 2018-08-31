#pragma once
#include"Header.h"
class TheaterLights
{
public:
	TheaterLights() {};
	void dim(int val)
	{
		cout << "Dim the lights to " << val << endl;
	}
	void on()
	{
		dim(100);
	}
};