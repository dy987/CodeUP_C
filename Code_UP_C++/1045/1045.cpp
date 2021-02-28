//https://codeup.kr/problemsetsol.php?psid=23
//1044 : [기초-산술연산] 정수 1개 입력받아 1 더해 출력하기(설명)


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