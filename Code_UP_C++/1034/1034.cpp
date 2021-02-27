//https://codeup.kr/problemsetsol.php?psid=23
//1034 : [기초-출력변환] 8진 정수 1개 입력받아 10진수로 출력하기(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	scanf("%o", &n);
	printf("%d", n);
	return 0;
}