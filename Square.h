#pragma once
#include "TwoDimensionalShape.h"

class Square : public TwoDimensionalShape {
protected:
	float length;

public:
	// Constructor for the square
	Square(float l) {
		name = "Square";
		length = l;
		area = length * length;
	}


};