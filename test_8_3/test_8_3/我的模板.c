#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1; //假设这一趟要排序的数据已经有序
		//每一趟冒泡排序
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}

		}
		if (flag == 1)
		{
			break;
		}

	}

	
	
}

int main(void)
{
	//创建数组
	//int arr1[10];
	//char arr2[5];
	//int n = 5;
	//char arr3[n]; // 不行
	//数组的初始化
	//int arr1[10] = {1,2,3};//不完全初始化
	//char arr2[5] = {'a', 'b'};
	//char arr3[5] = "ab";
	//char arr4[] = "abcdef";
	//printf("%d\n", sizeof(arr4));
	//printf("%d\n", strlen(arr4));
	//int n = 5;
	//char arr3[n]; // 不行

	//数组的访问=============================
	//char arr[] = "abcdef";
	//printf("%c", arr[3]);
	//数组在内存中的布局=====================
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d] = %p\n", i, &arr[i]);

	//}
	//二维数组============================
	//int arr[3][4] = {
	//	{1,1,1,1},
	//	{2,2,2,2},
	//	{3,3,3,3},
	//};
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}

	//}
	//int arr1[2][4] = { {1,2,3,4},{5,6,7,8} };
	//===============冒泡排序==================
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz); // arr[]传参 实际传递的是数组arr首元素的地址
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);

	}




	return 0;
}