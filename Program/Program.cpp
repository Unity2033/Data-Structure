#include <iostream>

using namespace std;

#define SIZE 5

template <typename T>
class CircleQueue
{
private:
	int size;
	int rear;
	int front;

	T container[SIZE];

public:

	CircleQueue()
	{
		size = 0;
		rear = SIZE - 1;
		front = SIZE - 1;

		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}
};

int main()
{

	return 0;
}