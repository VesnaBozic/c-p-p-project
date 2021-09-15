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
                   cout<< "Here are all employees in your department: "<<endl;
                   newCompany2->departmentEmployeesDetails(index);
                   break;
                case 2:
                    /* adding new employee */
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
                                        newWorker = new Seller(name, surname, salary, "no", cashRegister);
                                        newCompany2->hireWorker(newWorker, index);
                                        out.open("data/company.csv");
                                        out<<newCompany2;
                                        out.close();
                                        employeesMenu(index);
                                        break;
                                case 2:
                                        /* adding storekeeper */
                                        newWorker = new Storekeeper(name, surname, salary, "no");
                                        newCompany2->hireWorker(newWorker, index);
                                        out.open("data/company.csv");
                                        out<<newCompany2;
                                        out.close();
                                        employeesMenu(index);
                                        break;
                                case 3:
                                        /* adding driver */
                                        cout << "-------------------------------------"<<endl;
                                        cout<<"Enter driver's lincence category: "<<endl;
                                        cin >> category;
                                        newWorker = new Driver(name, surname,salary,"no", category, 0);
                                        newCompany2->hireWorker(newWorker,index);
                                        out.open("data/company.csv");
                                        out<<newCompany2;
                                        out.close();
                                        employeesMenu(index);
                                        break;
                                
                                default:
                                        cout << "-------------------------------------"<<endl;
                                        cout<< "Wrong selection please try again!"<<endl;
                                        cout << "-------------------------------------"<<endl;
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