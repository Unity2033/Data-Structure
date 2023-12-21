#include <stdio.h>

void Function()
{
	printf("Function");
}

int Add(int x, int y)
{
	return x + y;
}

int Minus(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Swap(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;

	// 함수를 호출할 때 변수의 값을 인수로 전달하게 되면
	// 함수의 매개 변수에 변수의 복사된 값이 전달되기 때문에
	// 인수로 전달한 변수는 함수 내에서 일어난 연산에 대해 
	// 영향을 받지 않습니다. 
}

void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기
	// 위해 독립적으로 설계된 코드의 집합입니다.

	//Function();

	// 함수가 호출될 때 함수가 호출되는 시작 지점으로
	// 넘어가게 됩니다.

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기
	// 위해 사용하는 변수입니다.
	
	//printf("Add함수의 결과 : %d\n",Add(10, 20));
	//printf("Add함수의 결과 : %d\n", Minus(10, 20));

	//// 매개 변수는 함수 내부에서만 연산이 이루어지며, 함수가
	//// 종료되면 메모리에서 사라지는 특징을 가지고 있습니다.

	//printf("Add함수의 결과 : %d\n", Multiple(5.75f, 7.65f));

	// 함수의 경우 자료형과 반환하는 값의 형태가 일치하지 않으면
	// 원하는 값을 없을 수 없습니다.
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개변수에 실제로 전달되는 값입니다.

	int a = 10;
	int b = 20;

	Swap(a, b);

	printf("a 변수의 값 : %d\n", a);
	printf("b 변수의 값 : %d\n", b);

	// 인수의 경우 함수에 있는 매개변수의 수에 따라 전달할 수 있는
	// 인수의 수가 결정되며, 값을 전달하는 인수와 값을 전달받는
	// 매개변수의 자료형이 서로 일치해야 합니다.

#pragma endregion



#pragma endregion
}