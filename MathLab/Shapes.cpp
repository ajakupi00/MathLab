#include "Shapes.h"




Shapes::Shapes(int w, int h, int n, int d)
{
	setWindowsHeight(h);
	setWindowsWidth(w);
	setNumOfLines(n);
	setDetail(d);
}

Shapes::Shapes(int w, int h, int n, int d, short x_off, short y_off) : Shapes(w,h,n,d)
{
	x_offset = x_off;
	y_offset = y_off;
}

void Shapes::setWindowsWidth(int w)
{
	windows_width = w;
}

void Shapes::setWindowsHeight(int h)
{
	windows_height = h;
}

void Shapes::setNumOfLines(int n)
{
	num_of_lines = n;
}

void Shapes::setDetail(int d)
{
	detail = d;
}

void Shapes::setX_Offset(short x)
{
	x_offset = x;
}

void Shapes::setY_Offset(short y)
{
	y_offset = y;
}


