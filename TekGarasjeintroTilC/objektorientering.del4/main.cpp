#include <stdio.h>

enum Farger
{
	Yellow,
	Brown,
	White,
	Blue
};

enum MotorType
{
	Bensin,
	Diesel,
	Hybrid
};

class Bil
{
protected:
	Farger farge;
	MotorType motor;

public:
	Bil()
	{
		printf("Lager bil\n");
	}

	~Bil()
	{
		printf("knuser bil\n");
	}

	void SettFarge(Farger nyfarge)
	{
		farge = nyfarge;
	}

	void SkrivUtFarge()
	{
		switch (farge)
		{
		case Yellow:
			printf("Yellow\n");
			break;
		case Brown:
			printf("Brown\n");
			break;
		case White:
			printf("White\n");
			break;
		case Blue:
			printf("Blue\n");
			break;
		default:
			break;
		}
	}

	virtual void Tut() = 0;
};

class Volvo : public Bil
{
public:
	void Tut()
	{
		printf("Volvo: Honk!\n");
	}
};

class Ford : public Bil
{
public:
	void Tut()
	{
		printf("Ford: piiip\n");
	}
};

int main()
{

	Volvo bil1;

	//bil1.

	Bil *minBil = NULL;
	int biltype;

	printf("Velg bil. 1=volvo, 2=ford: ");
	scanf_s("%d", &biltype);
	switch (biltype)
	{
	case 1:
		minBil = new Volvo();
		break;
	case 2:
		minBil = new Ford();
		break;
	default:
		printf("Feil biltype\n");
		break;
	}

	if (minBil != NULL)
	{
		minBil->Tut();
	}



	getchar();
	getchar();

	if (minBil != NULL)
	{
		delete minBil;
		minBil = NULL;
	}

	if (minBil != NULL)
	{
		minBil->Tut();
	}
	getchar();

	return 0;
}