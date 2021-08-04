#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<memory.h>


int main(void)
{

	// =======strcpy====================
	//char arr1[] = "bit";
	//char arr2[] = "###############";
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);

	//==========memset==================

	char arr[] = "hello world";

	memset(arr, '*', 5);
	printf("%s", arr);



	return 0;
}