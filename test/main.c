#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* swapDouble(double* pa, double* pb); // ���漱��
void print_array_double(double arr[], int sz);
void printArrayDouble(double* arr, int sz);
int test_printf_array();
int test_swapDouble();


int main()
{
	/*test_swapDouble();*/
	test_printf_array();

	return 0;
}

int test_swapDouble()
{
	double a = 3.14;
	double b = 5.12;

	double* presult1 = (double*)swapDouble(&a, &b);
	if (presult1 == NULL)
	{
		printf("1���� �߸��Ǿ�!!\n");
	}
	
	else
	{
		printf("a = %f, b= %f\n", a, b);
	}
	printf("\n");
	double* presult2 = (double*)swapDouble((double*)NULL, &b);
	if (presult2 == NULL)
	{
		printf("2���� �߸��Ǿ�!!");
	}
	printf("\n");

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

int test_print_array()
{
	double da[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	return 0;
}

// ���: 1���� �Ǽ� �迭�� ����Ѵ�
// �Լ���: print_arrat_double
// �Է� : double Ÿ�� 1���� �迭 �ּ�
// ���: �͹̳ο� �迭�� ������ ���ڰ� ���
// ��ȯ : ����

void print_array_double(double arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf\n", arr[i]);
	}
	printf("\n");

}

void printArrayDouble(double* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%lf\n", *arr);
	}
	printf("\n");
	
}

int test_printf_array()
{
	double da[] = { 1.0, 2.0,3.0,4.0,5.0 };

	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);
	printArrayDouble(&da[0], size);

	return 0;

}








