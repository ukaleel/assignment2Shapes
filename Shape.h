#pragma once
#include <string>

class Shape {
protected:
	// Name and area that will be a reoccuring variable throughout its' children
	std::string name;
	float area;

public:
	Shape() {
		// Initializes the variables
		name = "Shape";
		area = 0;
	}

	// Returns the area of the shape
	float getArea() {
		return area;
	}

	// Returns the name of the shape
	std::string getName() {
		return name;
	}

};