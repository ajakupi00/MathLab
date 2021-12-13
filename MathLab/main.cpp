#include <iostream>
#include <SFML/Graphics.hpp>
#include "CoordinateSystem.h"
#include "Parabola.h"
using namespace std;
using namespace sf;

const int WINDOWS_HEIGHT = 800;
const int WINDOWS_WIDTH = 800;
const int NUM_OF_LINES = 20;

int main()
{
    RenderWindow window(VideoMode(WINDOWS_WIDTH, WINDOWS_HEIGHT), "MathLab");
    CoordinateSystem coordinate(WINDOWS_HEIGHT, WINDOWS_WIDTH, NUM_OF_LINES);
    Parabola parabola(WINDOWS_HEIGHT, WINDOWS_WIDTH, NUM_OF_LINES);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(coordinate.vertexCoordinate());
        window.draw(coordinate.xLines());
        window.draw(coordinate.yLines());
        window.draw(parabola.DrawParabola(5));
        


        window.display();
    }

    return 0;
}