#include <iostream>

using namespace std;

class Calc
{
private:
public:
	int num1;
	int num2;

	int result;

	void sumOperation()
	{
		result = num1 + num2;
		cout << "Result : " << result << endl;

	}
};

int main()
{
	Calc calc1;
	calc1.num1 = 5;
	calc1.num2 = 8;

	calc1.sumOperation();

	return 0;
}
