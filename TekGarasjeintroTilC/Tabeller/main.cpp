#include <stdio.h>
#include <stdint.h>

/* oppgave etter gjennomgang:
Finn ut hvordan en tabell kan skrives ut vha en funksjon
*/

int main()
{
	uint8_t tabell1[10] = { 5,5,5,5,5,5,5,5,5,5 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tabell1[i]);
	}
	printf("\n");

	tabell1[0] = 1;
	tabell1[1] = 2;

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tabell1[i]);
	}
	printf("\n");

	char tabell2[10] = { 'c','c','c','c','c','c','c','c','c','c' };
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