#include<stdio.h>
#include<iostream>
#include"chose.h"

//Constructeur par défaut
chose::chose()
{
	this->x = 1;
}

//Destructeur
chose::~chose()
{

}

//Affichage simple
void chose::affichage()
{
	std::cout << "Bonjour" << std::endl;
}