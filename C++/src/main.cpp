/*
	File: main.cpp
	Author: Lokman "CubeBreak" Ahmed
	Created on 6th July 2018
*/

#include <iostream>

#pragma region Example 1.1
#if 1

int main() 
{
	int summe;
	int summand1;
	int summand2;
	 //Lies zwei Zahlen
	std::cout << "Zwei ganze Zahlen eingeben: ";
	std::cin >> summand1 >> summand2;
	/* Berechne die Summe beider Zahlen */
	summe = summand1 + summand2;
	//Zeige das Ergebnis auf dem Bildschirm an
	std::cout << "Summe = " << summe << std::endl;

	system("pause");
	return 0;
}

#endif
#pragma endregion
