#pragma once
#include "TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape {
protected:
	float radius;

public:
	// Constructor
	Circle(float r) {
		name = "Circle";
		radius = r;
		area = (radius * radius) * 3.14159265;
	}
};
