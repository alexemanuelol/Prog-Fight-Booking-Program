#ifndef _Functions_h
#define _Functions_h

#define ledig 0
#define upptagen 1

typedef struct {
	int bussinessS[2][6];  // Matris f�r lagring av lediga/ upptagna platser i Aff�rsklass Special
	int bussiness[8][6];   // Matris f�r lagring av lediga/ upptagna platser i Aff�rsklass
	int economyS[3][6];    // Matris f�r lagring av lediga/ upptagna platser i Ekonomiklass Special
	int economy[17][6];    // Matris f�r lagring av lediga/ upptagna platser i Ekonomiklass
	int bussiS[2][6];   // Lagras numrering av platserna i Aff�rsklass Special
	int bussi[8][6];    // Lagras numrering av platserna i Aff�rsklass
	int ecoS[3][6];     // Lagras numrering av platserna i Ekonomiklass Special
	int eco[17][6];     // Lagras numrering av platserna i Ekonomiklass

} seats;

typedef struct {
	int bussinessOrEconomy;            // I "bussinessOrEconomy", "numOfSeats", "windowOrMiddle" och "special" lagras anv�ndarens inmatning
	int numOfSeats;
	int windowOrMiddle;
	char special;
	char fortsatta;          // Alternativet av om man vill forts�tta till s�kningen lagras h�r
} choice;

void introBanner();    // Introduktions banner till boknings programmet
seats randomizeSeats();   // .txt fil skapas med �verblick av planet. Slumptal samt platsnummer skickas till structen "seats"
int mainMenu();             // Meny f�r de tre valen ("Reservera plats", "�verblick p� lediga platser" och "Avsluta"
choice reserveSeats();      // H�r matas anv�ndarens kriterier in
int seeSeats(seats randomSeats);        // �verblick �ver vilka platser som �r lediga och vilka som �r upptagna
seats suggest(choice kriterier, seats a);   // "s�kningsfunktionen" S�ker lediga platser beroende p� anv�ndarens kriterier.

#endif