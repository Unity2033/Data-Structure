#include <iostream>  

char character = 'A';

void Recovery(int& health)
{
    health = 100;
}

int main()
{
#pragma region 스트림 (Stream)
    // 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

    // 삽입 연산자 (<<)
    // 스트림의 경우 입력된 데이터는 출력 장치로 전달하며,
    // "<<" 연산자를 사용하여 자신이 참조한 값을 반환합니다.
    // std::cout << "C++ Language" << std::endl;    
    // std::cout << "C# Language" << std::endl;

    // 스트림은 운영체제에 의해 생성되며, 스트림 자체에 버퍼라는
    // 임시 메모리 공간이 존재합니다.

    // 추출 연산자 (>>)
    // 스트림으로 입력받을 때 ">>" 연산자를 사용하여 버퍼에 저장한 다음
    // NULL 문자까지만 버퍼 안의 내용을 출력합니다.

    // int data = 0;
    // 
    // std::cin >> data;
    // 
    // std::cout << "data의 값 : " << data;

    // int * ptr = new int;
    // int * dynamicArray = new int[5];
    // 
    // dynamicArray[4] = 99;
    // *ptr = 100;
    // 
    // std::cout << "dynamicArray[4]의 값 : " << dynamicArray[4] << std::endl;
    // std::cout << "ptr이 가리키는 값 : " << *ptr << std::endl;
    // 
    // delete ptr;
    // delete [ ] dynamicArray;

#pragma endregion

#pragma region 범위 지정 연산자
    // 여러 범위에서 사용되는 식별자를 구분하는데 사용하는 
    // 연산자입니다.

    // char character = 'W';
    // 
    // std::cout << "character 변수의 값 : " << character << std::endl;
    // std::cout << "character 전역 변수의 값 : " << ::character << std::endl;

    // 범위 지정 연산잔는 전역 변수와 같은 이름의 지역 변수가
    // 선언되었을 때 가까운 범위에 선언된 변수의 이름을 사용하는
    // 범위 규칙이 존재하기 때문에 전역 변수가 호출되지 않습니다.

#pragma endregion

#pragma region 참조자

    // int health = 100;
    // 
    // int & reference = health;
    // 
    // reference -= 50;
    // 
    // Recovery(health);
    // 
    // std::cout << "health의 값 : " << health << std::endl;

#pragma endregion

    return 0;
}

