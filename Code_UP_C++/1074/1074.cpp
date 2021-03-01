//https://codeup.kr/problemsetsol.php?psid=23
//1074 : [기초-반복실행구조] 정수 1개 입력받아 카운트다운 출력하기1(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int   a = 1;
	scanf("%d", &a);
	while (a != 0)
	{
		if (a != 0)
			printf("%d\n", a--);
	}

	return 0;
}