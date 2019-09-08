/*
세 자릿수 이하인 숫자를 입력받아 각 자릿수의 값을 반환하는 코드
200 -> 2, 0, 0
129 -> 1, 2, 9
20 -> 2,0
1 -> 1
*/
//me
#include <stdio.h>

void main()
{
	int i = 0; 
	int num1, num2, num3 ; // 1 = 1의자리 , 2 = 10의자리 , 3 = 100의자리 
	
	printf("세자리수까지의 정수를 입력하세요: ");
	scanf("%d", &i);
	
	if (i < 1000) {
		num3 = i / 100;

		if (num3 > 0)
			printf("%d\n", num3);
		else
			printf("");
	
		num2 = (i-(num3*100))/ 10;

		if (num2 > 0 || num3>0)
			printf("%d\n", num2);
		else
		printf("");

		num1 = i % 10;
		printf("%d\n", num1);
	}
	else
		printf("세자리가 넘었습니다.");
}


/*// 선생님


#include <stdio.h>

int a();

void main()
{
	int i, count = 0; // i = 입력값. count = 자릿값 단위
	int numArr[3] = { 0, 0, 0 };  // 1의 자리 - 100의 자리 //3자리수 배열 초기화

	while (1) {
		printf("3자리 이하의 정수를 입력하시오 : ");
		scanf("%d", &i);

// 4자리수 이상 입력시 출력
	if (i >= 1000) { 
		printf("잘못된 수 입니다. 다시 입력해주세요.\n");
		continue;
	}

	while(i != 0) {               // i가 0이 될때까지 반복

		numArr[count] = i % 10;   // i를 10으로 나눈 나머지값을 numArr[count]에 넣어서 몇자리수인지 정하기
		i /= 10;                  // i를 10으로 나눔
	
		if (i !=0) {              //i가 0이 아니면
			count++;              //count 증가 --> 배열수 증가  
		}
	}
	
	for(count; count >= 0; count--) {                       //카운트가 0보다 작아질때까지 반복
		printf("%d자리 %d\n" ,count+1, numArr[count]);       
	}

	break;
	}
}*/



// 안준표
/*
#include <stdio.h>

int main()
{
	int i;
	int a, b, c;
	while (1) {
		printf("3자리 이하의 정수를 입력하시오 : ");
		scanf_s("%d", &i);

		if ((i / 1000) % 10 != 0) {
			printf("잘못된 수 입니다. 다시 입력해주세요.\n");
			continue;
		}
		else {

			a = i % 10;
			b = (i / 10) % 10;
			c = (i / 100) % 10;

			if (c == 0 && b == 0) {
				printf("%d -> %d\n", i, a);
			}
			else if (c == 0) {
				printf("%d -> %d, %d\n", i, b, a);
			}
			else if (i == 0) {
				printf("%d -> %d\n", i, i);
			}
			else
				printf("%d -> %d, %d, %d\n", i, c, b, a);

			break;
		}
	}
	return 0;
}*/