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
	int x = 2;
	int y = 2;
	for (i = 1; i <= 10; i++) //한 줄씩 바둑판 상황 입력 받기
		for (j = 1; j <= 10; j++) {
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j];
		}
	b[y][x] = 9;

	if (a[y][x] == 2) {
		
	}
	else {
		for (i = 2; i <= 120; i++) //좌표의 개수만큼
		{
			if (a[y][x + 1] == 0) {
				b[y][x + 1] = 9;
				x += 1;
			}else if (a[y][x + 1] == 2) {
				b[y][x + 1] = 9;
				x += 1;
				break;
			}
			else if (a[y][x + 1] == 1) {
				if (a[y + 1][x] == 0) {
					b[y + 1][x] = 9;
					y += 1;
				}
				else if (a[y + 1][x] == 2) {
					b[y + 1][x] = 9;
					y += 1;
					break;
				}
			}

		}
	}


	
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 10; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
