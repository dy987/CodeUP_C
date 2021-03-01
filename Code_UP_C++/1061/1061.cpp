//https://codeup.kr/problemsetsol.php?psid=23
//1061 : [기초-비트단위논리연산] 비트단위로 OR 하여 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d", a | b); //참/거짓이 서로 다를 때에만 1로 계산

	return 0;
}