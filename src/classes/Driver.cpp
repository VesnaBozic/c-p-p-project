#include "Driver.hpp"

Driver::Driver() : Worker(){};
Driver::Driver(string name, string surname, double salary, string deleted, string category, int foulNumber) : Worker(name, surname, foulNumber, deleted), category(category), foulNumber(foulNumber){};

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

void Driver::details(){
    Worker::details();
    cout<<" ,Licence: "<<category<<", Number of traffic violations:  "<<foulNumber<<endl;
}

void Driver::write(ostream &output){
    Worker::write(output);
    output<<"#"<<category<<"#"<<foulNumber;
    
};
void Driver::changeWorker(string newName, string newSurname, double newSalary){
    Worker::changeWorker(newName, newSurname,newSalary);

};
Driver::~Driver(){};