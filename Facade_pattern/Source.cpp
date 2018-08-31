#include "Header.h"
#include "HomeTheaterFacade.h"
#include <vld.h>

void main()
{
	Projector* projector = new Projector();
	TheaterLights* lights = new TheaterLights();
	Screen* screen = new Screen();

	HomeTheaterFacade homeTheater(projector, lights, screen);
	homeTheater.WatchMovie();
	homeTheater.EndMovie();

	delete projector;
	delete lights;
	delete screen;
}