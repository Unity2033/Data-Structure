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

	int * pointer = NULL;
												
	printf("char 자료형의 크기 : %d\n" ,   sizeof(char));
	printf("short 자료형의 크기 : %d\n",   sizeof(short));
	printf("int 자료형의 크기 : %d\n"  ,   sizeof(int));
	printf("long 자료형의 크기 : %d\n" ,   sizeof(long));
	printf("float 자료형의 크기 : %d\n" ,  sizeof(float));
	printf("double 자료형의 크기 : %d\n",  sizeof(double));
	printf("pointer 자료형의 크기 : %d\n", sizeof(pointer));


#pragma endregion

}