//https://codeup.kr/problemsetsol.php?psid=23
//1092 : [기초-종합] 함께 문제 푸는 날(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	int m;
	int d;
	int n = 2;

	scanf("%d", &a);
	scanf("%d", &m);
	scanf("%d", &d);
	
	while (1) {
		if (n % d == 0 && n % m == 0 && n % a == 0)
		{
			printf("%d",n);
			break;
		}
		n++;
	}

	return 0;
}