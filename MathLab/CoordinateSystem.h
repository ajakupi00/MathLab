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
	int num_of_lines;
public:
	CoordinateSystem(int windows_height, int windows_width, int num_of_lines);
	VertexArray vertexCoordinate();
	VertexArray xLines();
	VertexArray yLines();
	/*
	TODO:
		- Dodat brojeve
	*/
	
};

