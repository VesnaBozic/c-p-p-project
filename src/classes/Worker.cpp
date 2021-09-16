#include "Worker.hpp"

Worker::Worker(){};
Worker::Worker::Worker(string name, string surname, double salary, string deleted ="no") : name(name), surname(surname), salary(salary), deleted(deleted){};
string Worker::getName()
{
    return name;
};
void Worker::setName(string name)
{
    this->name = name;
};
string Worker::getSurname()
{
    return surname;
};
void Worker::setSurname(string surname)
{
    this->surname = surname;
};

double Worker::getSalary()
{
    return salary;
};
void Worker::setSalary(double salary)
{
    this->salary = salary;
};

string Worker::getDeleted(){
    return deleted;
}

void Worker::setObrisan(string deleted){
    this->deleted = deleted;
}

string Worker::getType()
{
    return "Worker";
};

void Worker::details(){
    cout<< name <<" "<<surname <<", Plata: "<<salary<<", Pozicija:"<<getType();
}

void Worker::write(ostream &output){
    output<<"Worker"<<"#"<<getType()<<"#"<<name<<"#"<<surname<<"#"<<salary<<"#"<<deleted;
};

void Worker::changeWorker(string newName, string newSurname, double newSalary){
        setName(newName);
        setSurname(newSurname);
        setSalary(newSalary);
}




Worker::~Worker(){};