#include<stdio.h>
#include<stdlib.h>

int a = 10;//全局变量

int main(void)
{

	short int num = 10;
	printf("%d\n",num);
	{
	int a = 20;//局部变量
	printf("%d\n",a);
	scanf("%d", a);

	}
	printf("%d\n",a);



	return 0;
}