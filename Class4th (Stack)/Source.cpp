#include <iostream>

using namespace std;

#define SIZE 10

template <typename T>
class Stack
{
private:
	int top;
	T container[SIZE];

public:
	Stack()
	{
		top = -1;

		for (int i = 0; i < SIZE; i++)
		{
			container[i] = 0;
		}
	}

	void Push(T data)
	{
		if (top >= SIZE - 1)
		{
			cout << "Stack Overflow" << endl;
		}
		else
		{
			container[++top] = data;
		}
	}

	void Pop()
	{
		if (Empty())
		{
			cout << "Stack is Empty" << endl;
		}
		else
		{
			top--;
		}
	}

	bool Empty()
	{
		if (top <= -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	int& Size()
	{
		return top;
	}

	T& Top()
	{
		return container[top];
	}

};

bool CheckBracket(std::string content)
{
	if (content.length() <= 0)
	{
		return false;
	}

	Stack<char> stack;

	for (int i = 0; i < content.length(); i++)
	{
		char character = content[i];

		if (character == '(' || character == '{' || character == '[')
		{
			stack.Push(character);
		}
		else if (character == ')' || character == '}' || character == ']')
		{
			char bracket = stack.Top();

			stack.Pop();

			if (bracket == '(' && character != ')')
			{
				return false;
			}

			if (bracket == '{' && character != '}')
			{
				return false;
			}

			if (bracket == '[' && character != ']')
			{
				return false;
			}
		}
	}

	if (stack.Empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	bool flag = CheckBracket("((");

	cout << "flag 변수의 값 : " << flag << endl;

	return 0;
}