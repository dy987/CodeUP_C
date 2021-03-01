//https://codeup.kr/problemsetsol.php?psid=23
//1082 : [기초-종합] 16진수 구구단?


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>


int main()
{
	int a;
	scanf("%x", &a);


	for (int j = 1; j <= 15; j++) {
		printf("%X*%X=%X\n", a,j,a*j);
	}

	return 0;
}