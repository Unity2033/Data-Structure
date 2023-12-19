#include <stdio.h>

void main()
{
#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	//int data = 10;
	//float pi = 3.14f;

	//// 8 byte 
	//// [NULL]

	//int * ptr = NULL;

	//// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	//// 포인터 변수에 변수의 주소를 저장하게 되면 해당 변수의
	//// 시작 주소를 가리키게 됩니다.

	////     ptr 변수           
	//// [data의 시작주소]	<---- data의 시작 주소
	//ptr = &data;

	//// 변수의 주소는 프로그램이 실행될 때마다 변경되며,
	//// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로
	//// 포인터가 가리키는 메모리의 자료형으로 선언해주어야 합니다.

	//printf("data 변수의 메모리 주소 : %p\n", &data);
	//printf("ptr 변수의 값 : %p\n", ptr);
	//printf("ptr 변수의 메모리 주소 : %p\n", &ptr);

	//printf("data 변수의 값 : %d\n", data);
	//printf("ptr 변수가 가리키는 값 : %d\n", *ptr);

	//// 포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과
	//// 포인터 변수의 자료형이 일치해야 합니다.

	//ptr = &pi;

	//printf("pi 변수의 값 : %f\n", pi);
	//printf("ptr 변수가 가리키는 값 : %f\n", *ptr);

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에
	// 처리할 수 있는 크기로 정해지며, 한 번에 처리할 
	// 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.

#pragma endregion

#pragma region sizeof 연산자
	// 피연산자의 크기를 바이트 단위로 반환하는 연산자입니다.

	/*int * pointer = NULL;

	printf("char 자료형의 크기 : %d\n" ,   sizeof(char));
	printf("short 자료형의 크기 : %d\n",   sizeof(short));
	printf("int 자료형의 크기 : %d\n"  ,   sizeof(int));
	printf("long 자료형의 크기 : %d\n" ,   sizeof(long));
	printf("float 자료형의 크기 : %d\n" ,  sizeof(float));
	printf("double 자료형의 크기 : %d\n",  sizeof(double));
	printf("pointer 자료형의 크기 : %d\n", sizeof(pointer));*/


#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터 변수를 상수로 선언하여, 포인터 변수가
	// 가리키고 있는 주소에 존재하는 값을 변경할 수 없도록
	// 설정할 수 있습니다.

	//const int * ptr;

	//int a = 10;

	//int b = 20;

	//ptr = &a;
	//printf("ptr의 값 : %p\n", ptr);

	//a = 45;
	//// *ptr = 100;

	//ptr = &b;
	//printf("ptr의 값 : %p\n", ptr);


	// 상수로 선언한 포인터는 해당 변수의 값을 변경할 수 없지만,
	// 다른 변수의 주소는 가리킬 수 있습니다.

#pragma endregion

#pragma region 포인터 상수

	/*int x = 100;
	int y = 200;

	int * const cptr = &x;

	*cptr = 999;

	printf("x의 값 : %d\n", x);*/

	// cptr = &y; (ERROR)

#pragma endregion

#pragma region 약수

//int number = 0;
//
//scanf_s("%d", &number);
//
//for (int i = 1; i <= number; i++)
//{
//	if (number % i == 0)
//	{
//		printf("%d ", i);
//	}
//}


#pragma endregion
}