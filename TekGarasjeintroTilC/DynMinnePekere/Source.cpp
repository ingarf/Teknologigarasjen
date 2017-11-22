#include <stdio.h>
#include <iostream>

#define ARRAY_SIZE 100

typedef struct myStruct
{
	int intVal1;
	int intVal2;
} MyStructType;

MyStructType *ptrGlobalMinStruktArr;

void DynStruct()
{
	struct myStruct minStrukt;

	minStrukt.intVal1 = 1;
	minStrukt.intVal2 = 2;

	MyStructType *ptrMinStrukt = new MyStructType;

	ptrMinStrukt->intVal1 = 6;
	ptrMinStrukt->intVal2 = 2;

	MyStructType *ptrMinStruktArr = new MyStructType[ARRAY_SIZE];
	if (ptrMinStruktArr == NULL)
	{
		// Gi beskjed om feil
		return;
	}

	ptrMinStruktArr->intVal1 = 1;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		ptrMinStruktArr[i].intVal1 = i + 1;
	}

	ptrGlobalMinStruktArr = ptrMinStruktArr;
}



void DynAllocArray()
{
	double *dblDyn = new double;

	double *dblDynArray = new double[ARRAY_SIZE];
	*dblDynArray = 10.3;

	// Do somthing with dblDynArray
	dblDynArray[0] = 10.3245; // = *dblDynArray = 10.3245
	dblDynArray[1] = 20.324; // = *(dblDynArray++) = 20.324... FY!

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		dblDynArray[i] = i + 1;
	}

	double *arrPtr = dblDynArray;
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		*(arrPtr++) = i + 1;	// = arrPtr[i] = i+1;
	}



	delete dblDyn;
	delete dblDynArray;

}

void DynAlloc()
{
	float *dynVar = new float;

	printf("dynVar = 0x%08x, *dynVar=%f\n", dynVar, *dynVar);
	*dynVar = 15.65;
	printf("dynVar = 0x%08X, *dynVar=%f\n", dynVar, *dynVar);

	std::cout << "dynVar =" << dynVar << ", *dynVar=" << *dynVar << std::endl;


	delete dynVar;

	
}



int main()
{

	int *ptr = NULL;

	int a = 1;

	ptr = &a;

	printf("a=%d, ptr=0x%08x, *ptr=%d\n", a, ptr, *ptr);

	DynAlloc();


	DynStruct();

	ptrGlobalMinStruktArr[0].intVal1 = 5;
	ptrGlobalMinStruktArr++;
	delete ptrGlobalMinStruktArr;

	getchar();

	return 0;
}