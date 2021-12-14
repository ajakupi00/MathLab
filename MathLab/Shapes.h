#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "CoordinateSystem.h"
using namespace sf;
using namespace std;


class Shapes
{
public:
	//	CONSTRUCTOR
	Shapes(int w, int h, int n, int d);

	//	SETTERS
	void setWindowsWidth(int w);
	void setWindowsHeight(int h);
	void setNumOfLines(int n);
	void setDetail(int d);

	//	METHODS
	virtual VertexArray vShape() = 0;


protected:
	int windows_height;
	int windows_width;
	int num_of_lines;
	int detail;

	

};

