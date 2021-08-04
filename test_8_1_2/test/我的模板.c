#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int is_prime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;


}

void nump(int* p)
{
	(*p)++;
}

int main(void)
{
	//for (int i = 100; i <= 200; i++)
	//{
	//	if (is_prime(i) == 1)
	//	{
	//		printf("%d\n", i);
	//	}
	//}
	int num = 0;
	nump(&num);
	printf("%d", num);
	nump(&num);
	printf("%d", num);
	nump(&num);
	printf("%d", num);




	return 0;
}