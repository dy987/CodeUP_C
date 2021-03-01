//https://codeup.kr/problemsetsol.php?psid=23
//1086 : [기초-종합] 그림 파일 저장용량 계산하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int count = 1;
	scanf("%d", &n);

	while (sum < n) {
		sum += count++;
	}

	printf("%d", sum);


	return 0;
}