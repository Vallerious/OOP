#include <iostream>
#include <string>

#include "..\VAirlinesSystem\Seat.h"
#include "..\VAirlinesSystem\VIPSeat.h"
#include "..\VAirlinesSystem\IsleSeat.h"

int main() {
	Seat* s = new Seat("a", "43D", 45.5, nullptr);
	VIPSeat* vip = new VIPSeat("vip", "1A", 20.0, s);
	IsleSeat* isle = new IsleSeat("I will pee first", "2D", 10.0, s);

	std::cout << vip->getId() << vip->getPrice() << std::endl;
	std::cout << isle->getId() << isle->getPrice() << std::endl;

	return 0;
}