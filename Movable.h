#pragma once
#include <iostream>
class Movable{
protected:
	int locationx;
	int locationy;

public:
	Movable(int x, int y) {
		locationx = x;
		locationy = y;
	}

	void move(int x, int y) {
		locationx = locationx + x;
		locationy = locationy + y;
	}

	void printPosition() {
		std::cout << "\nCurrent x coordinate: " << locationx;
		std::cout << "\nCurrent y coordinate: " << locationy;
	}


};

