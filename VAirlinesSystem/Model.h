#ifndef MODEL_H
#define MODEL_H

#include <string>

class Model {
public:
	Model(std::string name, short int capacity) : name(name), capacity(capacity) {}

	std::string name;
	short int capacity;
};

#endif