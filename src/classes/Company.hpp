#ifndef COMPANY_HPP
#define COMPANY_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Department.hpp"
#include <vector>


class Company
{
public:

private:
    string name;
    string identificationNumber;
    string pib;
    vector <Department*> departments;
public:
    Company();
    Company(string name, string identificationNumber, string pib);
    string getName();
    void setName(string name);
    string getIdentificationNumber();
    void setIndetificationNumber(string identificationNumber);
    string getPib();
    void setPib(string pib);
    

    
    void details();
    void departmentDetails();
    void addDepartment(Department *department);
    void removeDepartment(int index);
    virtual string getType();
    virtual void write(ostream &output);
    bool getDepartment(int index, bool check);
    void changeDepartmantName(int index, string name);
    bool changeHeadofDepart(int index, int employee, bool check);
    void departmentEmployeesDetails(int index);
    void deleteDepartment(int index);
    void updateWorkerData(int index, int employee, string name, string surname, double salary);
    void hireWorker(Worker *Worker, int index);
    void deleteWorker(int index, int employee);
    friend ostream &operator<<(ostream &output, Company *company);
    friend istream &operator>>(istream &input, Company* &company);

    
    virtual ~Company();

};



#endif