//https://codeup.kr/problemsetsol.php?psid=23
//1067 : [기초-조건/선택실행구조] 정수 1개 입력받아 분석하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b, c;
	scanf("%d", &a);

	if (a <0)
	{
		printf("%s\n", "minus");
	}
	else {
		printf("%s\n", "plus");
	}


	if (a % 2 == 0)
	{
		printf("%s", "even");
	}
	else {
		printf("%s", "odd");
	}


	return 0;
}