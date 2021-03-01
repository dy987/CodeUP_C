//https://codeup.kr/problemsetsol.php?psid=23
//1077 : [기초-반복실행구조] 정수 1개 입력받아 그 수까지 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int   a;
	scanf("%d", &a);
	for (int i = 0; i <= a; i++) {
		printf("%d\n", i);
	}
	return 0;
}