//https://codeup.kr/problemsetsol.php?psid=23
//1080 : [기초-종합] 언제까지 더해야 할까?


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int a;
	int sum = 0;
	int num = 0;
	scanf("%d", &a);

	while (1) {
		sum += num;
		if (sum >= a) {
			printf("%d\n", num);
			break;
		}
		num++;
	}
	return 0;
}