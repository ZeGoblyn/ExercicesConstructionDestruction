#pragma once

#include<stdio.h>
#include<iostream>

class set_int
{
private:
	int compt_int = 0;	//Nombre maximum d'�l�ment
	int taille = 0;		//Taille du tableau
	int check = 0;		//Acceuil du nombre don la pr�sence doit �tre v�rifi�e
	int* adrTab;		//Adresse du tableau

public:
	set_int(int max);

	set_int(set_int& tabl);

	~set_int();

	//void insert(int table);

	void entier(int n);

	void distinct();
};