#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MAX(X,Y) (X>Y?X:Y)

//声明外部函数
extern int Add(int, int);
void test()
{
	//int a = 1;
	static int a = 1; // 静态的局部变量  	a++;
	printf("a = %d\n", a);
}



int main(void)
{
	//int a = 3;
	//// “~”   按位取反
	//printf("%d", ~a);

	// 负数再内存中存储的时候，存储的是二进制的补码
	// 使用的，打印的是这个数的源码

	//int a = 10;
	//int b = a++; //后置++， 先使用， 再++
	//a = 10;
	//int c = ++a; //前置++， 先++， 再使用
	//printf("a = %d b = %d\n", a, b);
	// ==================强制类型转换===============================

	//int a = (int)3.14;
	//printf("%d", a);
	// ==============条件运算符=======================

	//int a = 1;
	//int b = 2;
	//int max = a > b ? a : b;
	//printf("%d", max);
	// ============下标,函数调用=============
	//int arr[] = { 0 };
	//arr[1];
	//int a = 10;
	//int b = 20;
	//int sum = Add(a, b);
	// =========register======================

	//register int a = 10;//建议放到寄存器里
	//==========typedef================
	//typedef unsigned int u_int;
	//unsigned int num1 = 20;
	//u_int num2 = 20;
	//printf("%d", num1 == num2);


	//===========static===================
	// 修饰全局变量时：    改变了变量的作用域  让其只能在自己所在的源文件内部使用
	// 修饰局部变量时：    局部变量的生命周期会变长
	// 修饰函数时：        改变了函数的连接属性------外部连接属性->内部连接属性


	//int i = 0;
	//while (i<5)
	//{
	//	test();
	//	i++;
	//}
	//printf("%d", Add(1, 2));

	//=========extern===================
	// 声明外部符号

	//extern int ex;
	//printf("%d\n", ex);

	//==========#define===================

	// 定义标识符常量

//#define MAX 100
//	printf("%d", MAX);

	// 定义宏--带参数
	//int a = 10;
	//int b = 20;

	//int max = MAX(a, b);
	//printf("%d", max);
	//============指针======================
	//int a = 10;
	//int* p = &a;//取地址
	//// 存放地址的变量----指针变量
	//printf("%p\n", p);
	//*p = 20;//* 解引用操作符
	//printf("%d\n", a);

	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'a';
	//printf("%c\n", ch);
	










	return 0;
}