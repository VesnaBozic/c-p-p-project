#include "Worker.hpp"

Worker::Worker(){};
Worker::Worker::Worker(string name, string surname, double salary, Worker *superior = nullptr, string deleted ="ne") : name(name), surname(surname), salary(salary), superior(superior), deleted(deleted){};
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
Worker *Worker::getSuperior()
{
    return superior;
};
void Worker::setSuperior(Worker *superior)
{
    this->superior =superior;
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

void Worker::write(ostream &output){
    output<<getType()<<"#"<<name<<"#"<<surname<<"#"<<salary<<"#"<<superior<<"#"<<deleted<<"#";
};


Worker::~Worker(){};