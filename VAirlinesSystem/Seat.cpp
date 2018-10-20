#include "Seat.h"

#include <string>

Seat::Seat(std::string id, std::string number) : id(id), number(number) {};

std::string Seat::getId() const {
	return this->id;
}

std::string Seat::getNumber() const {
	return this->number;
}

void Seat::setNumber(std::string number) {
	this->number = number;
}
