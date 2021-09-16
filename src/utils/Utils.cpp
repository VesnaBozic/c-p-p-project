#include "Utils.hpp"

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
        
        Department *department;
        getline(input, line, '\n');
        Department *deletedDepartments;
        

        if (type == "Company")
        {
            
            vector<string> parts = tokenization(line, "#");
             company = new Company(parts[0], parts[1],parts[2]);
           
        }

        else if (type == "Department")
        {
            vector<string> parts = tokenization(line, "#");
           if (parts[2]== "none"){
               department = new Department(parts[0], parts[1], nullptr);
               company->addDepartment(department);
            }
            else if(parts[4] == "Storekeeper"){
               Worker *storekeeper = new Storekeeper(parts[5], parts[6],stod(parts[7]),parts[8]);  
               department = new Department(parts[0], parts[1], storekeeper);
               company->addDepartment(department);

            }
            else if (parts[4] == "Seller"){
            
               Worker *seller = new Seller(parts[5], parts[6],stod(parts[7]),parts[8], parts[9]);  
               department = new Department(parts[0],parts[1], seller);
               company->addDepartment(department); 
            }
            else if (parts[4]== "Driver") {

              
               Worker *driver = new Driver(parts[5], parts[6],stod(parts[7]),parts[8], parts[9],stoi(parts[10]));  
               department = new Department(parts[0],parts[1], driver);
               company->addDepartment(department);
            }

           
        }
        else if (type == "Worker")
        {
           vector<string> parts = tokenization(line, "#");
               if(parts[0] == "Storekeeper"){
               Worker *storekeeper = new Storekeeper(parts[1], parts[2],stod(parts[3]),parts[4]);  
               department->hireWorker(storekeeper);
              

            }
            else if (parts[0] == "Seller"){
            
               Worker *seller = new Seller(parts[1], parts[2],stod(parts[3]),parts[4], parts[5]);  
               department->hireWorker(seller);
               
            }
            else if (parts[0]== "Driver") {

              
               Worker *driver = new Driver(parts[1], parts[2],stod(parts[3]),parts[4], parts[5],stoi(parts[6]));  
                department->hireWorker(driver);
            }
          
            
        }

       
        
    }
    return input;
}
