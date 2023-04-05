#pragma once
#include "ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape {
protected:
	float length;
public:
	// Constructor
	Cube(float l) {
		name = "Cube";
		length = l;
		area = 6* (length * length);
	}


};