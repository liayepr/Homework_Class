#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student()
{
	gender = "";
	name = "";
	ID = 0;
	age = 0;
	grade = 0;
}

Student::Student(string gen, string n, int I, int a, double gr)
{
	gender = gen;
	name = n;
	ID = I;
	age = a;
	grade = gr;
}

Student::Student(const Student &stud)
{
	gender = stud.gender;
	name = stud.name;
	ID = stud.ID;
	age = stud.age;
	grade = stud.grade;
}

Student& Student::operator = (const Student &studnew)
{
	gender = studnew.gender;
	name = studnew.name;
	ID = studnew.ID;
	age = studnew.age;
	grade = studnew.grade;
	return *this;
}

int Student::changeID()
{
	if (grade >= 90)
		return ID + 1;
}

string Student::getGender()
{
	return gender;
}

string Student::getName()
{
	return name;
}

int Student::getID()
{
	return ID;
}

int Student::getAge()
{
	return age;
}

double Student::getGrade()
{
	return grade;
}


