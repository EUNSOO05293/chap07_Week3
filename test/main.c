#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* swapDouble(double* pa, double* pb); // ���漱��

int main()
{
	double a = 3.14;
	double b = 5.12;

	double* presult1 = (double*)swapDouble(&a, &b);
	if (presult1 == NULL)
	{
		printf("1���� �߸��Ǿ�!!");
	}
	else
	{
		printf("a = %f, b= %f\n", a, b);
	}

	double* presult2 = (double*)swapDouble((double*) NULL, & b);
	if (presult2 == NULL)
	{
		printf("2���� �߸��Ǿ�!!");
	}
	

}

void* swapDouble(double* pa, double* pb)
{
	// 1. �Է� �� �������� üũ : NULL�� �ƴϾ�� ��
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
