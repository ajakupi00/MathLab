#include "CoordinateSystem.h"



CoordinateSystem::CoordinateSystem(int windows_height, int windows_width, int num_of_lines)
{
	this->windows_height = windows_height;
	this->windows_width = windows_width;
	this->num_of_lines = num_of_lines;
}

VertexArray CoordinateSystem::vertexCoordinate()
{
	VertexArray coSys(Lines, 4);

	coSys[0].position = Vector2f(windows_width / 2, 0.f);
	coSys[1].position = Vector2f(windows_width / 2, windows_height );
	coSys[2].position = Vector2f(0.f, windows_height / 2);
	coSys[3].position = Vector2f(windows_width, windows_height / 2);


	
	return coSys;
}

VertexArray CoordinateSystem::xLines()
{
	int numberOfLines = this->num_of_lines * 2;
	VertexArray xLines(Lines, numberOfLines);
	for (int i = 0; i < numberOfLines; i += 2)
	{	
		float xPos = i * (windows_width / (float)numberOfLines);
		xLines[i].position = Vector2f(xPos, (windows_height / 2) - 10);
		xLines[i + 1].position = Vector2f(xPos, (windows_height / 2) + 10);
	}

	return xLines;
}

VertexArray CoordinateSystem::yLines()
{
	int numberOfLines = this->num_of_lines * 2;
	VertexArray yLines(Lines, numberOfLines);
	for (int i = 0; i < numberOfLines; i += 2)
	{
		float yPos = i * (windows_height / (float)numberOfLines);
		yLines[i].position = Vector2f((windows_width / 2) - 10, yPos);
		yLines[i + 1].position = Vector2f((windows_width / 2) + 10, yPos);
	}

	return yLines;
}

