//https://codeup.kr/problemsetsol.php?psid=23
//1046 : [기초-산술연산] 정수 3개 입력받아 합과 평균 출력하기


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d\n", a + b + c);
	printf("%0.1f\n", (a + b + c) / 3.0);



	return 0;
}