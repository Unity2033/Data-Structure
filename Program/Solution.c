#include <stdio.h>

void Instantiate()
{
	printf("Instantiate\n");
}

int Factorial(int x)
{
	if (x == 0 || x == 1)
	{
		return 1;
	}
	else
	{
		return x * Factorial(x - 1);
	}
}

int main()
{
#pragma region 함수 포인터
	// 함수의 주소값을 저장하고 가리킬 수 있는 포인터 변수입니다.

	// 반환값과 매개 변수가 없는 함수 포인터를 선언합니다.
	// void (*ptr) ();
	// int  (*iptr) (int);

	//// ptr 변수에 Instantiate 함수의 주소를 저장합니다.
	//// ptr = Instantiate;

	//// 함수 포인터를 호출합니다.
	//// ptr();

	//iptr = Factorial;

	//int number = 0;

	//scanf_s("%d", &number);

	//printf("%d의 Factorial : %d\n", number ,iptr(number));

	// 함수 포인터는 함수의 반환형과 매개 변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없습니다.
#pragma endregion

#pragma region 이중 포인터
	
	/*
	int data = 100;

	int * sptr = &data;

	int ** dptr = &sptr;

	printf("*sptr의 값 : %d\n", *sptr);
	printf("*dptr의 값 : %p\n", *dptr);

	**dptr = 999;

	printf("data의 값 : %d\n", data);
	*/

#pragma endregion

	return 0;
}
