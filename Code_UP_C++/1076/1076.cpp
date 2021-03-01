//https://codeup.kr/problemsetsol.php?psid=23
//1076 : [기초-반복실행구조] 문자 1개 입력받아 알파벳 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char   a ;
	scanf("%c", &a);
	for (int i = 'a'; i <= a; i++) {
		printf("%c\n", (char)i);
	}
	return 0;
}