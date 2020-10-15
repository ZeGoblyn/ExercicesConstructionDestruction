#include<stdio.h>
#include<iostream>
#include"chose.h"

int main()
{
	//-----------------------------------------------------------------------------------------------------------------------------------------
	//74
	chose ch1;

	ch1.affichage();

	ch1.~chose();

	chose* adc = new chose;

	return 0;
}