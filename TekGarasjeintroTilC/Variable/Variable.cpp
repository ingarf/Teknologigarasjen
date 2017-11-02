// Variable.cpp : Defines the entry point for the console application.
//

#include <stdio.h>


short Add(short v1, short v2)
{
	short res = v1 + v2;
	return res;
}

int main()
{
	int i = 51;
	short b1=1, b2=0;

	
//	for (i=0;i<=50;i=i+b2)
	do
	{
		b2 = Add(b1, b2);
		printf("b2=%d\n", b2);
		i = i + b2;
	} while (i <= 50);

	getchar();

    return 0;
}

