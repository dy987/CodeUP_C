//https://codeup.kr/problemsetsol.php?psid=23
//1079 : [기초-종합] 원하는 문자가 입력될 때까지 반복 출력하기


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char   a = 'a';
	
	while (a != 'q') {
		scanf("%c", &a);
		printf("%c", a);
	}
	return 0;
}