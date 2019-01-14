#include <iostream>
#include <fstream>

#include "Square.h"

using namespace std;

void Square::Print()
{
	cout << "Figure: Square" << endl;
	cout << "Left upper corner coordinates:" << endl;
	cout << "X: " << m_leftUpperX << " Y: " << m_leftUpperY << endl;
	cout << "Side length: " << m_width << endl;
}

void Square::Save(char* path)
{
	ofstream file;
	file.open(path, ios::app);

	if (file.is_open())
	{
		file << 'S' << endl << m_leftUpperX << endl << m_leftUpperY << endl << m_width << endl << m_height << endl;

		file.close();
	}
	else
	{
		cout << "Error" << endl;
	}
}

void Square::Load(char* path)
{
	ifstream file;
	file.open(path);

	if (file.is_open())
	{
		int x, y, width, height;
		char c;

		do {
			file >> c;
		} while (c != 'S');

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