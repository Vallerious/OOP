#ifndef VIP_SEAT_H
#define VIP_SEAT_H

#include "Seat.h"

class VIPSeat : public Seat {
public:
	VIPSeat(std::string id, std::string number, double price, Seat* seat) : Seat(id, number, price, seat) {}
};

#endif