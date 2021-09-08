#include "Department.hpp"

Department::Department(){};
Department::Department(string name, Worker *headOfDepartment) : name(name), headOfDepartment(headOfDepartment){};
string Department::getName()
{
    return name;
};
void Department::setName(string name)
{
    this->name = name;
};
Worker *Department::getHeadOfDepartment()
{
    return headOfDepartment;
};
void Department::setHeadOfDepartment(Worker *Worker)
{
    this->headOfDepartment = headOfDepartment;
};
string Department::getType()
{
    return "Department";
};
void Department::hireWorkera(Worker *Worker)
{
    employees.push_back(Worker);
};

void Department::fireWorkera(int index)
{
    bool notExist = false;
    for (int i = 0; i < employees.size(); i++)
    {
        if (i == index - 1)
        {
            employees.erase(employees.begin() + index - 1);

            notExist = true;
        }
    }

    if (!notExist)
    {
        cout << "Worker doesn't exist!" << endl;
    }
};

void Department::write(ostream &output){
    output<<getType()<<"#"<<name<<endl;
    headOfDepartment->write(output);
    
    for (Worker *r: employees){
        r->write(output);
    }
};


Department::~Department(){};