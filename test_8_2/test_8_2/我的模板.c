#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// �ݹ�
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}


}
int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);

	}
}

//int Fib1(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
long long Fib(int n)
{
	long long a = 1;
	long long b = 1;
	long long c = 1;

	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main(void)
{
	//unsigned int num = 0;
	//scanf("%d", &num);
	//// �ݹ�
	//print(num);

	// ========================================

	//char arr[] = "bit";
	//int len = my_strlen(arr); //arr�����飬����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	//printf("len = %d", len);

	// ======================��׳�===========

	//int n = 5;
	//int ret = 0;
	//ret = Fac(n);
	//printf("%d\n", ret);

	// ====================쳲���������========

	int n = 40;
	long long ret = 0;
	ret = Fib(n);
	printf("%d\n", ret);




	return 0;
}