//https://codeup.kr/problemsetsol.php?psid=23
//1055 : [기초-논리연산] 하나라도 참이면 참 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", (a || b));

	return 0;
}