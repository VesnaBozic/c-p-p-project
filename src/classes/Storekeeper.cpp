#include "Storekeeper.hpp"

Storekeeper::Storekeeper() : Worker(){};
Storekeeper::Storekeeper(string name, string surname, double salary, string deleted) : Worker(name, surname, salary, deleted){};


string Storekeeper::getType()
{
    return "Storekeeper";
};
void Storekeeper::details(){
    Worker::details();
    cout<<endl;

}
void Storekeeper::write(ostream &output)
{
    Worker::write(output);
    

    
};

void Storekeeper::changeWorker(string newName, string newSurname, double newSalary){
   
      Worker::changeWorker(newName, newSurname, newSalary);
}

Storekeeper::~Storekeeper(){};