#pragma once

#include <iostream>
#include <string>

class Student
{

private:
	std::string gender;
	std::string name;
	int ID;
	int age;
	double grade;


public:
	Student();
	Student(std::string gen, std::string n, int I, int a, double gr);
	Student(const Student &stud); // copy constructor
	Student& operator=(const Student & studnew); // assignment operator
	~Student()   //Destructor
			{
		std::cout << "\n\tEnd of program.";
	};

	int changeID();


	
	std::string getGender();
	std::string getName();
	int getID();
	int getAge();
	double getGrade();
	
};