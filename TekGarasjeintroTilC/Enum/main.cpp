#include <stdio.h>

/* Oppgave etter gjennomgang:
- Lag en enum som beskriver noen tilstander i en tilstandsmaskin (statemachine), 3-4 tilstander
- Lag en loop
	- Skriv ut navnet p� tilstanden
	- G� til neste tilstand (eller f�rste tilstand dersom n�v�rende er siste tilstand)
- Avbryt loopen n�r den har g�tt gjennom alle tilstandene 4 ganger
*/

enum Farger
{
	Yellow,
	Red,
	Blue,
	Green
};

void PrintColor(enum Farger f)
{
	switch (f)
	{
	case Yellow:
		printf("Fargen er gul\n");
		break;
	case Red:
		printf("Fargen er red\n");
		break;
	default:
		printf("Fargen er bl� eller gr�nn\n");
		break;
	}
}

int main()
{
	enum Farger farge;

	farge = Yellow;

	PrintColor(farge);

	farge = Green;

	PrintColor(farge);

	farge = Grey;

	PrintColor(farge);

	return 0;
}