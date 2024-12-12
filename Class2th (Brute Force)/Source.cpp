#include <iostream>

using namespace std;

int main()
{
#pragma region 브루트 포스
	// 가능한 모든 경우의 수를 탐색하면서
	// 결과를 도출하는 알고리즘입니다.

	int password[3] = { 5,6,0 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (password[0] == i && password[1] == j && password[2] == k)
				{
					cout << "해제" << endl;

					cout << i << " " << j << " " << k << endl;
				}
			}
		}
	}

#pragma endregion



	return 0;
}


