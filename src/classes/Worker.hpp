#ifndef WORKER_HPP
#define WORKER_HPP
#include <iostream>
#include <string>
using namespace std;

class Worker
{
protected:
    string name;
    string surname;
    double salary;
    string deleted;

public:
    Worker();
    Worker(string name, string surname, double salary, string deleted);
    string getName();
    void setName(string name);
    string getSurname();
    void setSurname(string surname);
    string getDeleted();
    void setObrisan(string deleted);

    double getSalary();
    void setSalary(double salary);
    virtual string getType() = 0;
    virtual void details() = 0;
    virtual void write(ostream &output);
    
    virtual ~Worker();
};

#endif