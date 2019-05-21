#pragma once
#include <iostream>
#include <string>

class Employee {

protected:
	std::string name; 
	std::string id;
	float Rate;

public:
	Employee();
	Employee(std::string theName, float theRate);
	virtual std::string getName() const;
	virtual std::string getID() const;
	virtual float getRate() const;
	virtual float salary(float hoursWorked) const;
	virtual int vocationDays(std::string id, int Rate) const;
};

// class Manager inherited
class Manager : public Employee {

protected:
	bool salaried;

public:
	Manager(std::string theName, float theRate, bool isSalaried);
	bool getSalaried() const;
	float getRate() const;
	std::string getID() const;
	float salary(float hoursWorked) const;
	int vocationDays(std::string id, int Rate) const;
};

// class Engineer inherited
class Engineer : public Employee {

protected:
	bool salaried;

public:
	Engineer(std::string theName, float theRate, bool isSalaried);
	bool getSalaried() const;
	float getRate() const;
	std::string getID() const;
	float salary(float hoursWorked) const;
	int vocationDays(std::string id, int Rate) const;
};