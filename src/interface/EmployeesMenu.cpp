#include "EmployeesMenu.hpp"



void employeesMenu(int index){
   
        Company *newCompany2;
        ifstream file2("data/company.csv");
        file2 >> newCompany2;
        file2.close();
        ofstream out;  
        Worker *newWorker;
        string name;
        string surname;
        double salary;
        string cashRegister;
        string category;
        int foulNumber;
        string updateName;
        string updateSurname;
        double updateSalary;
        
        
        
        cout<< "-------------------------------------"<<endl;
        cout<<"1. See list of employees."<<endl;
        cout<<"2. Add new employee."<<endl;
        cout<<"3. Go back."<<endl;
        cout<< "-------------------------------------"<<endl;
        cout<< "Please choose option: "<<endl;
        cout << "-------------------------------------"<<endl;
   

        int choice;
        cin >> choice;
        if (choice == 0){
                system("cls");
                cout << "-------------------------------------"<<endl;
                cout<< "Wrong selection please try again!"<<endl;
                cout << "-------------------------------------"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                departmentMenu();}
        else{
            switch (choice)
            {
                case 1:
                    /* list of employees, here add updating and deleting */
                   system("cls");
                   cout<< "Here are all employees in your department: "<<endl;
                   newCompany2->departmentEmployeesDetails(index);
                   cout<< "Please choose employee: "<<endl;
                   int choice4;
                   cin >> choice4;
                   if (choice4 == 0){
                        system("cls");
                        cout << "-------------------------------------"<<endl;
                        cout<< "Wrong selection please try again!"<<endl;
                        cout << "-------------------------------------"<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        employeesMenu(index);}
                else {

                    cout<< "Choose what you want to do: "<<endl;
                    cout << "1. Update employee data."<<endl;
                    cout << "2. Delete employee."<<endl;
                    cout << "3. Go back."<<endl;
                    cout << "-------------------------------------"<<endl;
                    cout << "Enter option."<<endl;
                    int choice5;
                    cin >> choice5;
                    if (choice5 == 0){
                        system("cls");
                        cout << "-------------------------------------"<<endl;
                        cout<< "Wrong selection please try again!"<<endl;
                        cout << "-------------------------------------"<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        employeesMenu(index);
                        } 
                    else {
                            switch (choice5)
                            {
                            case 1:
                            // update employee data
                                  system("cls");
                                  cout << "-------------------------------------"<<endl;
                                  cout<<"Enter name: "<<endl;
                                  cin >> updateName;
                                  cout << "-------------------------------------"<<endl;
                                  cout<<"Enter surname "<<endl;
                                  cin >> updateSurname;
                                  cout << "-------------------------------------"<<endl;
                                  cout<<"Enter salary: "<<endl;
                                  cin >> updateSalary;
                                  if (updateSalary == 0){
                                        system("cls");
                                        cout << "-------------------------------------"<<endl;
                                        cout<< "Wrong selection please try again!"<<endl;
                                        cout << "-------------------------------------"<<endl;
                                        cin.clear();
                                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                        employeesMenu(index);
                                        } 
                                  else {
                                          newCompany2->updateWorkerData(index, choice4-1, updateName,updateSurname,updateSalary);
                                          out.open("data/company.csv");
                                          out<<newCompany2;
                                          out.close();
                                          system("cls");
                                          employeesMenu(index);
                                  }
                                  
                                    
                                    break;
                            case 2:
                                    /* delete employee*/
                                    cout << "-------------------------------------"<<endl;
                            cout << "Are you sure that you want to delete this employee ?"<<endl;
                            cout<<"1. Yes"<<endl;
                            cout<<"2. Go back"<<endl;
                            int choice8;
                            cin >> choice8;
                            if (choice8 == 0){
                                system("cls");
                                cout << "-------------------------------------"<<endl;
                                cout<< "Wrong selection please try again!"<<endl;
                                cout << "-------------------------------------"<<endl;
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                employeesMenu(index);
                                }
                                 else {
                                switch (choice8)
                                {
                                case 1:
                                    newCompany2->deleteWorker(index,choice4-1);
                                    out.open("data/company.csv");
                                    out<<newCompany2; 
                                    out.close();
                                    employeesMenu(index);
                                    
                                    break;
                                case 2:
                                    employeesMenu(index);
                                    break;
                                
                                default:
                                    cout << "-------------------------------------"<<endl;
                                    cout<< "Wrong selection please try again!"<<endl;
                                    cout << "-------------------------------------"<<endl;
                                    employeesMenu(index);
                                    break;
                                }
                            } 
                                    break;
                            case 3:
                                    system("cls");
                                    employeesMenu(index);
                                    break;
                            
                            default:
                                system("cls");
                                cout << "-------------------------------------"<<endl;
                                cout<< "Wrong selection please try again!"<<endl;
                                cout << "-------------------------------------"<<endl;
                                employeesMenu(index);
                                break;
                            }
                    }

                }
                   break;
                case 2:
                    /* adding new employee */
                    system("cls");
                    cout << "-------------------------------------"<<endl;
                    cout<<" Enter employee's name: "<<endl;
                    cin >> name;
                    cout << "-------------------------------------"<<endl;
                    cout<<" Enter employee's surname: "<<endl;
                    cin >> surname;
                    cout << "-------------------------------------"<<endl;
                    cout<<" Enter employee's salary:  "<<endl;
                    cin >> salary;
                    if (salary == 0){
                        system("cls");
                        cout << "-------------------------------------"<<endl;
                        cout<< "Wrong selection please try again!"<<endl;
                        cout << "-------------------------------------"<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        employeesMenu(index);}
                   else {
                        
                        cout << "-------------------------------------"<<endl;
                        cout << "Choose type of employee: "<<endl;
                        cout << "-------------------------------------"<<endl;
                        cout << "1. Seller."<<endl;
                        cout << "2. Storekeeper."<<endl;
                        cout << "3. Driver."<<endl;
                        cout << "-------------------------------------"<<endl;
                        cout << "Enter the number of type: "<<endl;
                        int choice2;
                        cin >> choice2;
                        if (salary == 0){
                        system("cls");
                        cout << "-------------------------------------"<<endl;
                        cout<< "Wrong selection please try again!"<<endl;
                        cout << "-------------------------------------"<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        employeesMenu(index);}
                        else {
                                switch (choice2)
                                {
                                case 1:
                                        /* adding seller */
                                        cout << "-------------------------------------"<<endl;
                                        cout<<"Enter cash register for this seller: "<<endl;
                                        cin >> cashRegister;
                                        newWorker = new Seller(name, surname, salary, 0, cashRegister);
                                        newCompany2->hireWorker(newWorker, index);
                                        out.open("data/company.csv");
                                        out<<newCompany2;
                                        out.close();
                                        system("cls");
                                        employeesMenu(index);
                                        break;
                                case 2:
                                        /* adding storekeeper */
                                        newWorker = new Storekeeper(name, surname, salary, 0);
                                        newCompany2->hireWorker(newWorker, index);
                                        out.open("data/company.csv");
                                        out<<newCompany2;
                                        out.close();
                                        system("cls");
                                        employeesMenu(index);
                                        break;
                                case 3:
                                        /* adding driver */
                                        cout << "-------------------------------------"<<endl;
                                        cout<<"Enter driver's lincence category: "<<endl;
                                        cin >> category;
                                        newWorker = new Driver(name, surname,salary,0, category, 0);
                                        newCompany2->hireWorker(newWorker,index);
                                        out.open("data/company.csv");
                                        out<<newCompany2;
                                        out.close();
                                        system("cls");
                                        employeesMenu(index);
                                        break;
                                
                                default:
                                        system("cls");
                                        cout << "-------------------------------------"<<endl;
                                        cout<< "Wrong selection please try again!"<<endl;
                                        cout << "-------------------------------------"<<endl;
                                        employeesMenu(index);
                                        break;
                                } }}
                    
                    break;
                case 3:
                    departmentMenu();
                    return;
                    break;
            
            default:
                    cout << "-------------------------------------"<<endl;
                    cout<< "Wrong selection please try again!"<<endl;
                    cout << "-------------------------------------"<<endl;
                    employeesMenu(index);
                    break;
            }    
        }


}