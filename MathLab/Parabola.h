#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "CoordinateSystem.h"
using namespace std;
using namespace sf;

class Parabola
{
private:
	int windows_height;
	int windows_width;
	int num_of_lines;
public:
	Parabola(int win_height, int win_width, int num_of_lines);
	VertexArray DrawParabola(int detail);
};

