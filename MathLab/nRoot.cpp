#include "nRoot.h"
#include <math.h>

nRoot::nRoot(int w, int h, int n, int d) : Shapes(w, h, n, d)
{
}

nRoot::nRoot(int w, int h, int n, int d, short x_off, short y_off) : Shapes(w, h, n, d, x_off, y_off)
{
}

void nRoot::setRoot(int n)
{
    rootOf = n;
}

VertexArray nRoot::vShape()
{
	int numOfLines = num_of_lines;
	int c = 0;
	if (rootOf % 2 == 0)
	{
		VertexArray nrootShape(LineStrip, (numOfLines * detail) + 1);
		for (float i = 0; i <= 20; i +=  (1.f / detail))
		{
			float x = (windows_width / 2) + i * (numOfLines) + (x_offset * numOfLines * 2);
			float y = (windows_height / 2) - pow(i, 1.f/ rootOf) * numOfLines + (-y_offset * numOfLines * 2);
			nrootShape[c].position = Vector2f(x + x_offset, y);
			c++;
		}
		return nrootShape;
	}
	else
	{
		VertexArray nrootShape(LineStrip, (numOfLines * detail * 2) + 1);
		for (float i = -20; i <= 20; i += (1.f / detail))
		{
			float x = (windows_width / 2) + i * (numOfLines) + (x_offset * numOfLines * 2);
			short predznak = (i > 0) ? 1 : -1;
			float y = (windows_height / 2) - predznak * pow(abs(i), 1.f / rootOf) * numOfLines + (-y_offset * numOfLines * 2);
			nrootShape[c].position = Vector2f(x, y);
			c++;
		}
		return nrootShape;
	}


}
