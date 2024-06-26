﻿#include <iostream>

using namespace std;

template<typename T>
class Vector
{
private:
	int size;
	int capacity;
	T* bufferPointer;

public:
	Vector()
	{
		size = 0;
		capacity = 0;
		bufferPointer = nullptr;
	}

	void PushBack(T data)
	{
		if (capacity == 0)
		{
			Resize(1);
		}
		else if (size >= capacity)
		{
			Resize(capacity * 2);
		}

		bufferPointer[size++] = data;
	}

	void PopBack()
	{
		if (size <= 0)
		{
			cout << "Vector is Empty" << endl;
		}
		else
		{
			bufferPointer[--size] = NULL;
		}
	}

	void Resize(int newSize)
	{
		// 1. capacity에 새로운 size값을 설정합니다.
		capacity = newSize;

		// 2. 새로운 포인터 변수를 생성해서 새롭게 만들어진
		//    미모리 공간을 가리키도록 합니다.
		T* newPointer = new T[capacity];

		// 3. 새로운 메모리 공간의 값을 초기화합니다.
		for (int i = 0; i < capacity; i++)
		{
			newPointer[i] = NULL;
		}

		// 4. 기존 배열에 있는 값을 복사해서 새로운 배열에
		//    넣어줍니다.
		for (int i = 0; i < size; i++)
		{
			newPointer[i] = bufferPointer[i];
		}

		// 5. bufferPointer의 메모리 주소를 해제합니다.
		if (bufferPointer != nullptr)
		{
			delete[] bufferPointer;
		}

		// 6. bufferPointer에 새로운 메모리 주소를 저장합니다.
		bufferPointer = newPointer;
	}

	void Reserve(int newSize)
	{
		if (newSize < capacity)
		{
			return;
		}

		Resize(newSize);
	}

	T& operator[](const int& index)
	{
		return bufferPointer[index];
	}

	int& Size()
	{
		return size;
	}

	~Vector()
	{
		if (bufferPointer != nullptr)
		{
			delete[] bufferPointer;
		}
	}
};

int main()
{
	Vector<int> vector;

	vector.PushBack(10);
	vector.PushBack(20);

	cout << vector[0];

	return 0;
}
