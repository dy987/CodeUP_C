﻿//https://codeup.kr/problemsetsol.php?psid=23
//1058 : [기초-논리연산] 둘 다 거짓일 경우만 참 출력하기


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", !(a || b)); //참/거짓이 서로 다를 때에만 1로 계산

	return 0;
}