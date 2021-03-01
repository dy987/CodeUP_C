//https://codeup.kr/problemsetsol.php?psid=23
//1096 : [기초-2차원배열] 바둑판에 흰 돌 놓기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n = 0;
	int data[19][19] = { 0, };

	scanf("%d", &n);
	int x, y;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		scanf("%d", &y);
		data[x-1][y-1] = 1;
	}

	for (int x = 0; x < 19; x++) {
		for (int y = 0; y < 19; y++) {
			printf("%d ", data[x][y]); //1~23 번 배열에 저장되어있는 값 출력하기
		}
		printf("\n");
	}

	return 0;
}
