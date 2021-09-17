#ifndef SELLER_HPP
#define SELLER_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Worker.hpp"

class Seller:public Worker
{
private:
   string cashRegister;
   

public:
    Seller();
    Seller(string name, string surname, double salary, int holidayDays, string cashRegister);
    string getCashRegister();
    void setCashRegister(string cashRegister);

    virtual string getType();
    virtual void write(ostream &output);
    virtual void details();
    virtual void changeWorker(string newName, string newSurname, double newSalary);
    virtual ~Seller();
};

#endif