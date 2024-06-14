#include <iostream>

using namespace std;

template <typename T>
class CircleLinkedList
{
private:
	int size;

	struct Node
	{
		T data;
		Node* next;
	};

	Node * head;

public:
	CircleLinkedList()
	{
		size = 0;
		head = nullptr;
	}

	void PushBack(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;

		if (head == nullptr)
		{
			head = newNode;

			newNode->next = head;
		}
		else
		{
			newNode->next = head->next;

			head->next = newNode;

			head = newNode;
		}

		size++;
	}

	void PushFront(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;

		if (head == nullptr)
		{
			head = newNode;

			newNode->next = head;
		}
		else
		{
			newNode->next = head->next;

			head->next = newNode;
		}

		size++;
	}

	void PopFront()
	{
		if (head == nullptr)
		{
			cout << "Linked List is Empty" << endl;
		}
		else
		{
			Node * deleteNode = head->next;

			if (head == head->next)
			{
				head = nullptr;
			}
			else
			{
				head->next = deleteNode->next;
			}

			delete deleteNode;

			size--;
		}
	}

	void PopBack()
	{
		if (head == nullptr)
		{
			cout << "Linked List is Empty" << endl;
		}
		else
		{
			Node * currentNode = head;
			Node * deleteNode = head;

			if (head == head->next)
			{
				head = nullptr;		
			}
			else
			{
				for (int i = 0; i < size - 1; i++)
				{
					currentNode = currentNode->next;
				}

				currentNode->next = head->next;

				head = currentNode;
			}

			delete deleteNode;

			size--;
		}
	}

	void Show()
	{
		if (head != nullptr)
		{
			Node * currentNode = head->next;

			for (int i = 0; i < size; i++)
			{
				cout << currentNode->data << endl;
				currentNode = currentNode->next;
			}
		}
	}
};

int main()
{
	CircleLinkedList<int> circleLinkedList;

	circleLinkedList.PushBack(10);
	circleLinkedList.PushBack(20);
	circleLinkedList.PushFront(99);

	circleLinkedList.Show();

	return 0;
}