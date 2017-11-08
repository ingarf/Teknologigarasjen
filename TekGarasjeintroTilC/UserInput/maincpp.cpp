#include <stdio.h>

void SkrivutVal(float v)
{
	printf("v=%f\n", v);
}

void LeggSammen(int tall1, int tall2, int *resultat)
{
	*resultat = tall1 + tall2;
}

int main()
{
	float val=7;

	int i_val = 3;
	LeggSammen(2, 3, &i_val);

	printf("Angi en verdi: ");
	scanf_s("%f", &val);

	SkrivutVal(val);

	fseek(stdin, 0, SEEK_END);
	getchar();

	return 0;
}