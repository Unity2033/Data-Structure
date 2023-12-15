#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	// int data = 10;

	//// %p : 메모리의 주솟값을 나타내는 연산자입니다.
	// printf("data 변수의 주솟값 : %p\n", &data);

	// 데이터의 주소 값은 해당 데이터가 저장된 메모리
	// 의 시작 주소를 의미하며, 메모리의 공간은 1 byte
	// 의 크기로 나누어 표현합니다.

	// 변수의 메모리 공간은 프로그램이 실행될 때마다
	// 바뀌며, 여러 개의 변수가 있을 때 서로 고유의 
	// 메모리 공간을 가지고 있습니다.

#pragma endregion

#pragma region scanf_s() 함수 
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다.

	//int count = 0;

	//scanf_s("%d", &count);

	//// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에
	//// 데이터를 보관하였다가 입력하는 수간 버퍼 안의
	//// 내용을 프로그램에 전송합니다.

	//printf("count 변수의 값 : %d\n", count);

	// 표준 입력 함수는 입력을 수행할 때까지 다음 
	// 작업으로 넘어갈 수 없습니다.
#pragma endregion

#pragma region Star Tower

	int count = 0;

	scanf_s("%d", &count);

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

#pragma endregion



}