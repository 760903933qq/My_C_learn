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
	// 1.���������
	int r = 0;
	//��ʱ����������������
	r = rand()%100+1;// ����1-100֮��������
	// 2.������
	while (1)
	{
		printf("��������µ�����:>");
		scanf("%d", n);
		if (n == r)
		{
			printf("�¶��ˣ�\n");
			break;
		}
		else if(n < r)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("�´��ˣ�\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");

			break;
		case 1:
			game();
			break;
		default:
			printf("�����������������\n");
			break;

	}

	} while (input);



	return 0;
}