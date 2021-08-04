#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
	
}

int main(void)
{
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//scanf("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	//===============常量===================
	//1.       字面常量
	3;

	//2.       常变量
	//const int num = 4; // const - 常属性
	//printf("%d", num);
	//num = 8; //此时num不能更改

	//int n = 10;
	//int arr[n] = { 0 }; //应输入常量表达式


	//3.        #define 定义的标识符常量
//#define MAX 10
//	int arr[MAX] = { 0 };

	//4.       枚举常量 (一一列举:  三原色“红绿蓝”)
	//enum Sex
	//{
	//	MALE,
	//	FEMALE,
	//	SECRET
	//};
	//printf("%d\n", MALE);
	//printf("%d\n", FEMALE);
	//printf("%d\n", SECRET);
		
	//enum Color
	//{
	//	RED,
	//	GREEN,
	//	BLUE
	//};
	//enum Color color = BLUE;


	//================字符串==================

	//"abcdef";
	//""; //空字符串
	//char arr1[] = "abc"; //数组
	//// "abc" = 'a''b''c''\0'------------------字符串的结束标志
	//char arr2[] = { 'a','b','c',0};
	//char arr3[] = "你好";
	//char arr4[] = { 'a','b','c'};
	//
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);

	//printf("%d\n", strlen(arr1)); // string length - 计算字符串长度
	//printf("%d\n", strlen(arr4));

	//printf("%c\n", '\'');
	//// \32 ---------- 32是两个8进制数字
	//// 32作为8进制代表的10进制数字，作为ASCII码值，所对应的字符
	//printf("%c\n", '\132')

	//=================分支结构==============================
	//int input = 0;
	//printf("你要好好学习吗？(1/0)>:");
	//scanf("%d", &input);
	//if (input == 1)
	//{
	//	printf("好offer\n");
	//}
	//else
	//{
	//	printf("卖红薯");
	//}

	//================循环===================
	//int line = 0;
	//while (line < 20000)
	//{
	//printf("敲一百行代码\n");
	//line+= 100;

	//}
	//printf("变成大牛");

	//===================函数=======================
	//int sum;
	//sum = Add(1, 2);
	//printf("%d", sum);

	//================数组==========================
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	//char ch[] = { 0 };
	////printf("%d", arr[9]);
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d", arr[i]);

	//}
	//===============操作符=========================
	//============移 （2进制）位操作符==============
	//// << 左移
	//// << 右移
	//int a = 1;
	////整形1占4个字节-32bit位
	//// 0000 0000 0000 0000 0000 0000 0000 0001 
	//int b = a << 2;
	//// 0000 0000 0000 0000 0000 0000 0000 0010 
	//printf("b = %d\n", b);
	//printf("a = %d\n", a);

	//=============位操作===========================
	// &按位与
	// |按位或
	// ^按位异或
	// 亦或的计算规律：
	//    对应的二进制位相同，则为0， 相异则为1

	//int a = 3;
	////011
	//int b = 5;
	////101
	//int c = a & b;
	//int d = a | b;
	//int e = a ^ b;
	//printf("%d\n", c);
	//printf("%d\n", d);
	//printf("%d\n", e);
	
	// ================单目操作符=================
	// ================双目操作符=================
	// ================三目操作符=================

	//int a = 10;
	//int b = 20;

	//a + b; // + 双目操作符

	
	//int a = 10;
	//printf("%d\n", !a); // ! 单目操作符
	// ================sizeof()==================

	// sizeof计算的是变量/类型所占空间的大小，单位是字节
	int a = 10;
	printf("%d\n", sizeof(a));
	int arr[10] = { 0 };
	//计算数组的元素个数
	printf("%d\n", sizeof(arr)/sizeof(int));












	return 0;
}