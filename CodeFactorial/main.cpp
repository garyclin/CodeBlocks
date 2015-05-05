#include <iostream>

using namespace std;

unsigned long long fact(int n);

int main()
{
	int n = 0;

    cout << "Please enter a number for calculating the factorial of: " << endl;
    cin >> n;
    cout << "Result = " << fact(n) << endl;
    return 0;
}

unsigned long long fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	else
	{
        return n * fact(n-1);
	}
}
