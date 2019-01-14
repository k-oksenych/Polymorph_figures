#include <iostream>
#include <fstream>

#include "Rectangle.h"

using namespace std;

void Rectangle::Print()
{
	cout << "Figure: Rectangle" << endl;
	cout << "Left upper corner coordinates:" << endl;
	cout << "X: " << m_leftUpperX << " Y: " << m_leftUpperY << endl;
	cout << "Width: " << m_width << endl;
	cout << "Height: " << m_height << endl;
}

void Rectangle::Save(char* path)
{
	ofstream file;
	file.open(path, ios::app);

	if (file.is_open())
	{
		file << 'R' << endl << m_leftUpperX << endl << m_leftUpperY << endl << m_width << endl << m_height << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void Rectangle::Load(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		int x, y, width, height;
		char c;

		do {
			file >> c;
		} while (c != 'R');

		file >> x >> y >> width >> height;

		m_leftUpperX = x;
		m_leftUpperY = y;
		m_width = width;
		m_height = height;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}