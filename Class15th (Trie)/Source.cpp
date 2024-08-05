#include <iostream>

#define SIZE 26

using namespace std;

class Trie
{
private:
	bool final;

	Trie* alphabet[SIZE];

public:
	Trie()
	{
		final = false;

		for (int i = 0; i < SIZE; i++)
		{
			alphabet[i] = nullptr;
		}
	}

	void Insert(const char* content)
	{
		if (*content == '\0')
		{
			final = true;
		}
		else
		{
			int index = 0;

			if ('A' <= *content && 'Z' >= *content)
			{
				index = *content - 'A';
			}
			else if ('a' <= *content && 'z' >= *content)
			{
				index = *content - 'a';
			}

			if (alphabet[index] == nullptr)
			{
				alphabet[index] = new Trie();
			}

			alphabet[index]->Insert(content + 1);
		}
	}

	bool Find(const char* content)
	{
		if (*content == '\0')
		{
			if (final == true)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			int index = 0;

			if ('A' <= *content && 'Z' >= *content)
			{
				index = *content - 'A';
			}
			else if ('a' <= *content && 'z' >= *content)
			{
				index = *content - 'a';
			}

			if (alphabet[index] == nullptr)
			{
				return false;
			}
			else
			{
				return alphabet[index]->Find(content + 1);
			}
		}

	}

	~Trie()
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (alphabet[i] != nullptr)
			{
				delete alphabet[i];
			}
		}
	}
};

int main()
{
	Trie trie;

	trie.Insert("Hello");
	trie.Insert("Health");

	cout << trie.Find("Hello") << endl;
	cout << trie.Find("Health") << endl;



	return 0;
}