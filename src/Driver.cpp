#include "Driver.hpp"

Driver::Driver() : Worker(){};
Driver::Driver(string name, string surname, double salary, Worker *superior, string deleted, string category, int foulNumber) : Worker(name, surname, foulNumber, superior, deleted), category(category), foulNumber(foulNumber){};

string Driver::getCategory()
{
    return category;
};
void Driver::setCategory(string category)
{
    this->category = category;
};
int Driver::getFoulNumber()
{
    return foulNumber;
};
void Driver::setFoulNumber(int foulNumber)
{
    this->foulNumber = foulNumber;
};
string Driver::getType()
{
    return "Driver";
};
void Driver::write(ostream &output){
    Worker::write(output);
    output<<category<<"#"<<foulNumber<<endl;
};

Driver::~Driver(){};