// g++ *.cpp src/*.cpp
#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include "src/Company.hpp"
#include "src/Department.hpp"
#include "src/Worker.hpp"
#include "src/Driver.hpp"
#include "src/Seller.hpp"
#include "src/Storekeeper.hpp"
#include "src/Menu.hpp"
#include "src/Utils.hpp"





int main(){
    // Worker *driver = new Driver("Jovan", "Jovanovic",300.0, "no", "b",2);
    // Worker *storekeeper = new Storekeeper("Ime", "Prezime",2400.0,"no");
    // Worker *seller = new Seller("Ime1", "Prezime1", 400.0,"no", "kasa");
    // Worker *storekeeper2 = new Storekeeper("Ime2", "Prezime2",200.0,"no");
    // Worker *seller2 = new Seller("Ime1s", "Prezime1s", 400.0,"no", "kasa");
    // Worker *storekeeper3 = new Storekeeper("Ime2s", "Prezime2s",200.0,"no");

    // Company *company = new Company("Name", "222","225");
    
    // Department *department = new Department("Department1", seller);
    // Department *department2 = new Department("Department2", storekeeper2);
    // department->hireWorkera(storekeeper2);
    // department->hireWorkera(seller);
    // department2->hireWorkera(driver);
    // department2->hireWorkera(seller2);
    // department2->hireWorkera(storekeeper3);
    // // department2->details();
    // department2->setHeadOfDepartment(seller2);
    // company->addDepartment(department);
    // company->addDepartment(department2);
    // company->details();
    // company->departmentDetails();
    
    // ofstream out;
    // out.open("company.csv");
    // out<<company;
    // out.close();


    
    menu();

   
    
    Company *newCompany;
    ifstream file("company.csv");
    file >> newCompany;
    file.close();
    // newCompany->details();
    ofstream out2;
    out2.open("company2.csv");
    out2<<newCompany;
    out2.close();
   
    return 0;
}

