#pragma once
#include"Header.h"
#include"Screen.h"
#include"TheaterLights.h"
#include"Projector.h"
class HomeTheaterFacade
{
	Projector* projector;
	TheaterLights* lights;
	Screen* screen;
public:
	HomeTheaterFacade(Projector* projector, TheaterLights* lights, Screen* screen)
	{
		this->projector = projector;
		this->lights = lights;
		this->screen = screen;
	}
	void WatchMovie()
	{
		cout << "Get ready to watch a movie" << endl;
		screen->down();
		lights->dim(10);
		projector->on();
		projector->WideScreenMode();
	}
	void EndMovie()
	{
		cout << "Shutting movie theater down" << endl;
		lights->on();
		projector->off();
		screen->up();
	}
};