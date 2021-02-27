//https://codeup.kr/problemsetsol.php?psid=23
//1036 : [기초-출력변환] 영문자 1개 입력받아 10진수로 출력하기(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char n;
	scanf("%c", &n); //소문자로 16진수 입력
	printf("%d", n);

	return 0;
}