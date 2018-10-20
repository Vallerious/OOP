#include <iostream>
#include <string>
#include <chrono>

#include "Seat.h"
#include "Plane.h"
#include "Route.h"
#include "AvioCompanyFactory.h"
#include "AirplaneReservationManager.h"

int main() {
	using namespace std::chrono;

	AirplaneReservationManager* manager = new AirplaneReservationManager();
	Plane* boeing = AvioCompanyFactory::createPlane("Boeing 747", 160, "1");
	
	milliseconds ms = duration_cast<milliseconds> (system_clock::now().time_since_epoch());
	unsigned short int twoHours = 1000 * 60 * 60 * 2;
	Route* route = new Route(ms, ms + (milliseconds)twoHours, "Washington", boeing);

	return 0;
}