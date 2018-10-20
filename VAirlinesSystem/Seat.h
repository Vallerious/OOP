#ifndef I_SEAT_H
#define I_SEAT_H

#include <string>

class Seat {
public:
	Seat(std::string id, std::string number);

	std::string getId() const;

	std::string getNumber() const;

	void setNumber(std::string number);

	Seat(const Seat& other);

	Seat& operator=(const Seat& other);

	~Seat();
private:
	std::string id;
	std::string number;
};

#endif