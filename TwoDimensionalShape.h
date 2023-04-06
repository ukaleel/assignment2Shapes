#pragma once
#include "Shape.h"

class TwoDimensionalShape: public Shape{
protected:
	int dimensions;

public:
	// Constructor
	TwoDimensionalShape() {
		name = "TwoDimensionalShape";
		dimensions = 2;
	}

	int getDimensions() {
		return dimensions;
	}
};
