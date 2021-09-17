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
    int holidayDays;

public:
    Worker();
    Worker(string name, string surname, double salary, int holidayDays);
    string getName();
    void setName(string name);
    string getSurname();
    void setSurname(string surname);
    int getHolidayDays();
    void setHolidayDays(int holidayDays);

    double getSalary();
    void setSalary(double salary);
    virtual string getType() = 0;
    virtual void details() = 0;
    virtual void write(ostream &output);
    virtual void changeWorker(string newNmae, string newSurname, double newSalary);
    
    virtual ~Worker();
};

#endif