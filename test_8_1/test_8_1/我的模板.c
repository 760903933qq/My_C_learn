#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


int 阶乘(int n)
{
	if (n >= 0)
	{
		int ret = 1;
		for (; n > 0; n--)
		{
			ret *= n;
		}
		return ret;

	}
	else
	{
		printf("请输入正整数");
		return 0;
	}
}
int binsearch(int x, int v[], int sz)
{
		
	int n = sz / 2;
	while (x != v[n])
	{

		if (v[n] < x)
		{
			n = (sz + n) / 2;
		}
		else
		{
			n = n / 2;
		}

	}
	return v[n];

}



int main(void)
{

	//{
	//	int s = 0;
	//	for (int i = 1; i <= 4; i++)
	//	{
	//		s += 阶乘(i);


	//	};
	//	printf("s = %d\n", s);
	//}

	//====================================
	//{
	//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int k = 1;
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	int n = binsearch(k,arr,sz);
	//	printf("%d\n", n);
	//}
	char arr1[] = "welcome to bit!!!!!!!!!";
	char arr2[] = "#######################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);

	}



	return 0;
}