#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Shapes.h"
using namespace std;
using namespace sf;

class Parabola: Shapes
{
private:
public:
	Parabola(int w, int h, int n, int d);
	Parabola(int w, int h, int n, int d, short x_off, short y_off);

	VertexArray vShape();
	/*VertexArray DrawParabola(int detail);*/
};

