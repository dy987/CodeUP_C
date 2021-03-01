//https://codeup.kr/problemsetsol.php?psid=23
//1098 : [기초-2차원배열] 설탕과자 뽑기

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n = 0;
	int data[24] = { 0, };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int num;
		scanf("%d", &num);
		data[num]++;
	}

	for (int i = 1; i <= 23; i++) {
		printf("%d ", data[i]); //1~23 번 배열에 저장되어있는 값 출력하기
	}

	return 0;
}