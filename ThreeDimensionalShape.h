#pragma once
#include "Shape.h"

class ThreeDimensionalShape : public Shape {
protected:
	int dimensions;

public:
	// Constructor
	ThreeDimensionalShape() {
		name = "ThreeDimensionalShape";
		dimensions = 3;
	}
};