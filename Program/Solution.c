#include <stdio.h>

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이
	// 이루어질 때 기존에 지정했던 자료형을 다른 자료형으로
	// 변환하는 과정입니다.

#pragma region 암묵적 형 변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의
	// 크기가 큰 자료형으로 변환되는 과정입니다.

	//int integer = 10;
	//float decimal = 6.5f;

	//printf("interger(정수형) + decimal(실수형) = %f\n", integer + decimal);

	//// 표현 범위가 작은 데이터에 표현범위가 큰 데이터를 저장하게 되면
	//// 암묵적으로 데이터 손실이 발생하게 됩니다.

	//integer = decimal;

	//printf("interger변수의 값 = %d\n", integer);
#pragma endregion

#pragma region 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을
	// 변환하는 과정입니다.

	//int x = 5;
	//int y = 2;

	//float result = (float)x / y;

	//printf("result 변수의 값 : %f\n", result);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의
	// 결과값만 가질 수 있습니다.
#pragma endregion



#pragma endregion

}