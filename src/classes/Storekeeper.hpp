#ifndef STOREKEEPER_HPP
#define STOREKEEPER_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Worker.hpp"

class Storekeeper : public Worker
{
   
public:
    Storekeeper();
    Storekeeper(string name, string surname, double salary, string deleted);

   
    virtual string getType();
    virtual void details();
    
    virtual void write(ostream &output);
    virtual void changeWorker(string newName, string newSurname, double newSalary);
    virtual ~Storekeeper();
};

#endif