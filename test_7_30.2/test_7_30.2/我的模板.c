#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAX(X,Y) (X>Y?X:Y)

//�����ⲿ����
extern int Add(int, int);
void test()
{
	//int a = 1;
	static int a = 1; // ��̬�ľֲ�����  	a++;
	printf("a = %d\n", a);
}



int main(void)
{
	//int a = 3;
	//// ��~��   ��λȡ��
	//printf("%d", ~a);

	// �������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
	// ʹ�õģ���ӡ�����������Դ��

	//int a = 10;
	//int b = a++; //����++�� ��ʹ�ã� ��++
	//a = 10;
	//int c = ++a; //ǰ��++�� ��++�� ��ʹ��
	//printf("a = %d b = %d\n", a, b);
	// ==================ǿ������ת��===============================

	//int a = (int)3.14;
	//printf("%d", a);
	// ==============���������=======================

	//int a = 1;
	//int b = 2;
	//int max = a > b ? a : b;
	//printf("%d", max);
	// ============�±�,��������=============
	//int arr[] = { 0 };
	//arr[1];
	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b);
	// =========register======================

	//register int a = 10;//����ŵ��Ĵ�����
	//==========typedef================
	//typedef unsigned int u_int;
	//unsigned int num1 = 20;
	//u_int num2 = 20;
	//printf("%d", num1 == num2);


	//===========static===================
	// ����ȫ�ֱ���ʱ��    �ı��˱�����������  ����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
	// ���ξֲ�����ʱ��    �ֲ��������������ڻ�䳤
	// ���κ���ʱ��        �ı��˺�������������------�ⲿ��������->�ڲ���������


	//int i = 0;
	//while (i<5)
	//{
	//	test();
	//	i++;
	//}
	//printf("%d", Add(1, 2));

	//=========extern===================
	// �����ⲿ����

	//extern int ex;
	//printf("%d\n", ex);

	//==========#define===================

	// �����ʶ������

//#define MAX 100
//	printf("%d", MAX);

	// �����--������
	//int a = 10;
	//int b = 20;

	//int max = MAX(a, b);
	//printf("%d", max);
	//============ָ��======================
	//int a = 10;
	//int* p = &a;//ȡ��ַ
	//// ��ŵ�ַ�ı���----ָ�����
	//printf("%p\n", p);
	//*p = 20;//* �����ò�����
	//printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'a';
	//printf("%c\n", ch);
	










	return 0;
}