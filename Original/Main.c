#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Functions.h"

void main()                                                                                                                                            // MAIN
{
	seats randomSeats;
	choice kriterier;
	int menyVal = 0;

	introBanner(); // Introbanner skrivs ut i konsolen.
	randomSeats = randomizeSeats(); //Slumptal fyller matriserna i "seats" och platsnummer till respektive matriser.
	while (1)
	{
		menyVal = mainMenu();
		if (menyVal == 1)
		{
			kriterier = reserveSeats();  // Fr�gor om �nskem�l f�r platserna ges.
			if (kriterier.fortsatta == 'n') //�ngrar man sina val klickar man p� n och skickas till huvudmenyn
				continue;
			randomSeats = suggest(kriterier, randomSeats); //struktarna skickas till funktionen suggest som letar reda p� r�tt kombination av val.
		}
		else if (menyVal == 2) {
			seeSeats(randomSeats);   // �verblick av lediga platser.
		}
		else if (menyVal == 3)
		{
			printf("V�lkommen �ter!\n");
			system("pause");
			exit(0);
		}
		system("cls");  // T�mmer konsol f�nstret
	}
}