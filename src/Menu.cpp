#include "Menu.hpp"
#include<limits>



void menu(){
    system("cls");
    cout << "-------------------------------------"<<endl;
    cout << "*Welcome to employees menagement system*"<<endl;
    cout << "-------------------------------------"<<endl;
    cout << "-Choose what you want to do:"<<endl;
    cout << "-------------------------------------"<<endl;
    cout << "1. See Company details."<<endl;
    cout << "2. See list of departments."<<endl;
    cout << "3. Exit application."<<endl;
    cout << "-------------------------------------"<<endl;
    cout << "Enter your choice: "<<endl;
    cout << "-------------------------------------"<<endl;
    int choice;
    
    cin >> choice;
    system("cls");
    
  
    if (choice == 0){
        cout << "-------------------------------------"<<endl;
        cout<< "Wrong selection please try again!"<<endl;
        cout << "-------------------------------------"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        menu();
        } 
    else {
        switch (choice)
        {
        case 1:
            system("cls");
            companyMenu();
            break;
        case 2:
            system("cls");
            departmentMenu();
            break;
        case 3:
            system("cls");
            cout << "-------------------------------------"<<endl;
            cout << "You left the application!"<<endl;
            cout << "-------------------------------------"<<endl;
            return;
        
        default:
            system("cls");
            cout << "-------------------------------------"<<endl;
            cout<< "Wrong selection please try again!"<<endl;
            cout << "-------------------------------------"<<endl;
            menu();
    }}


    

    
    
}