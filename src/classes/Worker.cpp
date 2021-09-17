#include "Worker.hpp"

Worker::Worker(){};
Worker::Worker::Worker(string name, string surname, double salary, int holidayDays =0) : name(name), surname(surname), salary(salary), holidayDays(holidayDays){};
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

int Worker::getHolidayDays(){
    return holidayDays;
}

void Worker::setHolidayDays(int holidayDays){
    this->holidayDays = holidayDays;
}

string Worker::getType()
{
    return "Worker";
};

void Worker::details(){
    cout<< name <<" "<<surname <<", Plata: "<<salary<<", Pozicija:"<<getType();
}

void Worker::write(ostream &output){
    output<<"Worker"<<"#"<<getType()<<"#"<<name<<"#"<<surname<<"#"<<salary<<"#"<<holidayDays;
};

void Worker::changeWorker(string newName, string newSurname, double newSalary){
        setName(newName);
        setSurname(newSurname);
        setSalary(newSalary);
}




Worker::~Worker(){};