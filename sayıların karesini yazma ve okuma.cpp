#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	ofstream projectsSquare("squareText.txt");
	int numbers;

	cout << "\n\nWriting operation is proceeded...\n"
		 << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Square of " << i << " is : " << (i * i) << endl;
		projectsSquare << "Square of " << i << " is : " << (i * i) << endl;

	}

	projectsSquare.close();


	ifstream projectsResultsSquare("squareText.txt");
	string information;

	cout << "\n\nReading operation is proceeded...\n"
		 << endl;

	while (getline(projectsResultsSquare, information))
	{
		cout << information << endl;
	}

	projectsResultsSquare.close();

	return 0;
}
