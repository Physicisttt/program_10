#include <iostream>

using namespace std;

int summ(int a, int b)
{
	return a + b;
}

int multi(int a, int b)
{
	return a * b;
}

int main(void)
{
	int result;
	int a1, b1;

	a1 = 2;
	b1 = 4;

	result = summ(a1, b1);
	cout << "result = " << result << endl;

	result = multi(a1, b1);
	cout << "result = " << result << endl;
	

	return 0;
}