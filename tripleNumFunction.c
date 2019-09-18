//문제4.사용자로부터 세 개의 정수를 입력받아, 그 수들의 최대값과 최소값, 합계와 평균을 구해보자.

#include <stdio.h>

void TripleNum(int a,int b,int c);


void main()
{
	int num1, num2, num3 = 0;

	

	printf("숫자 3개를 입력하세요 : ");

	scanf_s("%d %d %d", &num1, &num2, &num3);

	TripleNum(num1, num2, num3);
}

void TripleNum(int a, int b, int c) 
{
	int max, min, sum, avg = 0;
	sum = a + b + c;
	avg = sum / 3;
	//최댓값

	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c) {
		max = b;
	}
	else {
		max = c;
	}

	//최솟값
	if (a < b && a < c) {
		min = a;
	}
	else if (b < a && b < c) {
		min = b;
	}
	else {
		min = c;
	}
	printf("최댓값은 %d입니다.\n", max);
	printf("최솟값은 %d입니다.\n", min);
	printf("합계는 %d입니다.\n", sum);
	printf("평균값은 %d입니다.\n", avg);
}
// 1 2 3 1>2 1>3 