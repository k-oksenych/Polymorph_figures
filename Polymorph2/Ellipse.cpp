#include <iostream>
#include <fstream>

#include "Ellipse.h"

using namespace std;

void Ellipse::Print()
{
	cout << "Figure: Ellipse" << endl;
	cout << "Center coordinates:" << endl;
	cout << "X: " << m_centerX << " Y: " << m_centerY << endl;
	cout << "Width of circumscribed rectangle: " << m_width << endl;
	cout << "Height of circumscribed rectangle: " << m_height << endl;
}

void Ellipse::Save(char* path)
{
	ofstream file;
	file.open(path, ios::app);

	if (file.is_open())
	{
		file << 'E' << endl << m_centerX << endl << m_centerY << endl << m_width << endl << m_height << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void Ellipse::Load(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		int x, y, width, height;
		char c;

		do {
			file >> c;
		} while (c != 'E');

		file >> x >> y >> width >> height;

		m_centerX = x;
		m_centerY = y;
		m_width = width;
		m_height = height;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}