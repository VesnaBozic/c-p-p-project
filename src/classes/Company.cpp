#include "Company.hpp"

Company::Company(){};
Company::Company(string name, string identificationNumber, string pib) : name(name), identificationNumber(identificationNumber), pib(pib){};
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
    output<<getType()<<"#"<<name<<"#"<<identificationNumber<<"#"<<pib<<endl;
    for(Department *d : departments){
        d->write(output);
    }
};

void Company::details(){
    cout<< "-------------------------------------"<<endl;
    cout<<"Company name: "<<name<<endl;
    cout<<"Identification number: "<<identificationNumber<<endl;
    cout<<"Pib :"<<pib<<endl;
    cout<< "-------------------------------------"<<endl;
}

void Company::departmentDetails(){
    int counter = 1;
    for(Department *d: departments){
     
        

        cout<<counter<<". "<<d->getName()<<endl;
        counter++;}
    
    
}

void Company::departmentEmployeesDetails(int index){
      int counter = 0;
     
      for(Department *d: departments){
          
          if(index==counter) {
            
            d->employeesDetails(); }
           counter++; 
    }
    
}

bool Company::getDepartment(int index, bool check){
     int counter = 0;
   
      for(Department *d: departments){
        if(index == counter) {
            cout<<"Department name: "<<d->getName()<<endl;
            check = true;
           
        }
        counter++;
    }
  return check;
    
}

void Company::changeDepartmantName(int index, string name){
    int counter = 0;
      for(Department *d: departments){
        if(index == counter) {
            d->setName(name);
           
        }
        counter++;
    }

}

void Company::deleteDepartment(int index){
   bool notExist = false;
    for (int i = 0; i < departments.size(); i++)
    {
        if (i == index)
        {
            departments.erase(departments.begin() + index);

            notExist = true;
        }
    }

    if (!notExist)
    {
        cout << "Worker doesn't exist!" << endl;
    }
}

bool Company::changeHeadofDepart(int index, int employee, bool check){
    int counter = 0;
      for(Department *d: departments){
        if(index == counter) {
            d->changeHeadOfDepartment(employee);
            check = true;
           
        }
        counter++;
    }
    return check;
}



Company::~Company(){};