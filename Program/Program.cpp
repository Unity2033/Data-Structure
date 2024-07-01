#include <iostream>

using namespace std;

template <typename T>
class BinarySearchTree
{
private:
	struct Node
	{
		T data;

		Node * left;
		Node * right;
	};

	Node * root;
public:
	BinarySearchTree()
	{
		root = nullptr;
	}
};

int main()
{

	return 0;
}