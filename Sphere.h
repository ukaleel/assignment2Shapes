#pragma once
#pragma once
#include "ThreeDimensionalShape.h"

class Sphere : public ThreeDimensionalShape {
protected:
	float radius;

public:
	// Constructor for the sphere
	Sphere(float r) {
		name = "Sphere";
		radius = r;
		area = 4 * (radius * radius) * 3.14159265;
		
	}
};
