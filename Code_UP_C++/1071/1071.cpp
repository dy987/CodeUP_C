//https://codeup.kr/problemsetsol.php?psid=23
//1071 : [기초-반복실행구조] 0 입력될 때까지 무한 출력하기1(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int   a;
	
	while (1) {
		scanf("%d", &a);
		if (a == 0)
			break;
		printf("%d\n",a);

	}


	return 0;
}