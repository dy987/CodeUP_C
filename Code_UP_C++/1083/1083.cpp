//https://codeup.kr/problemsetsol.php?psid=23
//1083 : [기초-종합] 3 6 9 게임의 왕이 되자!(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	scanf("%xd", &a);


	for (int j = 1; j <= a; j++) {
		if (j % 3 == 0 ) {
			printf("X ");
		}
		else {
			printf("%d ", j);
		}
	}

	return 0;
}