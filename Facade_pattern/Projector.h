#pragma once
#include"Header.h"
class Projector
{
public:
	Projector() {};
	void on()
	{
		cout << "The projector is turning on" << endl;
	}
	void off()
	{
		cout << "The projector is turning off" << endl;
	}
	void WideScreenMode()
	{
		cout << "Projector wide screen mode is launched" << endl;
	}
};