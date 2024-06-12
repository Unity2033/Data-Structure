#include <iostream>

using namespace std;

template <typename T>
class DoubleLinkedList
{
private:
	int size;

	struct Node
	{
		T data;
		Node * next;
		Node * previous;
	};

	Node * head;
	Node * tail;

public:
	DoubleLinkedList()
	{
		size = 0;
		head = nullptr;
		tail = nullptr;
	}

	void PushFront(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;
		newNode->next = nullptr;
		newNode->previous = nullptr;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			head->previous = newNode;
			newNode->next = head;

			head = newNode;
		}

		size++;
	}

	void PushBack(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;
		newNode->next = nullptr;
		newNode->previous = nullptr;

		if (tail == nullptr)
		{
			tail = newNode;
			head = tail;
		}
		else
		{
			tail->next = newNode;
			newNode->previous = tail;

			tail = newNode;
		}

		size++;
	}

	void PopBack()
	{
		if (tail == nullptr)
		{
			cout << "Linked List is Empty" << endl;
		}
		else
		{
			Node * deleteNode = tail;

			if (head == tail)
			{
				head = nullptr;
				tail = nullptr;

				delete deleteNode;
			}
			else
			{
				tail->previous->next = nullptr;

				tail = tail->previous;

				delete deleteNode;
			}

			size--;
		}
	}

	int & Size()
	{
		return size;
	}

	void Show()
	{
		Node * currentNode = head;

		while (currentNode != nullptr)
		{
			cout << currentNode->data << endl;
			currentNode = currentNode->next;
		}
	}
};

int main()
{
	DoubleLinkedList<int> doubleLinkedList;

	doubleLinkedList.PushFront(10);
	doubleLinkedList.PushFront(20);
	doubleLinkedList.PushFront(30);

	cout << "Double Linked List의 Size : " << doubleLinkedList.Size() << endl; 

	doubleLinkedList.Show();

	return 0;
}