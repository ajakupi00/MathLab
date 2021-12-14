#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "CoordinateSystem.h"
#include "Shapes.h"
using namespace std;
using namespace sf;

class Parabola: Shapes
{
private:
public:
	Parabola(int w, int h, int n, int d);
	VertexArray vShape();
	/*VertexArray DrawParabola(int detail);*/
};

