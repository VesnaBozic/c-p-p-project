#include "Storekeeper.hpp"

Storekeeper::Storekeeper() : Worker(){};
Storekeeper::Storekeeper(string name, string surname, double salary, string deleted) : Worker(name, surname, salary, deleted){};


string Storekeeper::getType()
{
    return "Storekeeper";
};

void Storekeeper::write(ostream &output)
{
    Worker::write(output);
    
};

Storekeeper::~Storekeeper(){};