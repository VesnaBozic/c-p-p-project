#include "Seller.hpp"

Seller::Seller() : Worker(){};
Seller::Seller(string name, string surname, double salary, string deleted, string cashRegister) : Worker(name, surname, salary, deleted), cashRegister(cashRegister){};
string Seller::getCashRegister()
{
    return cashRegister;
};
void Seller::setCashRegister(string cashRegister)
{
    this->cashRegister = cashRegister;
};

string Seller::getType()
{
    return "Seller";
};

void Seller::details(){
    Worker::details();
    cout<<", Kasa: "<<cashRegister<<endl;
}
void Seller::write(ostream &output){
    Worker::write(output);
    output<<"#"<<cashRegister;
};

void Seller::changeWorker(string newName, string newSurname, double newSalary){
    
    Worker::changeWorker(newName, newSurname,newSalary);
 
};

Seller::~Seller(){};