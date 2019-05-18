#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main()
{
	Student s1;
	cout << " s1 age is: " << s1.getAge() << endl;
	Student s2("Male", "Alex", 123, 24, 98.23);
	cout << " s2 Gender is: " << s2.getGender() << " Name is: " << s2.getName() << " ID is: " << s2.getID() << " Age is:" << s2.getAge() << " Greade is: " << s2.getGrade() << " Changed ID is: " << s2.changeID() << endl;
	
	Student s3(s2);
	cout << " Copy constuctes called: " << s3.getName()  << "  " << s3.getGrade() << endl;

	Student s4;
	s4 = s2;
	cout << " Assignment operator called: " << s4.getName() << endl;
	system("pause");
	
	//return 0;
}