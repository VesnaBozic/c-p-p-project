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

vector<string> tokenization(string &line, string separator)
{
    vector<string> parts;
    int position;
    while (true)
    {
        position = line.find(separator);
        if (position == -1)
        {
            break;
        }
        string part = line.substr(0, position);
        parts.push_back(part);
        line = line.substr(position + 1, line.length());
    }
    parts.push_back(line);
    return parts;
}
istream &operator>>(istream &input, Company* &company)
{

    string type;
    while (!input.eof())
    {
        string line;
       

        getline(input, type, '#');
        

        getline(input, line, '\n');
        

        if (type == "Company")
        {
            
            vector<string> parts = tokenization(line, "#");
             company = new Company(parts[0], parts[1],parts[2]);
           
        }

        // else if (type == "Department")
        // {
        //     vector<string> parts = tokenization(line, "#");
        //     if (parts[1].length() > 2) {
        //         if (parts[1] == "Storekeeper") {
        //         Worker *worker = new Storekeeper(parts[2], parts[3], parts)
        //     Department *department = new Department(parts[0], parts[1], parts[2]) } }
        //     Worker(string name, string surname, double visinaPlate, Radnik *nadredjeni,string obrisan);
        //     vector<string> parts = tokenizacija(line, "#");
        //     Radnik *r =
        //     Odeljenje(string naziv, Radnik *sefOdeljenja, string obrisan)
        //     novoOdeljenje = new Odeljenje(parts[0],Radnik r* = new Radnik(parts[1], parts[2],stod(parts[3])));
           
        // }
    //     else if (type == "Storekeeper")
    //     {

    //         vector<string> parts = tokenizacija(line, ";");

    //         noviProizvod = new VideoIgra(stoi(delovi[0]), delovi[1], delovi[2],delovi[3], stod(delovi[4]),delovi[5],delovi[6]);
            
    //     }

    //     prodavnica->dodajSoftverskiProizvod(noviProizvod);
        
    }
    return input;
}



int main(){
    Worker *driver = new Driver("Jovan", "Jovanovic",300.0, "no", "b",2);
    Worker *storekeeper = new Storekeeper("Ime", "Prezime",2400.0,"no");
    Worker *seller = new Seller("Ime1", "Prezime1", 400.0,"no", "kasa");
    Worker *storekeeper2 = new Storekeeper("Ime2", "Prezime2",200.0,"no");

    Company *company = new Company("Name", "222","225");
    
    Department *department = new Department("Department", storekeeper);
    department->hireWorkera(storekeeper2);
    department->hireWorkera(seller);
    department->hireWorkera(driver);
    department->fireWorkera(2);
    company->addDepartment(department);

    ofstream out;
    out.open("company.csv");
    out<<company;
    out.close();

   
    
    Company *newCompany;
    ifstream file("company.csv");
    file >> newCompany;
    file.close();

    // ofstream out2;
    // out2.open("company2.csv");
    // out2<<newCompany;
    // out2.close();
   
    return 0;
}

