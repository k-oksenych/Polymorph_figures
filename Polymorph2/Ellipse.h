#pragma once

#include <iostream>
#include <fstream>

#include "Figure.h"

class Ellipse : public Figure
{
public:
	Ellipse() = default;
	Ellipse(int centerX, int centerY, int width, int height) :
		m_centerX(centerX),
		m_centerY(centerY),
		m_width(width),
		m_height(height)
	{
	}

	virtual void Load(char* path) override;
	virtual void Print() override;
	virtual void Save(char* path) override;

protected:
	int m_centerX;
	int m_centerY;
	int m_width;
	int m_height;
};