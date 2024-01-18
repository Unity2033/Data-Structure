#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

// 버퍼의 크기
int width = 100;
int height = 60;

// 버퍼를 생성합니다.
HANDLE screen[2];
// screen[0] front buffer
// screen[1] back buffer

// HANDLE 인덱스에 접근해서 버퍼를 교체시키는 변수
int screenIndex = 0;

void GotoXY(int x, int y)
{
	// x, y 좌표 설정
	COORD position = { x, y };

	// 커서 이동 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// 버퍼를 초기화하는 함수
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;

	// 버퍼의 가로 사이즈, 세로 사이즈
	COORD size = { width, height };

	// left, top, right, bottom
	SMALL_RECT rect{ 0,0, width - 1, height - 1 };

	// 화면 2개를 생성합니다.
	// front buffer
	screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	// 버퍼의 사이즈를 설정하는 함수
	SetConsoleScreenBufferSize(screen[0], size);

	SetConsoleWindowInfo(screen[0], TRUE, &rect);

	// back buffer
	screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		CONSOLE_TEXTMODE_BUFFER,
		NULL
	);

	// 버퍼의 사이즈를 설정하는 함수
	SetConsoleScreenBufferSize(screen[1], size);

	SetConsoleWindowInfo(screen[1], TRUE, &rect);

	// 커서의 활성화 여부
	// false : 거짓 (0)
	// true  : 참 (1)
	 
	cursor.bVisible = false;

	SetConsoleCursorInfo(screen[0], &cursor);
	SetConsoleCursorInfo(screen[1], &cursor);
}



int main()
{

	return 0;
}
