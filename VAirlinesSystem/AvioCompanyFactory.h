#ifndef AVIO_COMPANY_FACTORY_H
#define AVIO_COMPANY_FACTORY_H

#include <string>

#include "Plane.h"

class AvioCompanyFactory {
public:
	static Plane* createPlane(std::string modelName, short int capacity, std::string planeId) {
		Model* newModel = new Model(modelName, capacity);
		Plane* plane = new Plane(planeId, newModel);

		for (int seatCount = 0; seatCount < capacity; seatCount++) {
			std::string id = std::to_string(seatCount);
			plane->addSeat(new Seat(id, id + "A"));
		}

		return plane;
	}

protected:
	AvioCompanyFactory() {};
};

#endif