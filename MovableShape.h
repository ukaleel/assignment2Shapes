#pragma once
#include "Movable.h"
#include "Shape.h"
class MovableShape: public Movable, public Shape {
public:
	// Calls the parent constructor
	MovableShape(int x, int y)
		: Movable(x, y)
	{
		name = "Movable Shape";
	}
};