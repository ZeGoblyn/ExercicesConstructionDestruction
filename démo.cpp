#include<stdio.h>
#include<iostream>
#include"d�mo.h"

demo::demo(demo& d)
{
	std::cout << "Constructeur II :" << d.x << " " << d.y << "\n";
	x = d.x; y = d.y;
}

demo::~demo()
{
	std::cout << "Destruction: " << x << " " << y << "\n";
}