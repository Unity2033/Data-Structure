#include <stdio.h>

void main()
{
#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최댓값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.
	
	/*
	char data = 127 + 3;

	printf("data 변수의 값 : %d", data);
	*/
	
	// 오버플로우는 최댓값보다 더 많은 값을 저장하게 되면
	// 최솟값부터 최댓값을 넘어간 만큼 다시 계산합니다.
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.

	//char alphabet = -128 - 1;

	//printf("alphabet 변수의 값 : %d", alphabet);

	// 언더플로우는 최솟값보다 더 작은 값을 저장하게 되면 최댓값부터
	// 최솟값을 넘어간 만큼 다시 계산합니다.
#pragma endregion

#pragma region 실수를 저장하는 방법
	// 부동 소수점이란?
	// 소수점의 위치를 고정하지 않고, 소수점의 위치를 나타내는 방법입니다.
	// float attack = 6.13f;
	   
	// printf("attack 변수의 값 : %.16f\n", attack);
	   
	// // 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는 표현하지 않습니다.
	// double health = 6.1333333333333333;
	// printf("health 변수의 값 : %.16lf\n", health);

	// <실수 형태의 10 진수를 2 진수로 변환하는 과정>
	// 10진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한 다음
	// 곱한 결과의 정수 부분을 위에서 아래로 순서대로 정렬합니다.
#pragma endregion

#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0
	// 또는 1이라는 값으로 나타내는 연산자입니다.

	// int result1 = 10 >  5; // 10 > 5  : 10이 5보다 크다. (참) 
	// int result2 = 10 <  5; // 10 < 5  : 5가 10보다 크다. (거짓)
	// int result3 = 10 >= 5; // 10 >= 5 : 10이 5보다 크거나 같다. (참)
	// int result4 = 10 <= 5; // 10 <= 5 : 5보다 10보다 크거나 같다. (거짓)
	// int result5 = 10 == 5; // 10 == 5 : 10이 5와 같다. (거짓)
	// int result6 = 10 != 5; // 10 != 5 : 10이 5와 같지 않다. (참)
	   
	// printf("result1 변수의 값 : %d\n", result1);
	// printf("result2 변수의 값 : %d\n", result2);
	// printf("result3 변수의 값 : %d\n", result3);
	// printf("result4 변수의 값 : %d\n", result4);
	// printf("result5 변수의 값 : %d\n", result5);
	// printf("result6 변수의 값 : %d\n", result6);

#pragma endregion


#pragma endregion


}