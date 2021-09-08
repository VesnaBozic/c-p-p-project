#include "Seller.hpp"

Seller::Seller() : Worker(){};
Seller::Seller(string name, string surname, double salary, Worker *superior,string deleted, string cashRegister) : Worker(name, surname, salary, superior, deleted), cashRegister(cashRegister){};
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
    Worker::write(output);
    output<<cashRegister<<endl;
};

Seller::~Seller(){};