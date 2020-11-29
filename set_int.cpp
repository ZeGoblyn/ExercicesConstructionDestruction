#include<stdio.h>
#include<iostream>
#include"set_int.h"

set_int::set_int(int max)
{
	int i, test = 0,val = 0, compteur = 0;
	
	this->compt_int = 0;
	this->taille = max;
	this->adrTab = new int[this->taille];

	for (i = 0; i < taille; i++)
	{
		this->adrTab[i] = 0;
	}

	while (test == 0)
	{
		std::cout << "Pour rentrer un nouvel element dans le tableau, tapez 0, sinon tapez 1\n";
		std::cin >> test;

		if (test == 0)
		{
			std::cout << "Donnez un nouvel entier a rentrer\n";
			std::cin >> val;
			
			for (i = 0; i < taille; i++)		//Boucle qui parcours le tableau jusqu'a trouver un espace non utilisé
			{
				if (this->adrTab[i] == 0)		//Vérification si l'espace est utilisé
				{
					this->adrTab[i] = val;
					this->compt_int++;
					compteur++;					//Permet de déterminer le nombre d'éléments présent dans le tableaux
					break;
				}
			}
		}
		else
		{
			std::cout << "Fin du remplissage\n";
			std::cout << "Il y a " << compteur << " cases du tableaux utilises\n";

			for (i = 0; i < taille; i++)
			{
				std::cout << this->adrTab[i];	
			}
		}
	}
}

set_int::set_int(set_int& tabl)		//Constructeur par copie
{
	int i, test = 0, val = 0, compteur = 0;

	this->compt_int = tabl.compt_int;
	this->taille = tabl.taille;
	this->adrTab = new int[this->taille];

	for (i = 0; i < taille; i++)
	{
		this->adrTab[i] = tabl.adrTab[i];
	}
}

set_int::~set_int()
{
}

void set_int::entier(int n)
{
	int i;
	bool pres = false;

	//std::cout << compt_int;

	for (i = 0; i < this->compt_int; i++)
	{
		if (this->adrTab[i] == n)
		{
			pres = true;
		}
	}

	if (pres == true)
	{
		std::cout << "L entier demander est present\n";
	}
	else
	{
		std::cout << "L entier demander n est pas present\n";
	}
}

void set_int::distinct()
{
	int i, j, res = 0;

	for (i = 0; i < this->compt_int; i++)	//vérification des éléments un après l'autre
	{
		for (j = 0; j < i; j++)
		{
			if (this->adrTab[i] == this->adrTab[j])
			{
				break;
			}
		}

		if (i == j)				//Si un élément distinct est toruver, le compteur augmente
		{
			res++;
		}
	}

	std::cout << "\n Il y a " << res << " elements differents dans le tableau \n";
}

/*void set_int::insert(int table)
{
	int test = 0;

	while (test == 0)
	{
		std::cout << "Pour rentrer un nouvel element dans le tableau, tapez 0, sinon tapez 1\n";
		std::cin >> test;
		
		if (test == 0)
		{

		}
	}
}*/
