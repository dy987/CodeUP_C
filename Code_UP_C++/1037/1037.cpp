//https://codeup.kr/problemsetsol.php?psid=23
//1037 : [기초-출력변환] 정수 입력받아 아스키 문자로 출력하기



#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n); //소문자로 16진수 입력
	printf("%c", (char)n);

	return 0;
}