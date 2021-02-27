//https://codeup.kr/problem.php?id=1024
//1024 : [기초-입출력] 단어 1개 입력받아 나누어 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char data[22];
	scanf("%s", &data);
	int i = 0;
	for (i = 0; data[i] != '\0'; i++) //저장된 내용을 하나하나씩 검사해서 널문자가 아닐 동안 아래 실행
	{
		printf("\'%c\'\n", data[i]);
	}

	return 0;
}