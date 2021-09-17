// g++ *.cpp src/classes/*.cpp src/interface/*.cpp src/utils/*.cpp
#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include "src/classes/Company.hpp"
#include "src/classes/Department.hpp"
#include "src/classes/Worker.hpp"
#include "src/classes/Driver.hpp"
#include "src/classes/Seller.hpp"
#include "src/classes/Storekeeper.hpp"
#include "src/interface/Menu.hpp"
#include "src/utils/Utils.hpp"





int main(){
    Worker *driver = new Driver("Jovan", "Jovanovic",300.0, 0, "b",2);
    Worker *storekeeper = new Storekeeper("Petar", "Petrovic",2400.0,0);
    Worker *seller = new Seller("Ana", "Anic", 400.0,0, "kasa");
    Worker *storekeeper2 = new Storekeeper("Nikola", "Nikolic",200.0,0);
    Worker *seller2 = new Seller("Igor", "Jovic", 400.0,0, "kasa");
    Worker *storekeeper3 = new Storekeeper("Stefan", "Stefanovic",200.0,0);

    Company *company = new Company("Name", "222","225");
    
    Department *department = new Department("Department1", seller);
    Department *department2 = new Department("Department2", storekeeper2);
    department->hireWorker(storekeeper2);
    department->hireWorker(seller);
    department2->hireWorker(driver);
    department2->hireWorker(seller2);
    department2->hireWorker(storekeeper3);
    // department2->details();
    department2->setHeadOfDepartment(seller2);
    company->addDepartment(department);
    company->addDepartment(department2);
    // company->details();
    // company->departmentDetails();

    ofstream out;
    out.open("data/company.csv");
    out<<company;
    out.close();


    
    menu();

   
    

   
    return 0;
}

