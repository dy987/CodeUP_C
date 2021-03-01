//https://codeup.kr/problemsetsol.php?psid=23
//1088 : [기초-종합] 3의 배수는 통과?(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int count = 1;
	scanf("%d", &n);

	for(int i = 1; i <= n ; i ++){
		if (i % 3 == 0) {
		}
		else {
			printf("%d ", i);
		}
	}



	return 0;
}