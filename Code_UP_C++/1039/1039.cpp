//https://codeup.kr/problemsetsol.php?psid=23
//1039 : [기초-산술연산] 정수 2개 입력받아 합 출력하기2(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  n, m;
	scanf("%d %d", &n, &m); //소문자로 16진수 입력
	printf("%lld", ((long long int )n + (long long int)m));

	return 0;
}