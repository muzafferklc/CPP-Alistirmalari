#include <iostream>

using namespace std;

int a;
int b;

struct calcStatement
{
	int num1;
	int num2;

	int result;
};

int main()
{
	cout << "Give two numbers : ";
	cin >> a >> b;
	int result = a + b;
	cout << "Result is : " << result << endl;

	// structure definition
	calcStatement calc1; // calcStatement -> name of type, calc1 -> name of variable/object

	cout << "Give two numbers to the structure : ";
	cin >> calc1.num1 >> calc1.num2;

	calc1.result = calc1.num1 + calc1.num2;

	cout << "Structure result is that : " << calc1.result << endl;




	return 0;
}
