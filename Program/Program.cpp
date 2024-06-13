#include <iostream>

using namespace std;

template <typename T>
class DoubleLinkedList
{
private:
	int size;

	struct Node;

	Node * head;
	Node * tail;

public:
	struct Node
	{
		T data;
		Node* next;
		Node* previous;
	};

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

	void PopFront()
	{
		if (head == nullptr)
		{
			cout << "Linked List is Empty" << endl;
		}
		else
		{
			Node * deleteNode = head;

			if (head == tail)
			{
				head = nullptr;
				tail = nullptr;
			}
			else
			{
				deleteNode->next->previous = nullptr;

				head = head->next;
			}

			delete deleteNode;

			size--;
		}
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

	void Insert(Node * position, T data)
	{
		if (head == nullptr)
		{
			PushBack(data);
		}
		else
		{
			Node * previousNode = position;
			Node * nextNode = position->next;

			if (nextNode == nullptr)
			{
				PushBack(data);
			}
			else if (previousNode->previous == nullptr)
			{
				PushFront(data);
			}
			else
			{
				Node * newNode = new Node;

				newNode->data = data;

				previousNode->next = newNode;
				nextNode->previous = newNode;

				newNode->next = nextNode;
				newNode->previous = previousNode;

				size++;
			}
		}
	}

	int & Size()
	{
		return size;
	}

	Node * Begin()
	{
		return head;
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

	~DoubleLinkedList()
	{
		while (head != nullptr)
		{
			PopFront();
		}
	}
};

int main()
{
	 DoubleLinkedList<int> doubleLinkedList;
	 
	 doubleLinkedList.PushFront(10); // 10
	 doubleLinkedList.PushFront(20); // 20 10
	 doubleLinkedList.PushFront(30); // 30 20 10

	 doubleLinkedList.Insert(doubleLinkedList.Begin()->next, 99); // 30 99 20 10
	 
	 cout << "Double Linked List의 Size : " << doubleLinkedList.Size() << endl; 
	 
	 doubleLinkedList.Show();



	return 0;
}