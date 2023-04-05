#pragma once
#include "TwoDimensionalShape.h"

class Triangle : public TwoDimensionalShape {
protected:
	float base;
	float height;
public:
	// Constructor
	Triangle(float b, float h){
		name = "Triangle";
		base = b;
		height = h;
		area = (base * height) / 2;
	}

	
};