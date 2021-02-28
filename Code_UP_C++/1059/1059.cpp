//https://codeup.kr/problemsetsol.php?psid=23
//1059 : [기초-비트단위논리연산] 비트단위로 NOT 하여 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a;
	scanf("%d", &a);

	printf("%d", ~a); //참/거짓이 서로 다를 때에만 1로 계산

	return 0;
}