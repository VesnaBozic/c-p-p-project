#include "Company.hpp"

Company::Company(){};
Company::Company(string name, string identificationNumber, string pib, string deleted="ne") : name(name), identificationNumber(identificationNumber), pib(pib), deleted(deleted){};
string Company::getName()
{
    return name;
};
void Company::setName(string name)
{
    this->name = name;
};
string Company::getIdentificationNumber()
{
    return identificationNumber;
};
void Company::setIndetificationNumber(string identificationNumber)
{
    this->identificationNumber = identificationNumber;
};
string Company::getPib()
{
    return pib;
};
void Company::setPib(string pib)
{
    this->pib = pib;
};
string Company::getDeleted(){
    return deleted;
}

void Company::setDeleted(string deleted){
    this->deleted=deleted;
}

void Company::addDepartment(Department *Department)
{
    departments.push_back(Department);
};
void Company::removeDepartment(int index)
{
    bool notExist = false;
    for (int i = 0; i < departments.size(); i++)
    {
        if (i == index - 1)
        {
            departments.erase(departments.begin() + index - 1);

            notExist = true;
        }
    }

    if (!notExist)
    {
        cout << "Worker doensn't exist!" << endl;
    }
};
string Company::getType()
{
    return "Company";
};
void Company::write(ostream &output){
    output<<getType()<<"#"<<name<<"#"<<identificationNumber<<"#"<<pib<<"#"<<deleted<<endl;
    for(Department *d : departments){
        d->write(output);
    }
};

void Company::details(){
    cout<<getType()<<"#"<<name<<"#"<<identificationNumber<<"#"<<pib<<"#"<<deleted<<endl;
}

Company::~Company(){};