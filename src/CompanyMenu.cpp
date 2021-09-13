#include "CompanyMenu.hpp"
#include<limits>

void companyMenu(){
    Company *newCompany;
    ifstream file("company.csv");
    file >> newCompany;
    file.close();
    string companyName;
    string identificationNumber;
    string pib;
    ofstream out;
            
   cout<< "-------------------------------------"<<endl;
   cout<< "Here are company details: "<<endl;
   newCompany->details();
   cout<< "-------------------------------------"<<endl;
   cout<< "Choose what you want to do: "<<endl;
   cout << "1. Update company details"<<endl;
   cout << "2. Go back"<<endl;
   cout << "-------------------------------------"<<endl;
   cout << "Enter 1 or 2"<<endl;
   int choice5;
   cin >> choice5;
   system("cls");
   if (choice5 == 0){
        system("cls");
        cout << "-------------------------------------"<<endl;
        cout<< "Wrong selection please try again!"<<endl;
        cout << "-------------------------------------"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        companyMenu();
        } 
    else {
   switch (choice5)
   {
    case 1:
            cout<< "Choose what you want to do: "<<endl;
            cout << "1. Update company name."<<endl;
            cout << "2. Update company indentification number."<<endl;
            cout << "3. Update company pib."<<endl;
            cout << "4. Update all company data."<<endl;
            cout << "5. Go back."<<endl;
            cout << "-------------------------------------"<<endl;
            cout << "Enter option."<<endl;
            int choice2;
            cin >> choice2;
            system("cls");
            if (choice2 == 0){
                system("cls");
                cout << "-------------------------------------"<<endl;
                cout<< "Wrong selection please try again!"<<endl;
                cout << "-------------------------------------"<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                companyMenu();} 
            else {
                switch (choice2)
                {
                case 1:
                    //update company name
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company name: "<<endl;
                    cin >> companyName;
                    newCompany->setName(companyName);
                    out.open("company.csv");
                    out<<newCompany;
                    out.close();
                    companyMenu();
                    break;
                case 2:
                    //update companu identification number
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company identification number: "<<endl;
                    cin >> identificationNumber;
                    newCompany->setIndetificationNumber(identificationNumber);
                    out.open("company.csv");
                    out<<newCompany;
                    out.close();
                    companyMenu();
                    break;
                case 3:
                    //update pib
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company pib: "<<endl;
                    cin >> pib;
                    newCompany->setPib(pib);
                    out.open("company.csv");
                    out<<newCompany;
                    out.close();
                    companyMenu();
                    break;
                case 4:
                    //update all company data
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company name: "<<endl;
                    cin >> companyName;
                    newCompany->setName(companyName);
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company identification number: "<<endl;
                    cin >> identificationNumber;
                    newCompany->setIndetificationNumber(identificationNumber);
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company pib: "<<endl;
                    cin >> pib;
                    newCompany->setPib(pib);
                    out.open("company.csv");
                    out<<newCompany;
                    out.close();
                    companyMenu();
                    break;
                case 5:
                    system("cls");
                    companyMenu();
                    break;
                
                default:
                    system("cls");
                    cout << "-------------------------------------"<<endl;
                    cout<< "Wrong selection please try again!";
                    cout << "-------------------------------------"<<endl;
                    break;
            }}
        break;
    case 2:
            menu();
            break;
    default:
            cout << "-------------------------------------"<<endl;
            cout<< "Wrong selection please try again!";
            cout << "-------------------------------------"<<endl;
            companyMenu();
        break;
    } }

    

}


void departmentMenu(){
   
    Company *newCompany;
    ifstream file("company.csv");
    file >> newCompany;
    file.close();
    string name;
    string departmentName;
    Department *newDepartment;

    ofstream out;
    system("cls");
    cout<< "-------------------------------------"<<endl;
    cout<<"1. Departments."<<endl;
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
                    newCompany->getDepartment(choice4-1);
                    system("cls");
                    cout<< "Choose what you want to do: "<<endl;
                    cout << "1. Update department name."<<endl;
                    cout << "2. Update head of department."<<endl;
                    cout << "3. See list of employees."<<endl;
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
                            out.open("company.csv");
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
                              
                                newCompany->changeHeadofDepart(choice4-1,choice7-1);
                                out.open("company.csv");
                                out<<newCompany;
                                out.close();
                                departmentMenu();
                                break;
                            }
                            break;
                        case 3:
                            //employees list
                            cout << "-------------------------------------"<<endl;
                            cout<< "Here are all employees in your department: "<<endl;
                            newCompany->departmentEmployeesDetails(choice4-1);
                            employeesMenu(choice7-1);
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
                                    /* napravi metodu u departments kojom ces deleted da promjenis u jes
                                    , a u ucitavanju podataka ukoliko neki objekat ima deleted atribut yes ne
                                    prikazivati ga */
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
                            cout<< "Wrong selection please try again!";
                            cout << "-------------------------------------"<<endl;
                            departmentMenu();
                            break; 
                            } 
                            
                            }
                    break;
                case 2:
                    //adding new department
                    
                     cout << "-------------------------------------"<<endl;
                     cout<<" Enter department name: "<<endl;
                     cin >> departmentName;
                     newDepartment = new Department(departmentName, nullptr);
                     newCompany->addDepartment(newDepartment);
                     out.open("company.csv");
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
                    cout<< "Wrong selection please try again!";
                    cout << "-------------------------------------"<<endl;
                    departmentMenu();
                    break;

                } 
                } 
                
                } 
     
         } 