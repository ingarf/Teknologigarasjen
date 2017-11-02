#include <stdio.h>

void Test(bool a, bool b)
{
	printf("a er %s, ", a ? "true" : "false");
	printf("b er %s\n", b ? "true" : "false");
	printf(" a && b is %s\n", a&&b ? "true" : "false");
	printf(" a || b is %s\n", a||b ? "true" : "false");
}

int main()
{
	bool la = true;
	bool lb = true;
	Test(la,lb);

	printf("\n");

	Test(true, false);

	printf("\n");

	Test(false, true);

	printf("\n");

	Test(false, false);

	printf("\n");


	getchar();

	return 0;
}