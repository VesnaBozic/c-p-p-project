#include "EmployeesMenu.hpp"



void employeesMenu(int index){
        Company *newCompany;
        ifstream file("company.csv");
        file >> newCompany;
        file.close();
        ofstream out;
        cout << "-------------------------------------"<<endl;
        cout<< "Here are all employees in your department: "<<endl;
        newCompany->departmentEmployeesDetails(index);
}