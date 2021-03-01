//https://codeup.kr/problemsetsol.php?psid=23
//1078 : [기초-종합] 짝수 합 구하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int   a;
	int   sum =0;
	scanf("%d", &a);
	for (int i = 0; i <= a; i++) {
		if (i % 2 == 0)
			sum += i;
		
	}
	printf("%d\n", sum);
	return 0;
}