#include <stdio.h>
#include <stdlib.h>

enum Unit
{
	// 열거형은 값을 따로 지정하지 않으면 가장 위에 있는 값은
	// 0이라는 값으로 설정됩니다.
	SKELETON,
	SLIME = 15,
	GOBLIN

	// 열거형에서 중간에 있는 값을 변경하게 되면 그다음에 있는 
	// 이전에 있는 값에서 +1이 됩니다.
};

// 
// []     []    [] 

void CreateUnit(enum Unit unit)
{
	switch (unit)
	{
	case SKELETON: printf("Create Skeleton\n");
		break;
	case SLIME: printf("Create Slime\n");
		break;
	case GOBLIN: printf("Create Goblin\n");
		break;
	default:
		break;
	}
}

int main()
{
#pragma region 포인터 배열
	//const char* string[3];

	//// 8 byte 8 byte 8 byte 
	//// [    ] [    ] [    ]
	////   
	//// "Blue" "Black" "Green"

	//string[0] = "Blue";
	//string[1] = "Black";
	//string[2] = "Green";

	//for (int i = 0; i < 3; i++)
	//{
	//	// printf("string[%d] : %p\n", i, string[i]);
	//	printf("string[%d] : %s\n", i, string[i]);
	//}
#pragma endregion

#pragma region 열거형

	// CreateUnit(SKELETON);
	// CreateUnit(SLIME);


#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	/*int * ptr = malloc(sizeof(4));

	*ptr = 999;

	printf("*ptr의 값 : %d\n", *ptr);

	free(ptr);

	printf("*ptr의 값 : %d\n", *ptr);

	ptr = NULL;

	if (ptr == NULL)
	{
		ptr = malloc(sizeof(4));
	}

	*ptr = 235;

	printf("*ptr의 값 : %d\n", *ptr);

	free(ptr);*/

#pragma endregion

	return 0;
}
