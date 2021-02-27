//https://codeup.kr/problem.php?id=1020
//1020 : [기초-입출력] 주민번호 입력받아 형태 바꿔 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d-%d", &x, &y);
	printf("%06d%05d", x, y);

	return 0;
}