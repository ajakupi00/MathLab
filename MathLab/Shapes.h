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
	Shapes(int w, int h, int n, int d, short x_off, short y_off);

	//	SETTERS
	void setWindowsWidth(int w);
	void setWindowsHeight(int h);
	void setNumOfLines(int n);
	void setDetail(int d);
	void setX_Offset(short x);
	void setY_Offset(short y);

	//	METHODS
	virtual VertexArray vShape() = 0;


protected:
	int windows_height;
	int windows_width;
	int num_of_lines;
	int detail;
	short x_offset = 0;
	short y_offset = 0;

	

};

