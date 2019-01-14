#pragma once

#include "Figure.h"

class Rectangle : public Figure
{
public:
	Rectangle(int leftUpperX, int leftUpperY, int width, int height) :
		m_leftUpperX(leftUpperX),
		m_leftUpperY(leftUpperY),
		m_width(width),
		m_height(height)
	{
	}

	virtual void Print() override;
	virtual void Load(char* path) override;
	virtual void Save(char* path) override;

protected:
	int m_leftUpperX;
	int m_leftUpperY;
	int m_width;
	int m_height;
};