#include "DepartmentMenu.hpp"


void departmentMenu(){
   
    Company *newCompany;
    ifstream file("data/company.csv");
    file >> newCompany;
    file.close();
    string name;
    string departmentName;
    Department *newDepartment;

    ofstream out;
    
    cout<< "-------------------------------------"<<endl;
    cout<<"1. See list of departments."<<endl;
    cout<<"2. Add new department."<<endl;
    cout<<"3. Go back."<<endl;
    cout<< "-------------------------------------"<<endl;
    cout<< "Please choose option: "<<endl;
    int choice3;
    
    cin >> choice3;
    if (choice3 == 0){
        system("cls");
        cout << "-------------------------------------"<<endl;
        cout<< "Wrong selection please try again!"<<endl;
        cout << "-------------------------------------"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        departmentMenu();} 
    else {
        switch (choice3)
        {
            case 1:
                //list od all departments
                system("cls");
                cout<< "Here are the list of all departments of the company: "<<endl;
                newCompany->departmentDetails();
                cout<< "-------------------------------------"<<endl;
                cout<< "Please choose department: "<<endl;
                
                int choice4;
                cin >> choice4;
                if (choice4 == 0){
                    system("cls");
                    cout << "-------------------------------------"<<endl;
                    cout<< "Wrong selection please try again!"<<endl;
                    cout << "-------------------------------------"<<endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');} 
                else {
                    if(newCompany->getDepartment(choice4-1, false)==true){
                    system("cls");
                    
                    cout<< "Choose what you want to do: "<<endl;
                    cout << "1. Update department name."<<endl;
                    cout << "2. Update head of department."<<endl;
                    cout << "3. Employees."<<endl;
                    cout << "4. Delete department."<<endl;
                    cout << "5. Go back."<<endl;
                    cout << "-------------------------------------"<<endl;
                    cout << "Enter option."<<endl;
                    int choice3;
                    cin >> choice3;
                    if (choice3 == 0){
                        system("cls");
                        cout << "-------------------------------------"<<endl;
                        cout<< "Wrong selection please try again!"<<endl;
                        cout << "-------------------------------------"<<endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        departmentMenu();
                        } 
                    else {
                        switch (choice3)
                        {
                        case 1:
                            //update company name
                            system("cls");
                            cout << "-------------------------------------"<<endl;
                            cout << "Enter new department name: "<<endl;
                            cin >> name;
                            newCompany->changeDepartmantName(choice4-1,name);
                            out.open("data/company.csv");
                            out<<newCompany;
                            out.close();
                            departmentMenu();
                            break;
                        case 2:
                            // update head of department
                            system("cls");
                            cout << "-------------------------------------"<<endl;
                            cout << "Choose new head of department: "<<endl;
                            cout << "-------------------------------------"<<endl;
                            newCompany->departmentEmployeesDetails(choice4-1);
                            cout << "Enter number: "<<endl;
                            int choice7;
                            cin >> choice7;
                            if (choice7 == 0){
                                system("cls");
                                cout << "-------------------------------------"<<endl;
                                cout<< "Wrong selection please try again!"<<endl;
                                cout << "-------------------------------------"<<endl;
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                } 
                            else {
                              
                                if(newCompany->changeHeadofDepart(choice4-1,choice7-1, false)==true){
                                out.open("data/company.csv");
                                out<<newCompany; 
                                out.close();
                                departmentMenu();
                                break;}
                                else {
                                    cout << "-------------------------------------"<<endl;
                                    cout<< "Wrong selection please try again!"<<endl;
                                    cout << "-------------------------------------"<<endl;  
                                    departmentMenu();
                                }
                            }
                            break;
                        case 3:
                            //employees
                            
                            employeesMenu(choice4-1);
                            break;
                        case 4:
                            //deleting department
                            cout << "-------------------------------------"<<endl;
                            cout << "Are you sure that you want to delete this department ?"<<endl;
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
                                } 
                            else {
                                switch (choice8)
                                {
                                case 1:
                                    newCompany->deleteDepartment(choice4-1);
                                    out.open("data/company.csv");
                                    out<<newCompany; 
                                    out.close();
                                    departmentMenu();
                                    
                                    break;
                                case 2:
                                    departmentMenu();
                                    break;
                                
                                default:
                                    cout << "-------------------------------------"<<endl;
                                    cout<< "Wrong selection please try again!"<<endl;
                                    cout << "-------------------------------------"<<endl;
                                    break;
                                }
                            }

                            break;
                        case 5:
                            departmentMenu();
                            break;
            
                        default:
                            system("cls");
                            cout << "-------------------------------------"<<endl;
                            cout<< "Wrong selection please try again!"<<endl;
                            cout << "-------------------------------------"<<endl;
                            departmentMenu();
                            break; 
                            } 
                            
                            }
                    break; }
                    else {
                        system("cls");
                        cout << "-------------------------------------"<<endl;
                        cout<< "Wrong selection please try again!"<<endl;
                        cout << "-------------------------------------"<<endl;
                        departmentMenu();
                        break; 

                    }
                case 2:
                    //adding new department
                    
                     cout << "-------------------------------------"<<endl;
                     cout<<" Enter department name: "<<endl;
                     cin >> departmentName;
                     newDepartment = new Department(departmentName, nullptr);
                     newCompany->addDepartment(newDepartment);
                     out.open("data/company.csv");
                     out<<newCompany;
                     out.close();
                     departmentMenu();
                     
                    break;
                case 3:
                    menu();
                    break;
                default:
                    system("cls");
                    cout << "-------------------------------------"<<endl;
                    cout<< "Wrong selection please try again!"<<endl;
                    cout << "-------------------------------------"<<endl;
                    departmentMenu();
                    break;

                } 
                } 
                
                } 
     
         } 