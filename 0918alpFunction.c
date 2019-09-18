#include <stdio.h>

void ChangeAlp(char i);

void main()
{
	char alp;

	printf("알파벳을 입력하세요 : ");
	scanf_s("%c", &alp);

	ChangeAlp(alp);

}

void ChangeAlp(char i) {
	if (i >= 'a' && i <= 'z') {     // i가 a 부터 z까지 일시 소문자라는 답 출력 
		printf("%c는 소문자 입니다.\n", i);
	}
	else if (i >= 'A' && i <= 'Z') { //i가 A부터 Z까지 일시 대문자라는 답 출력
		printf("%c는 대문자 입니다.\n", i);
	}
	else
		printf("알파벳이 아닙니다!\n");
}
