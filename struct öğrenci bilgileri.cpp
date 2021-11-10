#include <iostream>
#include <string>

using namespace std;

struct Student
{
	string studentName;
	int studentID;

	double midterm1;
	double midterm2;
	double finalExam;
};

int main()
{
	struct Student students[5];


	for (int i = 0; i < 5; i++)
	{
		cout << "Student : " << i+1<< endl;

		cout << "Student name : ";
		cin >> students[i].studentName;

		cout << "Student ID : ";
		cin >> students[i].studentID;

		cout << "Student Midterm1 : ";
		cin >> students[i].midterm1;

		cout << "Student Midterm2 : ";
		cin >> students[i].midterm2;

		cout << "Student Final Exam : ";
		cin >> students[i].finalExam;

	}

	for (int i = 0; i < 5; i++)
	{
		cout << "Student" << i + 1 << endl;

		cout << "Student Name : " << students[i].studentName << " Student ID : " << students[i].studentID
			<< " Student Midterm 1 : " << students->midterm1 << " Student Midterm 2 : " << students->midterm2
			<< " Student Midterm 2 : " << students->midterm2 << " Student Final Exam : " << students->finalExam;
	}


	return 0;
}
