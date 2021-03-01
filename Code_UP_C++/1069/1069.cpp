//https://codeup.kr/problemsetsol.php?psid=23
//1069 : [기초-조건/선택실행구조] 평가 입력받아 다르게 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	char  a;
	scanf("%c", &a);

	switch (a)
	{
	case 'A':
		printf("best!!!\n");
		break;
	case 'B':
		printf("good!!\n");
		break;
	case 'C':
		printf("run!\n");
		break;
	case 'D':
		printf("slowly~\n");
		break;
	default:
		printf("what?\n");
		break;
	}




	return 0;
}