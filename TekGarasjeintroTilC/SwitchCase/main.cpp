#include <stdio.h>
#include <stdint.h>

/* Oppgave etter gjennomgang:
Skriv om slik at brukeren taster inn en bokstav.
switch/case'en skriver ut om det er vokal eller konsonant
*/

int main()
{
	int val = 0;

	printf("Angi en verdi: ");
	scanf_s("%d", &val);

	switch (val)
	{
	case 0:
		printf("Du skrev 0\n");
		break;
	case 1:
		printf("Du skrev 1\n");
		break;
	case 2:
		printf("Du skrev 2\n");
		break;
	default:
		printf("Du ikke 0, 1 eller 2\n");
		break;
	}


	return 0;
}