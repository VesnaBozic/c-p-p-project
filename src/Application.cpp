#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include "Company.hpp"
#include "Department.hpp"
#include "Worker.hpp"
#include "Driver.hpp"
#include "Seller.hpp"
#include "Storekeeper.hpp"


ostream &operator<<(ostream &output, Company *company)
{
    company->write(output);

    return output;
};



int main(){
    Worker *driver = new Driver("Jovan", "Jovanovic",400.0, nullptr, "no", "b",2);
    Worker *storekeeper = new Storekeeper("Ime", "Prezime", 400.0, nullptr,"ne");
    Worker *seller = new Seller("Ime1", "Prezime1", 400.0, nullptr,"ne", "kasa");

    Company *company = new Company("Name", "222","225","no");
    Department *department = new Department("Department", storekeeper,"ne");
    department->hireWorkera(storekeeper);
    department->hireWorkera(seller);
    department->hireWorkera(driver);
    department->fireWorkera(2);
    company->addDepartment(department);

    ofstream out;
    out.open("company.csv");
    out<<company;
    out.close();
   
    return 0;
}

