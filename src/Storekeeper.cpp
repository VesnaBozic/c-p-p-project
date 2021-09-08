#include "Storekeeper.hpp"

Storekeeper::Storekeeper() : Worker(){};
Storekeeper::Storekeeper(string name, string surname, double salary, Worker *superior, string deleted) : Worker(name, surname, salary, superior, deleted){};


string Storekeeper::getType()
{
    return "Storekeeper";
};

void Storekeeper::write(ostream &output)
{
    Worker::write(output);
    
};

Storekeeper::~Storekeeper(){};