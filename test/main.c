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
		printf("���� �߸��Ǿ�!!");
	}

	printf("Hello, World!\n");
	return;
}

void* swapDouble(double* pa, double* pb)
{
	// 1. �Է� �� �������� üũ : NULL�� �ƴϾ�� ��
	if (pa == NULL || pb == NULL)
	{
		return NULL;
	}
}
