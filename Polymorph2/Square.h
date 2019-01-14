#pragma once

#include "Rectangle.h"

class Square : public Rectangle
{
public:
	Square(int leftUpperX, int leftUpperY, int length) : Rectangle(leftUpperX, leftUpperY, length, length)
	{
	}

	virtual void Load(char* path) override;
	virtual void Print() override;
	virtual void Save(char* path) override;
};