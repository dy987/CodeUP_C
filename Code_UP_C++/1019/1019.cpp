//https://codeup.kr/problem.php?id=1019
//1019 : [기초-입출력] 연월일 입력받아 그대로 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int y, m,d;
	scanf("%d.%d.%d", &y, &m, &d);
	printf("%0004d.%02d.%02d", y, m,d);

	return 0;
}