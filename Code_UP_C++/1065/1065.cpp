//https://codeup.kr/problemsetsol.php?psid=23
//1065 : [기초-조건/선택실행구조] 정수 3개 입력받아 짝수만 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	if (a % 2 == 0)
	{
		printf("%d\n", a);
	}

	if (b % 2 == 0)
	{
		printf("%d\n", b);
	}

	if (c % 2 == 0)
	{
		printf("%d\n", c);
	}



	return 0;
}