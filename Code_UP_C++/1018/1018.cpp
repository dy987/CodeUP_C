//https://codeup.kr/problem.php?id=1018
//1018 : [기초-입출력] 시간 입력받아 그대로 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d:%d", &x,&y);
	printf("%d:%d", x, y);

	return 0;
}