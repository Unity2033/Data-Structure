#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	//int array[5];

	//// 배열의 경우 첫 번째 원소는 0부터 시작합니다.

	//for (int i = 0; i < 5; i++)
	//{
	//	array[i] = (i + 1) * 100;

	//	printf("array[%d]의 값 : %d\n", i, array[i]);
	//}

	//// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	//// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리
	//// 공간을 가지게 됩니다.
	//                                
	//int list[] = { 10,20,30,45 };

	//int size = sizeof(list) / sizeof(int);

	//printf("배열의 사이즈 : %d\n", size);

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.

	//int * ptr = NULL;

	//int intList [ ] = { 1, 2, 3, 4, 5 };

	//ptr = intList;

	//printf("ptr 변수의 값 : %p\n", ptr);

	//printf("intList 배열의 시작 주소 : %p\n", intList);

	//ptr = ptr + 1;

	//*ptr = 99;

	//printf("ptr 변수의 값 : %p\n", ptr);
	//printf("ptr 변수가 가리키는 값 : %d\n", *ptr);
	//printf("intList 배열[1]의 주소 : %p\n", &intList[1]);

	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름은 배열의
	// 시작 주소를 의미합니다.

#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자
	// 변수의 집합입니다.

	//const char * string = "Computer";

	//// *string = 'A'; (ERROR)

	//// %s : 문자열을 출력하는 서식 지정자 
	//printf("string 변수의 값 : %s\n", string);

	//// 문자열의 경우 포인터를 이용하여 문자열 상수를
	//// 가리키도록 할 수 있으며, 문자열 상수는 데이터 영역
	//// 의 일기 전용 공간에 저장되기 때문에 문자열의
	//// 값을 변경할 수 없습니다.

	//string = "Hello";

	//printf("string 변수의 값 : %s\n", string);

	// 문자열은 공백도 함께 메모리 공간에 포함하여
	// 크기가 결정되며, 마지막에 문자열의 끝을 알려주는
	// 제어 문자가 추가됩니다.

	// [A][l][i][s][t][a][r][\0][][]
	//char name[10] = { "Alistar" };

	//printf("name 변수의 값 : %s\n", name);

	//name[4] = '\0';

	//// 문자열을 저장하게 되면 맨 마지막에 무효의
	//// 문자까지 메모리 공간에 저장됩니다.
	//printf("name 변수의 값 : %s\n", name);

	// 문자열의 경우 서로 연속적인 메모리 공간으로
	// 연결되어 있지만, 문자 배열 사이에 무효의 문자를
	// 넣게 되면 무효의 문자까지만 문자열을 출력합니다.


#pragma endregion

#pragma region 최댓값과 최솟값

	// [10] [22] [35] [2] [5]
	//int dataList [ ] = { 77,33,89,48,0 };

	//int max = dataList[0];
	//int min = dataList[0];

	//// 최댓값 : 35
	//// 최솟값 : 2

	//int arraySize = sizeof(dataList) / sizeof(int);

	//for (int i = 0; i < arraySize; i++)
	//{	
	//	if (max < dataList[i])
	//	{
	//		max = dataList[i];
	//	}

	//	if (min > dataList[i])
	//	{
	//		min = dataList[i];
	//	}
	//}

	//printf("dataList의 최댓값 : %d\n", max);
	//printf("dataList의 최솟값 : %d\n", min);

#pragma endregion
}