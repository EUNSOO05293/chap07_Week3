#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* swapDouble(double* pa, double* pb);

int main()
{
	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("뭔가 잘못되었!!");
	}

	printf("Hello, World!\n");
	return;
}

void* swapDouble(double* pa, double* pb)
{
	// 1. 입력 값 정상인지 체크 : NULL이 아니어야 함
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}
}
