//https://codeup.kr/problemsetsol.php?psid=23
//1068 : [기초-조건/선택실행구조] 정수 1개 입력받아 평가 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b, c;
	scanf("%d", &a);

	if (a >= 90) {
		printf("%s\n", "A");
	}
	else if (a >= 70) {
		printf("%s\n", "B");
	}
	else if (a >= 40) {
		printf("%s\n", "C");
	}
	else if (a >= 00) {
		printf("%s\n", "D");
	}
	



	return 0;
}