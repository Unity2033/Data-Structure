#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 1000

int main()
{
#pragma region 파일 쓰기
	// fopen() : 파일을 열어주는 함수
    // "w" : 파일을 쓰기 모드를 설정합니다.

	//FILE* file = fopen("Data.txt", "w");

	//// fputs() : 파일에 텍스트를 입력합니다.
	// fputs("health", file);

	//// fclose() : 열린 파일을 닫아줍니다.
	// fclose(file);
#pragma endregion

#pragma region 파일 읽기
	// "r" : 파일을 읽기 모드를 설정합니다.
	FILE * file = fopen("Data.txt", "r");

	// 파일의 데이터를 담을 수 있는 char 배열을 선언합니다.
	char buffer[SIZE] = { 0, };

	// fread() : 파일을 전체 읽어주는 함수
	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);
#pragma endregion


	return 0;
}
