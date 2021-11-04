#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class CoordinateSystem
{
private:
	int windows_height;
	int windows_width;

public:
	CoordinateSystem(int windows_height, int windows_width);
	VertexArray vertexCoordinate();
	VertexArray xLines();
	VertexArray yLines();
	CircleShape zero();
	
};

