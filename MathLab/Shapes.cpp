#include "Shapes.h"




Shapes::Shapes(int w, int h, int n, int d)
{
	setWindowsHeight(h);
	setWindowsWidth(w);
	setNumOfLines(n);
	setDetail(d);
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


