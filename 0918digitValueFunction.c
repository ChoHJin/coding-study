/*
세 자릿수 이하인 숫자를 입력받아 각 자릿수의 값을 반환하는 코드
200 -> 2, 0, 0
129 -> 1, 2, 9
20 -> 2,0
1 -> 1
*/
//me
#include <stdio.h>

void DigitValue(int i);

void main()
{
	int num;

	printf("세자리수까지의 정수를 입력하세요: ");
	scanf_s("%d", &num);
	while (1) {
		DigitValue(num);

		if (num == -1)
			break;
	}
}

void DigitValue(int i)
{
	int num1, num2, num3; // 1 = 1의자리 , 2 = 10의자리 , 3 = 100의자리 

	if (i < 1000) {
		num3 = i / 100;

		if (num3 > 0)
			printf("%d\n", num3);
		else
			printf("");

			num2 = (i - (num3 * 100)) / 10;

		if (num2 > 0 || num3 > 0)
			printf("%d\n", num2);
		else
			printf("");

		num1 = i % 10;
		printf("%d\n", num1);
		}
	else
		printf("세자리가 넘었습니다.");
		
}
	
