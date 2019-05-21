#include "Employee.h"
#include <string>
//Definations for each of the methods:

Employee::Employee() {}

Employee::Employee(std::string theName, float theRate)
{
	name = theName;
	Rate = theRate;
}

std::string Employee::getName() const
{
	return name;
}

std::string Employee::getID() const
{
	return "undifined";
}

float Employee::getRate() const
{
	return Rate;
}


float Employee::salary(float hoursWorked) const
{
	return hoursWorked * Rate;
}

int Employee::vocationDays(std::string id, int Rate) const
{ 
	return 0;
}


// Manager class inerited fron Employee
Manager::Manager(std::string theName, float theRate, bool isSalaried): Employee(theName, theRate)
{
	salaried = isSalaried;
}

bool Manager::getSalaried() const
{
	return salaried;
}

float Manager::getRate() const
{
	return Rate;
}

std::string Manager::getID() const
{
	return "Maneger";
}

float Manager::salary(float hoursWorked) const
{
	if (salaried)
		return  2 * (hoursWorked * Rate);
	
}

int Manager::vocationDays(std::string id, int Rate) const
{
	if (id == "Manager")
		return 20 * Rate;
	else
		return 0;	
}

// Engineer class inerited fron Employee
Engineer::Engineer(std::string theName, float theRate, bool isSalaried) : Employee(theName, theRate)
{
	salaried = isSalaried;
}

bool Engineer::getSalaried() const
{
	return salaried;
}

float Engineer::getRate() const
{
	return Rate;
}

float Engineer::salary(float hoursWorked) const
{
	if (salaried)
		return  1.2 * (hoursWorked * Rate);

}

std::string Engineer::getID() const
{
	return "Engineer";
}

int Engineer::vocationDays(std::string id, int Rate) const
{
	if (id == "Engineer")
		return 10 * Rate;
	else
		return 0;
}