#ifndef ROUTE_H
#define ROUTE_H

#include <chrono>

#include "Plane.h"

class Route {
public:
	Route(std::chrono::milliseconds departureTime, std::chrono::milliseconds arrivalTime, std::string destination, Plane* plane) :
		departureTime(departureTime),
		arrivalTime(arrivalTime),
		destination(destination),
		plane(plane) {}

	void setPlane(Plane* const& plane) {
		this->plane = plane;
	}
private:
	std::chrono::milliseconds departureTime;
	std::chrono::milliseconds arrivalTime;
	std::string destination;
	Plane* plane;
};

#endif