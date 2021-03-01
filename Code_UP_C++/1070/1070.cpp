//https://codeup.kr/problemsetsol.php?psid=23
//1070 : [기초-조건/선택실행구조] 월 입력받아 계절 출력하기(설명)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	int   a;
	scanf("%d", &a);

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		printf("winter\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("spring\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("summer\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("fall\n");
		break;
	}




	return 0;
}