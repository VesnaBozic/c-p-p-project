#ifndef DEPARTMENT_HPP
#define DEPARTMENT_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Worker.hpp"

#include <vector>

class Department
{
private:
    string name;
    Worker *headOfDepartment;
    vector<Worker*> employees;
    

    

public:
    Department();
    Department(string name, Worker *headOfDepartment );
    string getName();
    void setName(string name);
    Worker *getHeadOfDepartment();
    void setHeadOfDepartment(Worker *Worker);
    void changeHeadOfDepartment(int index);
    virtual string getType();
    void hireWorkera(Worker *Worker);
    void fireWorkera(int index);
    void details();
    void employeesDetails();

    virtual void write(ostream &output);
    
    virtual ~Department();
};

#endif