#include "CompanyMenu.hpp"


void companyMenu(){
    Company *newCompany;
    ifstream file("data/company.csv");
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
   cout<< "-------------------------------------"<<endl;
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
            system("cls");
            cout<< "Choose what you want to do: "<<endl;
            cout<< "-------------------------------------"<<endl;
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
                    system("cls");
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company name: "<<endl;
                    cin >> companyName;
                    newCompany->setName(companyName);
                    out.open("data/company.csv");
                    out<<newCompany;
                    out.close();
                    companyMenu();
                    break;
                case 2:
                    //update companu identification number
                    system("cls");
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company identification number: "<<endl;
                    cin >> identificationNumber;
                    newCompany->setIndetificationNumber(identificationNumber);
                    out.open("data/company.csv");
                    out<<newCompany;
                    out.close();
                    companyMenu();
                    break;
                case 3:
                    //update pib
                    system("cls");
                    cout << "-------------------------------------"<<endl;
                    cout <<"Please enter new company pib: "<<endl;
                    cin >> pib;
                    newCompany->setPib(pib);
                    out.open("data/company.csv");
                    out<<newCompany;
                    out.close();
                    companyMenu();
                    break;
                case 4:
                    //update all company data
                    system("cls");
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
                    out.open("data/company.csv");
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
                    cout<< "Wrong selection please try again!"<<endl;
                    cout << "-------------------------------------"<<endl;
                    break;
            }}
        break;
    case 2:
            menu();
            break;
    default:
            system("cls");
            cout << "-------------------------------------"<<endl;
            cout<< "Wrong selection please try again!"<<endl;
            cout << "-------------------------------------"<<endl;
            companyMenu();
        break;
    } }

    

}


