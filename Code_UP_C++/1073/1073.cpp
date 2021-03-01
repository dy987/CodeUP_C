//https://codeup.kr/problemsetsol.php?psid=23
//1073 : [기초-반복실행구조] 0 입력될 때까지 무한 출력하기2(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int   a = 1;
	int   n;

	while (a != 0)
	{
		scanf("%d", &a);
		if(a != 0)
			printf("%d\n", a);
	}

	return 0;
}