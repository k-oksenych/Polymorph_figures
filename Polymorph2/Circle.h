#pragma once

#include <iostream>
#include <fstream>

#include "Ellipse.h"

class Circle : public Ellipse
{
public:
	Circle(int centerX, int centerY, int radius) : Ellipse(centerX, centerY, radius*2, radius*2)
	{
	}

	virtual void Load(char* path) override;
	virtual void Print() override;
	virtual void Save(char* path) override;
};