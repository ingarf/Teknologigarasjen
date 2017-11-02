#include <stdio.h>

void snitt()
{
	short v1 = 14;
	short v2 = 23;
	short v3 = 11;
	short v4 = 15;

	short sum;
	
	sum = v1 + v2 + v3 + v4;

	float snitt = sum / 4.0;
	printf("Sum=%d, snitt=%2.2f\n\n", sum, snitt);
}

void loop1()
{
	float flyttall = 0.0;

	for (int i = 0; i < 10; i++)
	{
		flyttall += 1.55;
	}

	printf("Sluttsum=%2.2f\n\n", flyttall);
}

void loop2()
{
	int value = 1;
	int counter = 0;

	while (value <= 256)
	{
		value = value + 3;
		counter++; //counter=counter+1;
	}

	printf("Sluttsum=%d, antall runder i loopen=%d\n", value, counter);
}

int main()
{
	snitt();

	loop1();

	loop2();

	getchar();

	return 0;
}

/*
Lag et program som gj�r f�lgende:
- Lager 4 16 bits variable, og gir dem en verdi
- Beregner gjennomsnittet av disse 4 variablene
- Skriver ut gjennomsnittet (skal ha med 2 desimaler)
- Beregner summen av disse 4 variablene
- Skriver ut summen

- Lager 1 flyttals variabel
- Lager en sl�yfe som kj�rer 10 ganger, og legger til 1.55 til variablen for hver runde i sl�yfen
- Skriver ut slutt summen

- Lager en 1 heltallsvariabel
- Setter denne variablen til 1
- Kj�rer i en sl�yfe som fortsetter til verdien av variablen er st�rre enn 256
- For hver runde i sl�yfen �kes variablen med 3
- Skriv ut sluttverdien OG hvor mange runder sl�yfen kj�rte*/