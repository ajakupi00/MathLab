#pragma once
#include "Shapes.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

class nRoot : Shapes
{
private:
	int rootOf = 2;
public:
	nRoot(int w, int h, int n, int d);
	nRoot(int w, int h, int n, int d, short x_off, short y_off);

	void setRoot(int n);

	VertexArray vShape();
};

