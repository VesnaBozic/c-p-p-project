#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Worker.hpp"
#include "Seller.hpp"
#include <vector>

class Department
{
private:
    string name;
    Worker *headOfDepartment;
    string deleted;
    vector<Worker*> employees;
    

    

public:
    Department();
    Department(string name, string deleted, Worker *headOfDepartment );
    string getName();
    void setName(string name);
    string getDeleted();
    void setDeleted(string deleted);
    Worker *getHeadOfDepartment();
    void setHeadOfDepartment(Worker *Worker);
    void changeHeadOfDepartment(int index);
    void updateWorker(int employee,string newName, string newSurname, double newSalary);
    virtual string getType();
    void hireWorker(Worker *Worker);
    void fireWorker(int index);
    void details();
    void employeesDetails();

    virtual void write(ostream &output);
    
    virtual ~Department();
};

#endif