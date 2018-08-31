#pragma once
#include "Header.h"
class Screen
{
public:
	Screen() {};
	void down()
	{
		cout << "The screen is descending" << endl;
	}
	void up()
	{
		cout << "The screen is rising" << endl;
	}
};