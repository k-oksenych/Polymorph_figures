#include <iostream>
#include <fstream>

#include "Circle.h"

using namespace std;

void Circle::Print()
{
	cout << "Figure: Circle" << endl;
	cout << "Center coordinates:" << endl;
	cout << "X: " << m_centerX << " Y: " << m_centerY << endl;
	cout << "Radius: " << m_width / 2 << endl;
}

void Circle::Save(char* path)
{
	ofstream file;
	file.open(path, ios::app);

	if (file.is_open())
	{
		file << 'C' << endl << m_centerX << endl << m_centerY << endl << m_width << endl << m_height << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void Circle::Load(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		int x, y, width, height;
		char c;

		do {
			file >> c;
		} while (c != 'C');

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