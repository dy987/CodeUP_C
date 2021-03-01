//https://codeup.kr/problemsetsol.php?psid=23
//1081 : [기초-종합] 주사위를 2개 던지면?(설명)



#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			printf("%d %d\n", i, j);
		}
	}

	return 0;
}