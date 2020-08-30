#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		printf(" * ");
		printf("\n ");
	}
	return 0;
}