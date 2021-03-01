//https://codeup.kr/problemsetsol.php?psid=23
//1084 : [기초-종합] 빛 섞어 색 만들기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int count = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);



	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			for (int k = 0; k < c; k++) {
				printf("%d %d %d\n",i,j,k);
				count++;
			}
		}
	}
	printf("%d", count);
	

	return 0;
}