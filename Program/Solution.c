#include <stdio.h>
#include "Function.h" // int data;

#pragma region 전처리기
   // 프로그램이 컴파일되기 이전에 프로그램에 대한
   // 사전 처리를 하는 과정입니다.

   // 전처리기는 컴파일러가 아닌 선행처리기에 의해서
   // 처리되는 문장이기 때문에 명령문 끝에 ";"을 사용하지 않습니다.
#pragma endregion


int main()
{
	data = 100;

	printf("Function.h에서 생성한 data 변수의 값 : %d\n", data);

	return 0;
}