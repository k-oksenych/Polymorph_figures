#pragma once

class Figure
{
public:
	virtual void Load(char* path) = 0;
	virtual void Print() = 0;
	virtual void Save(char* path) = 0;
};