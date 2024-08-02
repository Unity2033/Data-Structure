#include <iostream>

#define SIZE 26

class Trie
{
private:
	bool final;

	Trie * alphabet[SIZE];

public:
	Trie()
	{
		final = false;

		for (int i = 0; i < SIZE; i++)
		{
			alphabet[i] = nullptr;
		}
	}
};

int main()
{


	return 0;
}