//https://codeup.kr/problemsetsol.php?psid=23
//1035 : [기초-출력변환] 16진 정수 1개 입력받아 8진수로 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	scanf("%x", &n); //소문자로 16진수 입력
	printf("%o", n);

	return 0;
}