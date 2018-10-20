#ifndef AIRPLANE_RESERVATION_MANAGER_H
#define AIRPLANE_RESERVATION_MANAGER_H

#include <string>
#include <map>

#include "Plane.h"
#include "Route.h"

class AirplaneReservationManager {
public:
	AirplaneReservationManager();

	void addRoute(Route* const& route);

	bool takeSeat(std::string routeId, std::string planeId, std::string seatId, std::string clientId);

	~AirplaneReservationManager();
private:
	std::map<std::string, Route*> routes;
	std::map <std::string, std::string> clientReservations;
};

#endif