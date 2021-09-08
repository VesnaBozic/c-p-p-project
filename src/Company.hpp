#ifndef COMPANY_HPP
#define COMPANY_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Department.hpp"
#include <vector>


class Company
{
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
    void addDepartment(Department *department);
    void removeDepartment(int index);
    virtual string getType();
    virtual void write(ostream &output);

    friend ostream &operator<<(ostream &output, Company *company);
    friend istream &operator>>(istream &input, Company* &company);

    
    virtual ~Company();

};



#endif