#include <iostream>

using namespace std;

class Stack
{
private:
	int top;
	int* arr = new int[20];
public:
	Stack() : top(0) {}

	void Push(int value)
	{
		top++;
		arr[top] = value;
	}
	void Pop()
	{
		int value = arr[top];
		top--;
	}

	void Show()
	{
		for (unsigned int i = top; i > 0; --i)
			cout << arr[i] << endl;
	}
};

void main()
{
	Stack stack;
	stack.Push(1);
	stack.Push(3);
	stack.Push(4);
	stack.Push(2);
	stack.Push(5);
	stack.Show();
	cout << "\n";

	stack.Pop();
	stack.Pop();
	stack.Pop();
	cout << "\n";

	stack.Show();
}