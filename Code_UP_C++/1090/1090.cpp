//https://codeup.kr/problemsetsol.php?psid=23
//1090 : [기초-종합] 수 나열하기2

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
	long long int nc = 1;
	for (int i = 0; i < c - 1; i++)
		nc *= n;

	printf("%lld ", s* nc);



	return 0;
}