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
void Seller::write(ostream &output){
   
    output<<getType()<<"#"<<name<<"#"<<surname<<"#"<<salary<<"#"<<deleted<<"#"<<cashRegister<<endl;
};

Seller::~Seller(){};