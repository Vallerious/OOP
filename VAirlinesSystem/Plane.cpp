#include "Plane.h"
#include "Model.h"

Plane::Plane(std::string id, Model* model) : id(id), model(model) {}

std::string Plane::getId() const {
	return this->id;
}

Model* Plane::getModel() const {
	return this->model;
}

std::map<std::string, Seat*> Plane::getSeats() const {
	return this->seats;
}

void Plane::addSeat(Seat* const& seat) {
	if (seat != nullptr) {
		this->seats[seat->getId()] = seat;
	}
}

bool Plane::isSeatOccupied(std::string id) const {
	return this->seatOccupationStatuses.at(id);
}

void Plane::occupySeat(std::string id) {
	if (!id.empty()) {
		this->seatOccupationStatuses[id] = true;
	}
}