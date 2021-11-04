#include <iostream>
#include <SFML/Graphics.hpp>
#include "CoordinateSystem.h"
using namespace std;
using namespace sf;

const int WINDOWS_HEIGHT = 800;
const int WINDOWS_WIDTH = 800;

int main()
{
    RenderWindow window(VideoMode(WINDOWS_WIDTH, WINDOWS_HEIGHT), "MathLab");
    CoordinateSystem coordinate(WINDOWS_HEIGHT, WINDOWS_WIDTH);

    VertexArray xLine(Lines, 2);


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
        window.draw(coordinate.zero());


        window.display();
    }

    return 0;
}