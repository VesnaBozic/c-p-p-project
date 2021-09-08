#ifndef VOZAC_HPP
#define VOZAC_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Worker.hpp"

class Driver:public Worker
{
private:
   string category;
   int foulNumber;

public:
    Driver();
    Driver(string name, string surname, double salary, string deleted, string category, int foulNumber);
    string getCategory();
    void setCategory(string category);
    int getFoulNumber();
    void setFoulNumber(int foulNumber);
    virtual string getType();
    virtual void write(ostream &output);
   
    virtual ~Driver();
};

#endif