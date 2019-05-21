#include "Employee.h"
#include <iostream>
#include <string>

int main()
{
	Employee empl("John", 4.0);
	std::cout << "NameID: " << empl.getName() << std::endl;
	std::cout << "Salary: " << empl.salary(40.0) << std::endl;
	std::cout << "ID: " << empl.getID() << std::endl;

	Manager mgr("Smith", 3.2, true);
	std::cout << "NameID: " << mgr.getName() << std::endl;
	std::cout << "Salary: " << mgr.salary(40.0) << std::endl;
	std::cout << "ID: " << mgr.getID() << std::endl;
	
	Engineer eng("Alex", 2, true);
	std::cout << "NameID: " << eng.getName() << std::endl;
	std::cout << "Salary: " << eng.salary(20.0) << std::endl;
	std::cout << "ID: " << eng.getID() << std::endl;

   system("pause");
}