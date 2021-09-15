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
    Worker *driver = new Driver("Jovan", "Jovanovic",300.0, "no", "b",2);
    Worker *storekeeper = new Storekeeper("Petar", "Petrovic",2400.0,"no");
    Worker *seller = new Seller("Ana", "Anic", 400.0,"no", "kasa");
    Worker *storekeeper2 = new Storekeeper("Nikola", "Nikolic",200.0,"no");
    Worker *seller2 = new Seller("Igor", "Jovic", 400.0,"no", "kasa");
    Worker *storekeeper3 = new Storekeeper("Stefan", "Stefanovic",200.0,"no");

    Company *company = new Company("Name", "222","225");
    
    Department *department = new Department("Department1","no", seller);
    Department *department2 = new Department("Department2","no", storekeeper2);
    department->hireWorkera(storekeeper2);
    department->hireWorkera(seller);
    department2->hireWorkera(driver);
    department2->hireWorkera(seller2);
    department2->hireWorkera(storekeeper3);
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

   
    
    // Company *newCompany;
    // ifstream file("data/company.csv");
    // file >> newCompany;
    // file.close();
    // // newCompany->details();
    // ofstream out2;
    // out2.open("data/company2.csv");
    // out2<<newCompany;
    // out2.close();
   
    return 0;
}

