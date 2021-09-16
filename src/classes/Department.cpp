#include "Department.hpp"

Department::Department(){};
Department::Department(string name, string deleted, Worker *headOfDepartment) : name(name),deleted(deleted), headOfDepartment(headOfDepartment){};
string Department::getName()
{
    return name;
};
void Department::setName(string name)
{
    this->name = name;
};

string Department::getDeleted(){
    return deleted;
}

void Department::setDeleted(string deleted){

    this->deleted=deleted;
}

Worker *Department::getHeadOfDepartment()
{
    return headOfDepartment;
};
void Department::setHeadOfDepartment(Worker *headOfDepartment)
{
    this->headOfDepartment = headOfDepartment;
};
string Department::getType()
{
    return "Department";
};
void Department::hireWorker(Worker *Worker)
{
    employees.push_back(Worker);
};

void Department::fireWorker(int index)
{
    bool notExist = false;
    for (int i = 0; i < employees.size(); i++)
    {
        if (i == index)
        {
            employees.erase(employees.begin() + index);

            notExist = true;
        }
    }

    if (!notExist)
    {
        cout << "Worker doesn't exist!" << endl;
    }
};

void Department::updateWorker(int employee, string newName, string newSurname, double newSalary){
     int counter = 0;
    for (Worker *w: employees) {
        if(employee == counter) {
            w->changeWorker(newName,newSurname,newSalary);
        }
        counter++;
    } 

    

};

void Department::changeHeadOfDepartment(int employee){
    int counter = 0;
    for (Worker *w: employees) {
        if(employee == counter) {
            w->details();
            setHeadOfDepartment(w);
        }
        counter++;
    } 
};

void Department::details(){
     cout<< name <<endl;
     if (headOfDepartment != nullptr) {
    headOfDepartment->details(); }
    for (Worker *r: employees){
      r->details();
    }}

void Department::employeesDetails(){
    int counter = 1;
    for(Worker *w: employees){
        
        
        cout<<counter <<". ";
        w->details();
        counter++;
    }
}




void Department::write(ostream &output){
    
    output<<getType()<<"#"<<name<<"#"<<deleted<<"#";
    
    if(headOfDepartment != nullptr){
    output<<"HeadOfDepartment"<<"#";
    
    headOfDepartment->write(output);
    }else {
        output<<"none";
    }
     output<<endl;
    for (Worker *w: employees){
        
        w->write(output);
        output<<"#"<<name<<endl;
    }
};


Department::~Department(){};