//https://codeup.kr/problemsetsol.php?psid=23
//1091 : [기초-종합] 수 나열하기3

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	int m;
	int d;
	int n;

	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &m);
	scanf("%d", &d);
	int array[100] = { a, };

	for (int i = 1; i < 100; i++)
		array[i] = array[i - 1]*m+d;
	
	printf("%d",array[n]);



	return 0;
}