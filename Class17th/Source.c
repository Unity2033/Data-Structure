#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>   // Key 
#include <windows.h> // Coordinate

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0;

	int x = 2;
	int y = 5;

	GotoXY(x, y);
	printf("☆");

	while (1)
	{
		if (_kbhit()) // 키보드 입력 확인 (true/false)
		{
			key = _getch(); // key 입력을 받아주는 함수

			system("cls");

			if (key == -32)
			{
				key = _getch();
			}

			switch (key)
			{
			case UP: if (y > 0) { y--; }
				   break;
			case LEFT: if (x > 0) { x -= 2; }
					 break;
			case RIGHT: x += 2;
				break;
			case DOWN: y++;
				break;
			}

			GotoXY(x, y);
			printf("☆");
		}
	}


	return 0;
}
