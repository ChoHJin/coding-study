/*
1. 메뉴 보기
2. 주문
- 1 누르면 종료


콜라, 사이다,
*/

#include <stdio.h>


void showMenu(); //메뉴판

void main()
{
	int choice = 0; // 메뉴선택
	int menu = 0; //음료수선택
	int price = 0; // 가격
	int money = 0; // 자판기에 넣을 돈
	int order = 0; // 주문
	int addMoney = 0;
	int totalPrice = 0; //총 합계

	printf("************************************************************************\n");
	printf("                              자판기                                    \n");
	showMenu();
	printf("1. 주문하기.\n"); // 음식입력
	printf("2. 계산하기.\n");  //총가격, 돈입력, 거스름돈 , 부족한돈 구현
	printf("3. 돈 추가.\n");
	printf("************************************************************************\n");

	printf("돈을 넣어주세요 : ");
	scanf_s("%d", &money);

	while (choice != -1) {
		printf("메뉴를 선택해주세요(-1입력시 종료) : ");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			while (order != -1) {
				printf("음료를 선택해주세요.(주문이 필요없으시면 -1을 입력해주세요): ");
				scanf_s("%d", &order);

				switch (order)
				{
				case 1:
					printf("웰치스를 선택하셨습니다. 1000원입니다.\n");
					price = 1000;
					totalPrice += price;
					break;

				case 2:
					printf("콜라를 선택하셨습니다. 1500원입니다.\n");
					price = 1500;
					totalPrice += price;
					break;

				case 3:
					printf("사이다를 선택하셨습니다. 1500원입니다.\n");
					price = 1500;
					totalPrice += price;
					break;

				case 4:
					printf("코코팜을 선택하셨습니다. 1200원입니다.\n");
					price = 1200;
					totalPrice += price;
					break;

				case -1:
					printf("선택을 종료합니다.\n");
					break;

				default:
					printf("잘못입력하셨습니다. 다시입력하세요");
					break;
				}
			}
			break;

		case 2:
			if (money > totalPrice) {
				printf("가격은 %d원입니다.\n", totalPrice);
				printf("거스름돈은 %d원입니다.", money - totalPrice);
				printf("계산완료,\n 거스름돈은 옆에서, 음료는 밑에서 찾아가세요.\n");
				money - totalPrice;
				break;
			}
			else if (money == totalPrice) {
				printf("가격은 %d원입니다.\n", totalPrice);
				printf("계산완료. 음료는 밑에서 찾아가세요.\n");
				money - totalPrice;
				break;
			}
			else
				printf("가격이 부족합니다(%d원). 돈을 더 넣어주세요\n",totalPrice - money);
			break;

		case 3:
			printf("돈을 더 넣어주세요 : ");
			scanf_s("%d", &addMoney);
			money = addMoney + money;
			printf("%현재 받은 돈은 %d원 입니다.\n", money);
			break;

		case -1:
			printf("사용을 종료합니다.\n");
			break;

		default:
			printf("다시 입력해주세요.\n");
			break;

		}
	}
}

void showMenu()
{
	printf("메뉴판입니다.\n");
	printf("1. 웰치스 1000원\n");
	printf("2. 콜라 1500원\n");
	printf("3. 사이다 1500원\n");
	printf("4. 코코팜 1200원 \n\n");
}

// choice 1 -> 2 가능 