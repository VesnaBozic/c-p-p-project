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
    string deleted;

    

public:
    Department();
    Department(string name, Worker *headOfDepartment, string deleted);
    string getName();
    void setName(string name);
    Worker *getHeadOfDepartment();
    void setHeadOfDepartment(Worker *Worker);
    string getDeleted();
    void setDeleted(string deleted);
    virtual string getType();
    void hireWorkera(Worker *Worker);
    void fireWorkera(int index);


    virtual void write(ostream &output);
    
    virtual ~Department();
};

#endif