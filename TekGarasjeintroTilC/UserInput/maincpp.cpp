#include <stdio.h>

void SkrivutVal(float v)
{
	printf("v=%f\n", v);
}

int main()
{
	float val=7;

	printf("Angi en verdi: ");
	scanf_s("%f", &val);

	SkrivutVal(val);

	fseek(stdin, 0, SEEK_END);
	getchar();

	return 0;
}