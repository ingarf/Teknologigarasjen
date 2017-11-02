
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <Windows.h>

#define BIT0	0b00000001
#define BIT1	0b00000010
#define BIT2	0b00000100
#define BIT3	0b00001000



uint8_t portA = 0b00000000;
//uint8_t portA = 0;

uint8_t portB = 0b00000000;
//uint8_t portB = 0;




void setup()
{
	portA = BIT1;
	printf("Init: PortA = %d\n", portA);
}

void loop()
{
	uint8_t avalue = portA;
	
	printf("porta=%d\n", avalue);

	if (!(avalue & BIT0))
	{
		printf("knapp 0 trykket\n");
		portB = portB | BIT0;
	}
	else
	{
		printf("knapp 0 ikke trykket\n");

	}

	if (!(avalue & BIT3))
	{
		printf("knapp 3 trykket\n");
		portB = portB | BIT3;
	}
	else
	{
		printf("knapp 3 ikke trykket\n");
		portB &= ~BIT3;
	}

}














int main()
{

	setup();

	while (true)
	{
		loop();
		Sleep(1000);
	}




	getchar();

	return 0;
}