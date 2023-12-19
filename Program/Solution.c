#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	int array[5];

	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.

	for (int i = 0; i < 5; i++)
	{
		array[i] = (i + 1) * 100;

		printf("array[%d]의 값 : %d\n", i, array[i]);
	}

	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	// 공간을 가지게 됩니다.
	                                
	int list[] = { 10,20,30,45 };

	int size = sizeof(list) / sizeof(int);

	printf("배열의 사이즈 : %d\n", size);

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

#pragma endregion


}