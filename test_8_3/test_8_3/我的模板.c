#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flag = 1; //������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����
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
	//��������
	//int arr1[10];
	//char arr2[5];
	//int n = 5;
	//char arr3[n]; // ����
	//����ĳ�ʼ��
	//int arr1[10] = {1,2,3};//����ȫ��ʼ��
	//char arr2[5] = {'a', 'b'};
	//char arr3[5] = "ab";
	//char arr4[] = "abcdef";
	//printf("%d\n", sizeof(arr4));
	//printf("%d\n", strlen(arr4));
	//int n = 5;
	//char arr3[n]; // ����

	//����ķ���=============================
	//char arr[] = "abcdef";
	//printf("%c", arr[3]);
	//�������ڴ��еĲ���=====================
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d] = %p\n", i, &arr[i]);

	//}
	//��ά����============================
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
	//===============ð������==================
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz); // arr[]���� ʵ�ʴ��ݵ�������arr��Ԫ�صĵ�ַ
	for (int i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);

	}




	return 0;
}