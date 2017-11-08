#include <stdio.h>

/* Oppgave etter gjennomgang:
- Lag en enum som beskriver noen tilstander i en tilstandsmaskin (statemachine), 3-4 tilstander
- Lag en loop
	- Skriv ut navnet p� tilstanden
	- G� til neste tilstand (eller f�rste tilstand dersom n�v�rende er siste tilstand)
- Avbryt loopen n�r den har g�tt gjennom alle tilstandene 4 ganger
*/

enum OnOff
{
	On,
	Off
};

enum Farger
{
	Yellow=On,
	Red=42,
	Blue,
	Green,
	Grey=66
};


void PrintColor(enum Farger f)
{
	switch (f)
	{
	case Yellow:	// case 0
		printf("Fargen er gul\n");
		break;
	case Red:		// case 1
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