#include <iostream>

using namespace std;

#define SIZE 6

template<typename KEY, typename VALUE>
class HashTable
{
private:
	struct Node
	{
		KEY key;
		VALUE value;

		Node* next;
	};

	struct Bucket
	{
		int count;
		Node* head;
	};

	Bucket bucket[SIZE];

public:
	HashTable()
	{
		for (int i = 0; i < SIZE; i++)
		{
			bucket[i].count = 0;
			bucket[i].head = nullptr;
		}
	}

	template <typename T>
	int HashFunction(T key)
	{
		int hashIndex = (int)key % SIZE;

		return hashIndex;
	}

	template<>
	int HashFunction(std::string key)
	{
		int result = 0;

		for (const char& element : key)
		{
			result += element;
		}

		int hashIndex = (int)result % SIZE;

		return hashIndex;
	}

	void Insert(KEY key, VALUE value)
	{
		// 해시 함수를 통해서 값을 받는 임시 변수
		int hashIndex = HashFunction(key);

		// 새로운 노드를 생성합니다.
		Node* newNode = CreateNode(key, value);

		// 노드가 1개라도 존재하지 않는다면
		if (bucket[hashIndex].count == 0)
		{
			// bucket[hashIndex]의 head 포인터를 newNode를 가리키게 합니다.
			bucket[hashIndex].head = newNode;
		}
		else
		{
			newNode->next = bucket[hashIndex].head;

			bucket[hashIndex].head = newNode;
		}

		// bucket[hashIndex]의 count를 증가합니다.
		bucket[hashIndex].count++;

	}

	void Remove(KEY key)
	{
		// 1. 해시 함수를 통해서 값을 받는 임시 변수
		int hashIndex = HashFunction(key);

		// 2. Node를 탐색할 수 있는 포인터 변수 선언
		Node* currentNode = bucket[hashIndex].head;

		// 3. 이전 Node를 저장할 수 있는 포인터 변수 선언
		Node* previousNode = nullptr;

		// 4. currentNode가 nullptr과 같다면 함수를 종료합니다.
		if (currentNode == nullptr)
		{
			cout << "Not key Found" << endl;
			return;
		}
		else
		{
			// 5. currentNode를 이용해서 내가 찾고자 하는 Key 값을 찾습니다/
			while (currentNode != nullptr)
			{
				if (currentNode->key == key)
				{
					if (currentNode == bucket[hashIndex].head)
					{
						bucket[hashIndex].head = currentNode->next;
					}
					else
					{
						previousNode->next = currentNode->next;
					}

					bucket[hashIndex].count--;

					delete currentNode;

					return;
				}
				else
				{
					previousNode = currentNode;
					currentNode = currentNode->next;
				}

			}

			cout << "Not key Found" << endl;
		}
	}

	Node* CreateNode(KEY key, VALUE value)
	{
		Node* newNode = new Node();

		newNode->key = key;

		newNode->value = value;

		newNode->next = nullptr;

		return newNode;
	}

	void Show()
	{
		for (int i = 0; i < SIZE; i++)
		{
			Node* currentNode = bucket[i].head;

			while (currentNode != nullptr)
			{
				cout << "[" << i << "] " << "KEY : " << currentNode->key << " VALUE : " << currentNode->value << " ";
				currentNode = currentNode->next;
			}

			cout << endl;
		}
	}

	~HashTable()
	{
		for (int i = 0; i < SIZE; i++)
		{
			Node* deleteNode = bucket[i].head;
			Node* nextNode = bucket[i].head;

			if (bucket[i].head == nullptr)
			{
				continue;
			}
			else
			{
				while (nextNode != nullptr)
				{
					nextNode = deleteNode->next;

					delete deleteNode;

					deleteNode = nextNode;
				}
			}
		}

	}
};

int main()
{
	HashTable<std::string, int>	hashTable;

	hashTable.Insert("Sword", 100);
	hashTable.Insert("Diamond", 999);
	hashTable.Insert("Potion", 50);
	hashTable.Insert("Ruby", 1455);

	hashTable.Remove("Ruby");
	hashTable.Remove("Diamond");
	hashTable.Remove("branch");

	hashTable.Show();

	return 0;
}