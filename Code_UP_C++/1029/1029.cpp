//https://codeup.kr/problem.php?id=1029
//1029 : [기초-데이터형] 실수 1개 입력받아 그대로 출력하기2(설명)


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	double d;
	scanf("%lf", &d); // double(long float) 형식으로 입력
	printf("%0.11lf", d);


	return 0;
}