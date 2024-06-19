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

	void Push(T data)
	{
		if (front == (rear + 1) % SIZE)
		{
			cout << "CircleQueue Overflow" << endl;
		}
		else
		{
			rear = (rear + 1) % SIZE;
			container[rear] = data;

			size++;
		}
	}

	void Pop()
	{
		if (Empty())
		{
			cout << "CircleQueue is Empty" << endl;
		}
		else
		{
			front = (front + 1) % SIZE;

			container[front] = NULL;

			size--;
		}
	}

	bool Empty()
	{
		if (front == rear)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int& Size()
	{
		return size;
	}

	T& Front()
	{
		return container[(front + 1) % SIZE];
	}
};

int main()
{
	CircleQueue<char> circleQueue;

	circleQueue.Push('A');
	circleQueue.Push('B');
	circleQueue.Push('C');
	circleQueue.Push('D');

	while (circleQueue.Empty() == false)
	{
		cout << circleQueue.Front() << endl;

		circleQueue.Pop();
	}

	circleQueue.Push('E');
	circleQueue.Push('F');

	while (circleQueue.Empty() == false)
	{
		cout << circleQueue.Front() << endl;

		circleQueue.Pop();
	}

	return 0;
}