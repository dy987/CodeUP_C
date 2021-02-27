//https://codeup.kr/problem.php?id=1022
//1022 : [기초-입출력] 단어 1개 입력받아 그대로 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);

	return 0;
}