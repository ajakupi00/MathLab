#include "Parabola.h"
#include <SFML/Graphics.hpp>
#include "CoordinateSystem.h"
using namespace std;
using namespace sf;

Parabola::Parabola(int w, int h, int n, int d) : Shapes(w, h, n, d)
{
}

VertexArray Parabola::vShape()
{
	int numOfLines = num_of_lines;
	VertexArray parabola(LineStrip, (numOfLines * detail) + 1);
	
	int c = 0;
	for (float i = -10; i <= 10; i += (1.f/ detail))
	{
		float x = (windows_width/2) + i * (windows_width / 20.f);
		float y = (windows_height / 2) - (i * i) * (windows_height / 20.f);
		parabola[c].position = Vector2f(x, y);
		parabola[c].color = Color::White;
		c++;
	}
	
	return parabola;
}
