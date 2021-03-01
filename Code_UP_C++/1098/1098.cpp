//https://codeup.kr/problemsetsol.php?psid=23
//1098 : [기초-2차원배열] 설탕과자 뽑기

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int w, h, n, l, d;
	int x, y;
	int data[101][101] = { 0, };

	scanf("%d", &w);
	scanf("%d", &h);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &l);
		scanf("%d", &d);
		scanf("%d", &x);
		scanf("%d", &y);
		
		if (d == 0) {
			for (int i = 0; i < l; i++) {
				data[y+i][x] = 1;
			}
		}
		else if (d == 1) {
			for (int i = 0; i < l; i++) {
				data[y][x+i] = 1;
			}

		}

	}

	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++) {
			printf("%d ",data[j][i]);
		}
		printf("\n");
	}

	return 0;
}
