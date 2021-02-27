//https://codeup.kr/problemsetsol.php?psid=23
//1038 : [기초-산술연산] 정수 2개 입력받아 합 출력하기1(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	long long  n,m;
	scanf("%lld %lld", &n, &m); //소문자로 16진수 입력
	printf("%lld", n+m);

	return 0;
}