//https://codeup.kr/problemsetsol.php?psid=23
//1099 : [기초-2차원배열] 성실한 개미

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int i, j;
	int a[11][11] = { 0, };
	int b[11][11] = { 0, };
	for (i = 1; i <= 10; i++) //한 줄씩 바둑판 상황 입력 받기
		for (j = 1; j <= 10; j++) {
			scanf("%d", &a[i][j]);
			scanf("%d", &b[i][j]);
		}

	for (i = 1; i <= n; i++) //좌표의 개수만큼
	{
		for (j = 1; j <= 19; j++) //가로 줄 흑<->백 바꾸기
		{
			if (a[x][j] == 0) a[x][j] = 1;
			else a[x][j] = 0;
		}
		for (j = 1; j <= 19; j++) //세로 줄 흑<->백 바꾸기
		{
			if (a[j][y] == 0) a[j][y] = 1;
			else a[j][y] = 0;
		}
	}

	for (i = 1; i <= 19; i++) { //한 줄씩 바둑판 상황 입력 받기
		for (j = 1; j <= 19; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
