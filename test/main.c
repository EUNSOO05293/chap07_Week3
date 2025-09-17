#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* swapDouble(double* pa, double* pb); // 전방선언

int main()
{
	double a = 3.14;
	double b = 5.12;

	double* presult1 = (double*)swapDouble(&a, &b);
	if (presult1 == NULL)
	{
		printf("1뭔가 잘못되었!!");
	}
	else
	{
		printf("a = %f, b= %f\n", a, b);
	}

	double* presult2 = (double*)swapDouble((double*) NULL, & b);
	if (presult2 == NULL)
	{
		printf("2뭔가 잘못되었!!");
	}
	

}

void* swapDouble(double* pa, double* pb)
{
	// 1. 입력 값 정상인지 체크 : NULL이 아니어야 함
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}

	//2. swap two values
	double tmp = *pa;
	*pb = *pb;
	*pb = tmp;

	return pa;
}
