//https://codeup.kr/problemsetsol.php?psid=23
//1072 : [기초-반복실행구조] 정수 입력받아 계속 출력하기(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int   a;
	int   n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		printf("%d\n", a);
	}

	return 0;
}