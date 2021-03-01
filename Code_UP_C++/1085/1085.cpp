//https://codeup.kr/problemsetsol.php?psid=23
//1085 : [기초-종합] 소리 파일 저장용량 계산하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	unsigned int h;
	unsigned int b;
	unsigned int c;
	unsigned int s;
	long long int sum = 0;
	scanf("%d", &h);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &s);

	sum = h * b * c * s / 8 / 1024;

	printf("%0.1f MB",(float)(sum/1024.0));


	return 0;
}