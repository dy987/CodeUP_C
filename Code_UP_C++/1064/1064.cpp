//https://codeup.kr/problemsetsol.php?psid=23
//1064 : [기초-삼항연산] 정수 3개 입력받아 가장 작은 수 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int  a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	printf("%d",min); //참/거짓이 서로 다를 때에만 1로 계산
	

	return 0;
}