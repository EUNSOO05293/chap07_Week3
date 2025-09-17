#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* swapDouble(double* pa, double* pb); // 전방선언
void print_array_double(double arr[], int sz);
void printArrayDouble(double* arr, int sz);
int test_printf_array();
int test_swapDouble();
double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
int test_function_pointer();


int main()
{
	/*test_swapDouble();*/
	test_printf_array();
	test_function_pointer();

	return 0;
}

int test_swapDouble()
{
	double a = 3.14;
	double b = 5.12;

	double* presult1 = (double*)swapDouble(&a, &b);
	if (presult1 == NULL)
	{
		printf("1뭔가 잘못되었!!\n");
	}
	
	else
	{
		printf("a = %f, b= %f\n", a, b);
	}
	printf("\n");
	double* presult2 = (double*)swapDouble((double*)NULL, &b);
	if (presult2 == NULL)
	{
		printf("2뭔가 잘못되었!!");
	}
	printf("\n");

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
	*pa = *pb;
	*pb = tmp;

	return pa;
}

int test_print_array()
{
	double da[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	return 0;
}

// 기능: 1차원 실수 배열을 출력한다
// 함수명: print_arrat_double
// 입력 : double 타입 1차원 배열 주소
// 출력: 터미널에 배열의 내용을 예쁘게 출력
// 반환 : 없음

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
		printf("%lf\n", arr[i]);
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

int test_function_pointer()
{
	double (*pfunc)(double a, double b) = NULL;
	double result = 0.0;

	pfunc = add;

	printf("add(3,4) = %f\n"), add(3.0, 4.0);
	result = (*pfunc) (3, 4); // 7.0? 
	printf("(*pfunc)(3,4) = %f\n"), (*pfunc)(3.0, 4.0);

	pfunc = mul;
	printf("(*pfunc)(3,4) = %f\n", (*pfunc)(3.0, 4.0));






}

// 실수 덧셈 결과 반환
// 입력: 두 실수
// 출력: 더한 값
double add(double a, double b)
{
	return a + b;
}

// 기능: 실수 뺄셈
// 입력: 두 실수
// 출력: 뺀 값
double sub(double a, double b)
{
	return a - b;
}
// 기능: 실수 곱셈
// 입력: 두 곱셈
// 출력: 곱한 값
double mul(double a, double b)
{
	return a * b;
}






