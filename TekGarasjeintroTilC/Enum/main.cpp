#include <stdio.h>

/* Oppgave etter gjennomgang:
- Lag en enum som beskriver noen tilstander i en tilstandsmaskin (statemachine), 3-4 tilstander
- Lag en loop
	- Skriv ut navnet på tilstanden
	- Gå til neste tilstand (eller første tilstand dersom nåværende er siste tilstand)
- Avbryt loopen når den har gått gjennom alle tilstandene 4 ganger
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
		printf("Fargen er blå eller grønn\n");
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