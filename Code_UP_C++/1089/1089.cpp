//https://codeup.kr/problemsetsol.php?psid=23
//1089 : [기초-종합] 수 나열하기1

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int s;
	int n;
	int c;
	scanf("%d", &s);
	scanf("%d", &n);
	scanf("%d", &c);

	printf("%d ", s+n*(c-1));



	return 0;
}