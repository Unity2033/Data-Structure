#include <iostream>

#pragma warnings(disable : 4996)

using namespace std;

class String
{
private:
	int size;
	char * container;

public:
	String()
	{
		size = 0;
		container = nullptr;
	}

	void operator = (const char * content)
	{
		int arraySize = strlen(content) + 1;

		size = strlen(content);

		if (container == nullptr)
		{
			container = new char[arraySize];

			for (int i = 0; i < arraySize; i++)
			{
				container[i] = content[i];
			}
		}
		else
		{
			char * newContainer = new char[arraySize];

			for (int i = 0; i < arraySize; i++)
			{
				newContainer[i] = content[i];
			}

			delete container;

			container = newContainer;
		}
	}

	int & Size()
	{
		return size;
	}

	char & operator [] (int index)
	{
		return container[index];
	}

};


int main()
{
	// String string;
	// 
	// string = "Janna";
	// 
	// cout << "string의 크기 : " << string.Size() << endl;
	// 
	// string = "Alistar";
	// 
	// for (int i = 0; i < string.Size(); i++)
	// {
	// 	cout << string[i];
	// }

	string name;

	name = "qe";

	cout << "문자열이 같나요? " << name.compare("qd");

	return 0;
}