#include<stdio.h>
#include<iostream>
#include"chose.h"
#include"demo.h"
#include"point.h"
#include"set_int.h"

int main()
{
	//-----------------------------------------------------------------------------------------------------------------------------------------
	//74
	chose ch1;

	ch1.affichage();

	ch1.~chose();

	chose* adc = new chose;
	//Le chose nouvellement cr�er ne sera pas d�truit

	//-----------------------------------------------------------------------------------------------------------------------------------------
	//75
	std::cout << "\n";
	std::cout << "Exercice 75\n";
	std::cout << "\n";
	
	void fct(demo, demo*);

	std::cout << "D�but main\n";

	demo a;
	demo b = 2;
	demo c = a;
	demo* adr = new demo(3, 3);

	fct(a, adr);

	demo* d = new demo(4, 4);
	c = demo(5, 5);

	std::cout << "Fin main\n";

	

	//Les r�sultats fournis sont des mise � jours succesies des diff�rentes valeures ins�rer et modifi� au cours de programme

//----------------------------------------------------------------------------------------------------------------------------------------------
//76
	std::cout << "\n";
	std::cout << "Exercice 76\n";
	std::cout << "\n";
	
	point tab[4];	//Gestion int�grale du tableau, cr�ation et destruction

	std::cout << "\n";
	std::cout << "NOTE: le programme detruit des elements de l'exercice 75 pour une raisons inconnue\n";
	std::cout << "\n";

//----------------------------------------------------------------------------------------------------------------------------------------------
//77
	std::cout << "\n";
	std::cout << "Exercice 77\n";
	std::cout << "\n";

	int max = 0, n = 0;

	std::cout << "\n Donnez la taille du tableau\n";
	std::cin >> max;

	set_int int_table(max);

	std::cout << "\n Donnez l entier a verifier\n";
	std::cin >> n;

	int_table.entier(n);	//Permet de tester le nombre de cases du tableau utiliser

	int_table.distinct();	//Permet de tester le nombre d'entier diff�rents dans un tableau (77.2)

	set_int table2(int_table);		//Cr�ation d'un tableau par copie

	return 0;
}

void fct(demo d, demo* add)
{
	std::cout << "entr�e fct\n";
	delete add;
	std::cout << " sortie \n";
}

