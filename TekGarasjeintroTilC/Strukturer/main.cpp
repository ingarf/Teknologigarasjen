#include <stdio.h>

void PrintTabeller(int temp, int fukt)
{
	printf("Temperatur=%d, fuktighet=%d\n", temp, fukt);
}

struct MedArray
{
	int funktighet[5];
	int temperatur[5];
};

enum e_humor {
	Sur,
	Blid,
	Glad,
	Full
};

struct TempFukt
{
	int temperatur;
	float fuktighet;
	double voltage;
	enum e_humor humor;
};

void PrintTabell(struct TempFukt tf)
{
	printf("Temperatur=%d, fuktighet=%d\n", tf.temperatur, tf.fuktighet);
}

int main()
{
	int temperatur[5];
	int fuktighet[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Skriv inn tall par nr %d: ", i);
		scanf_s("%d %d", &temperatur[i], &fuktighet[i]);
	}

	PrintTabeller(temperatur[0], fuktighet[0]);

	struct TempFukt Tabell[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Skriv inn tall par nr %d: ", i);
		scanf_s("%d %d", &Tabell[i].temperatur, &Tabell[i].fuktighet);
	}

	PrintTabell(Tabell[0]);

	return 0;
}