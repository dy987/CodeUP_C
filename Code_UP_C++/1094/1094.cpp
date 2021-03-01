//https://codeup.kr/problemsetsol.php?psid=23
//1094 : [기초-1차원배열] 이상한 출석 번호 부르기2(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n = 0;
	int data[100000] = { 0, };
	int num = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		
		scanf("%d", &num);
		data[i] = num;
	}

	for (int i = n; i >= 1; i--) {
		printf("%d ", data[i]); //1~23 번 배열에 저장되어있는 값 출력하기
	}

	return 0;
}