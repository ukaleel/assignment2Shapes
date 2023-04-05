// Usman Kaleel
// CSCE 306 - Prof. Omar Aldawud
// The objective of this program is to illustrate the principles of inheritance through the idea
// of shapes. There are types of shapes, with different individual characteristics, but some overarching characteristics that
// are inherited but modified.


#include "HeaderFileNames.h"
#include <iostream>
#include <list>

int main() {
	// Create instances of the 2D shapes
	Circle happyCircle{ 5 };
	std::cout << "\nThe area of the "<< happyCircle.getName() << " is: " << happyCircle.getArea();
	Triangle happyTriangle{ 5 , 5 };
	std::cout << "\nThe area of the " << happyTriangle.getName() << " is: " << happyTriangle.getArea();
	Square happySquare{ 5 };
	std::cout << "\nThe area of the " << happySquare.getName() << " is: " << happySquare.getArea();


	// Create instances of the 3D shaes
	Sphere happySphere{ 5 };
	std::cout << "\nThe surface area of the " << happySphere.getName() << " is: " << happySphere.getArea();
	Cube happyCube{ 5 };
	std::cout << "\nThe surface area of the " << happyCube.getName() << " is: " << happyCube.getArea();
	Tetrahedron happyTetrahedron{ 5 };
	std::cout << "\nThe area of the " << happyTetrahedron.getName() << " is: " << happyTetrahedron.getArea();

	// Create instance of the moving shape
	MovableShape happyMoving{0,0};
	std::cout << "\nThe " << happyMoving.getName() <<" has an area of " << happyMoving.getArea() << " as it has not been assigned any parameters";
	happyMoving.printPosition();
	happyMoving.move(5, 10);
	std::cout << "\nShape has been repositioned";
	happyMoving.printPosition();


	// Create lists of each shapes and push a shape of each type accordingly
	std::list<Circle> circleList;
	std::list<Triangle> triangleList;
	std::list<Square> squareList;
	std::list<Sphere> sphereList;
	std::list<Tetrahedron> tetrahedronList;
	std::list<Cube> cubeList;

	circleList.push_front(happyCircle);
	triangleList.push_front(happyTriangle);
	squareList.push_front(happySquare);
	sphereList.push_front(happySphere);
	tetrahedronList.push_front(happyTetrahedron);
	cubeList.push_front(happyCube);





}