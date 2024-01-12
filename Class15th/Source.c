#include <stdio.h>
#include <time.h>


void UpdateHPBar(int life)
{
	for (int i = 0; i < life; i++)
	{
		printf("♥");
	}
}

void UpdateUI()
{
	printf("\n컴퓨터가 가지고 있는 값 : ");
}

int main()
{
#pragma region rand 함수
	// 0 ~ 32767 사이의 난수 값을 생성하고 반환하는 함수입니다.

	// seed 값으로 현재 시간을 넣으면 초당 seed 값이 
	// 계속해서 변화되기 때문에 실행할 때마다 랜덤한
	// 난수의 값을 얻을 수 있습니다.
	//srand(time(NULL));

	//int seed = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	seed = rand() % 10 + 1;

	//	printf("seed의 값 : %d\n", seed);
	//}

#pragma endregion

#pragma region UP DOWN GAME

	//int life = 5;

	//srand(time(NULL));

	//// 1. 컴퓨터 변수에 1 ~ 50사이의 난수 값을 넣어줍니다.
	//int computer = rand() % 50 + 1;

	//// 2. 컴퓨터가 가지고 있는 값을 맞추기 위한 변수 선언
	//int answer = 0;

	//while (1)
	//{
	//	UpdateHPBar(life); // HPBar를 출력하는 함수

	//	UpdateUI();	// 입력을 받을 수 있는 텍스트를 출력하는 함수

	//	// 컴퓨터가 가지고 있는 값을 입력합니다.
	//	scanf_s("%d", &answer);

	//	system("cls");

	//	if (answer == computer)
	//	{
	//		printf("\n V i c t o r y");
	//		break;
	//	}
	//	else if (answer < computer)
	//	{
	//		life--;
	//		printf("\n컴퓨터가 가지고 있는 값보다 작습니다.\n");
	//	}
	//	else if (answer > computer)
	//	{
	//		life--;
	//		printf("\n컴퓨터가 가지고 있는 값보다 큽니다.\n");
	//	}

	//	if (life <= 0)
	//	{
	//		printf("\nDefeat");
	//		break;
	//	}
	//}
#pragma endregion

	return 0;
}
