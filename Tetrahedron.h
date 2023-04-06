#pragma once
#pragma once
#include "ThreeDimensionalShape.h"

class Tetrahedron : public ThreeDimensionalShape {
protected:

	float edge;
public:
	// Constructor for the tetrahedron
	Tetrahedron(float e) {
		name = "Tetrahedron";
		edge = e;
		area = (edge * edge) * sqrt(3);
	}


};
