#include <iostream>

using namespace std;

#define SIZE 8

template <typename T>
class Heap
{
private:
	int index;
	T container[SIZE];
public:
	Heap()
	{
		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}

		index = 0;
	}

	void Insert(T data)
	{
		if (index >= SIZE)
		{
			cout << "Heap Overflow" << endl;
		}
		else
		{
			container[++index] = data;

			int child = index;
			int parent = child / 2;

			while (child > 1)
			{
				if (container[parent] < container[child])
				{
					std::swap(container[parent], container[child]);
				}

				child = parent;
				parent = child / 2;

			}
		}
	}

	T Remove()
	{
		if (index <= 0)
		{
			cout << "Heap is Empty" << endl;
			exit(1);
		}

		T result = container[1];

		container[1] = container[index];

		container[index] = NULL;

		index--;

		int parent = 1;

		while (parent * 2 <= index)
		{
			int child = parent * 2;

			if (container[child] < container[child + 1])
			{
				child++;
			}

			if (container[child] < container[parent])
			{
				break;
			}
			else
			{
				std::swap(container[parent], container[child]);
				parent = child;
			}
		}

		return result;
	}

	void Show()
	{
		for (int i = 1; i <= index; i++)
		{
			cout << container[i] << " ";
		}
	}

};

int main()
{
	Heap<int> heap;

	heap.Insert(6);
	heap.Insert(7);
	heap.Insert(2);
	heap.Insert(10);

	cout << "Heap의 최대값 : " << heap.Remove() << endl;
	cout << "Heap의 최대값 : " << heap.Remove() << endl;
	cout << "Heap의 최대값 : " << heap.Remove() << endl;
	cout << "Heap의 최대값 : " << heap.Remove() << endl;
	cout << "Heap의 최대값 : " << heap.Remove() << endl;

	heap.Show();

	return 0;
}