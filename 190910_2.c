//알파벳 1개를 입력받아 대소문자를 구분해보자.

#include <stdio.h>

void main()
{
   char alp;

   printf("알파벳을 입력하세요 : ");
   scanf_s("%c", &alp);

   if (alp >= 'a' && alp <= 'z') {
      printf("%c는 소문자 입니다.\n", alp);
   }
   else if (alp >= 'A' && alp <= 'Z') {
      printf("%c는 대문자 입니다.\n", alp);
   }
   else
      printf("알파벳이 아닙니다!\n");
}