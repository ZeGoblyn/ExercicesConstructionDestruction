#pragma once

#include<iostream>
#include<stdio.h>

using namespace std;

class demo
{
private:

	int x, y;

public:
	demo(int abs = 1, int ord = 0)
	{
		x = abs; y = ord;
		std::cout << "Constructeur I :" << x << " " << y << "\n";
	}

	//demo();

	demo(demo&);

	~demo();

};
