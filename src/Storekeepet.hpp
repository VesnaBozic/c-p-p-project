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
    Storekeeper(string name, string surname, double salary, Worker *superior, string deleted);

   
    virtual string getType();
    
    virtual void write(ostream &output);
    
    virtual ~Storekeeper();
};

#endif