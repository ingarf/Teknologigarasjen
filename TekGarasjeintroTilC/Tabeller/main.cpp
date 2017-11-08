#include <stdio.h>
#include <stdint.h>

/* oppgave etter gjennomgang:
Finn ut hvordan en tabell kan skrives ut vha en funksjon
*/

#define LENGDE	100


int main()
{
	char tabell[LENGDE];

	for (int i = 0; i < LENGDE; i++)
	{
		if (i != 3)
		{
			tabell[i] = i + 1;
		}
		else {
			tabell[i] = 254;
		}
	}

	int sum = 0;
	for (int i = 0; i < LENGDE; i++)
	{
		printf("%d ", tabell[i]);
		sum = sum + tabell[i];
	}
	printf("\n");

	

	float gjsnitt = sum / LENGDE;
	printf("Gjennomsnitt=%3.2f\n", gjsnitt);

	for (int i = 0; i < LENGDE; i++)
	{
		printf("%d ", tabell[i]);
	}
	printf("\n");


	char tabell2[10];
	for (int i = 0; i < 10; i++)
	{
		tabell2[i] = 'c';
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%c ", tabell2[i]);
	}
	printf("\n");
	tabell2[3] = 'a';
	tabell2[4] = 'b';
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", tabell2[i]);
	}
	printf("\n");

	getchar();

	return 0;
}