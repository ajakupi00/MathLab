#include "Parabolic.h"

Parabolic::Parabolic()
{
	VertexArray parabola(LinesStrip, 20);

	int c = 0;
	
	for (float i = -10; i <= 10; i++)
	{
		float y = i * i;
		parabola[c].position = Vector2f(i, y);
		c++;
	}

	return parabola;
}
