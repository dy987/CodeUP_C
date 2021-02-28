//https://codeup.kr/problemsetsol.php?psid=23
//1045 : [기초-산술연산] 정수 2개 입력받아 자동 계산하기 해


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%0.2f\n", ((float)a / b));


	return 0;
}