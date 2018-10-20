#ifndef PLANE_H
#define PLANE_H

#include "Seat.h"
#include "Model.h"

#include <string>
#include <map>

class Plane {
public:
	Plane(std::string id, Model* model);

	std::string getId() const;

	Model* getModel() const;

	std::map<std::string, Seat*> getSeats() const;

	bool isSeatOccupied(std::string id) const;

	void occupySeat(std::string id);

	void addSeat(Seat* const& seat);
private:
	std::string id;
	Model* model;
	std::map <std::string, Seat*> seats;
	std::map <std::string, bool> seatOccupationStatuses;
};

#endif