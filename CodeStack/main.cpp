#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> myStack;

	for(int i = 0; i < 10; i++)
	{
		cout << "pushing: " << i << endl;
		myStack.push(i);
	}
	cout << "Number of ints on the stack " << myStack.size() << endl;

	while(!myStack.empty())
	{
		cout << "popping: " << myStack.top() << endl;
		myStack.pop();
		cout << "Number of ints on the stack " << myStack.size() << endl;
	}

    return 0;
}
