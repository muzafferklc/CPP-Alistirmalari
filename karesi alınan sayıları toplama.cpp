#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

#define ARRAY_NUMBER 4

int main()
{
	ofstream projectsSquare("squareText.txt");
	int numbers;

	cout << "\n\nWriting operation is proceeded...\n"
		<< endl;

	for (int i = 0; i < ARRAY_NUMBER; i++)
	{
		cout << "Square of " << i << " is : " << (i * i) << endl;
		projectsSquare << (i * i) << endl;

	}

	projectsSquare.close();

	cout << "\n\nReading operation is proceeded...\n"
		<< endl;

	ifstream projectsResultsSquare("squareText.txt");
	string information;
	int storedNumbers[ARRAY_NUMBER];
	int counter = 0;
	

	while (getline(projectsResultsSquare, information))
	{
		storedNumbers[counter] = stoi(information);
		cout << information << endl;
		counter++;
	}

	cout << "\n\nSum operation is proceeded...\n"
		 << endl;
	
	
	int sumArray = 0;

	for (int i = 0; i < ARRAY_NUMBER; i++)
	{
		sumArray = sumArray + storedNumbers[i];
	}

	cout << "Total summation is : " << sumArray << endl;


	projectsResultsSquare.close();

	return 0;
}
