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
			return;
		}
		else
		{
			int index = *content - 'A';

			if (alphabet[index] == nullptr)
			{
				alphabet[index] = new Trie();
				alphabet[index]->Insert(content + 1);
			}
		}
	}

	bool Find(const char* content)
	{
		if (*content == NULL)
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
			int index = *content - 'A';

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

	trie.Insert("HELLO");
	trie.Insert("WORLD");
	trie.Insert("HALLO");
	trie.Insert("WELT");

	cout << trie.Find("HELLO") << endl;
	cout << trie.Find("WORLD!!!") << endl;

	return 0;
}