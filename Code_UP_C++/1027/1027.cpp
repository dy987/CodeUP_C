//https://codeup.kr/problem.php?id=1027
//1027 : [기초-입출력] 년월일 입력 받아 형식 바꿔 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int y, m, d;
	scanf("%04d.%02d.%02d%", &y, &m, &d);

	printf("%02d-%02d-%04d", d, m, y);

	return 0;
}