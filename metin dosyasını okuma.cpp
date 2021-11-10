#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	ifstream in_s("ihsan.txt");
	string myText;

	while (getline(in_s, myText))
	{
		cout << myText << endl;
	}
	
	return 0;
}
