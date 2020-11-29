#include<stdio.h>
#include<iostream>
#include"point.h"

point::point()
{
	std::cout << "Donnez un entier" << "\n";
	std::cin >> num;
	std::cout << "Point creer " << num << "\n";
}

point::~point()
{
	std::cout << "Point detruit " << num << "\n";
}
