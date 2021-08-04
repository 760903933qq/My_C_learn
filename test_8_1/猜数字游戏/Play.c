#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("*************************\n");
	printf("****1. play    0.exit****\n");
	printf("*************************\n");
}
void game()
{
	int n = 0;
	// 1.生成随机数
	int r = 0;
	//用时间戳设置随机数种子
	r = rand()%100+1;// 生成1-100之间的随机数
	// 2.猜数字
	while (1)
	{
		printf("请输入你猜的数字:>");
		scanf("%d", n);
		if (n == r)
		{
			printf("猜对了！\n");
			break;
		}
		else if(n < r)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("猜大了！\n");
		}

	}

}

int main(void)
{
	char ch = 0;
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");

			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;

	}

	} while (input);



	return 0;
}