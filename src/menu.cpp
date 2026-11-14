// menu.cpp
#include <iostream>
using namespace std;
#include <escapeCharBehav.h>
#include <bits/stdc++.h>

#include "colors.h"
#include "terminal.h"
#include "employee.h"
void displayMenu(int x, int y, int textColor, int backgroundColor,
                 int selectedOption) {
  // clearScreen();
  setColors(textColor, backgroundColor);
  clearScreen();
  setCursorPosition(x, y);
  int spacing = 3;
  if (selectedOption == 1) {
    cout << "=========================";
    setCursorPosition(x, y + spacing);
    cout << "Main Menu";
    setCursorPosition(x, y + spacing * 2);
    cout << "=========================";
    setCursorPosition(x, y + spacing * 3);
    cout << "\033[30;43m";
    cout << "New Employee ";
    setColors(textColor, backgroundColor);
    // cout << "\033[0m";
    setCursorPosition(x, y + spacing * 4);
    cout << "Display Employees";
    setCursorPosition(x, y + spacing * 5);
    cout << "Exit";
  } else if (selectedOption == 2) {
    cout << "=========================";
    setCursorPosition(x, y + spacing);
    cout << "Main Menu";
    setCursorPosition(x, y + spacing * 2);
    cout << "=========================";
    setCursorPosition(x, y + spacing * 3);
    cout << "New Employee ";
    // cout << "\033[0m";
    setCursorPosition(x, y + spacing * 4);
    cout << "\033[30;43m";
    cout << "Display Employees";
    setColors(textColor, backgroundColor);
    setCursorPosition(x, y + spacing * 5);
    cout << "Exit";
  } else if (selectedOption == 3) {
    cout << "=========================";
    setCursorPosition(x, y + spacing);
    cout << "Main Menu";
    setCursorPosition(x, y + spacing * 2);
    cout << "=========================";
    setCursorPosition(x, y + spacing * 3);
    cout << "New Employee ";
    // cout << "\033[0m";
    setCursorPosition(x, y + spacing * 4);

    cout << "Display Employees";
    setCursorPosition(x, y + spacing * 5);
    cout << "\033[30;43m";
    cout << "Exit";
    setColors(textColor, backgroundColor);
  }
  resetColors();
}

void displayNewScreen(employeeData& ed) {
  clearScreen();
  if(ed.noOfEmployees!=0){
      int flag = 1;
  while (flag != 2) {
    if (ed.noOfEmployees < ed.size) {
      employee e;
      cout << "Enter Employee Name " << endl;
           cin.ignore();
      cin.getline(e.name, 60);
      cout << "Enter Employee ID " << endl;
      cin >> e.id;
      cout << "Enter Employee Salary " << endl;
      cin >> e.salary;
      *(ed.employees+ed.noOfEmployees ) = e;
      cout << "Employee Entered Succesfully " << endl;
      ed.noOfEmployees ++;
      cout << "To Enter Another Employee Press 1, to exit to main menu press 2 ";
      cin >> flag;
    } else {
      cout <<"List is full, press 2 to exit to main menu ";
      cin >> flag;
    }
  }
  } else {
      int flag = 1;
  cout << "Enter Number of Employees "<<endl;
  cin >> ed.size;
 
  ed.employees = new employee[ed.size];
  while (flag != 2) {
    if (ed.noOfEmployees < ed.size) {
      employee e;
      cout << "Enter Employee Name " << endl;
     cin.ignore();
      cin.getline(e.name, 60);
      cout << "Enter Employee ID " << endl;
      cin >> e.id;
      cout << "Enter Employee Salary " << endl;
      cin >> e.salary;
      *(ed.employees+ed.noOfEmployees ) = e;
      cout << "Employee Entered Succesfully " << endl;
      ed.noOfEmployees ++;
      cout << "To Enter Another Employee Press 1, to exit to main menu press 2 ";
      cin >> flag;
    } else {
      cout <<"List is full, press 2 to exit to main menu ";
      cin >> flag;
    }
  }
  }

}


void displayNewScreenD(employeeData& ed) {
  clearScreen();
  if(ed.noOfEmployees!=0){
      int flag = 1;
  while (flag != 2) {
    if (ed.noOfEmployees == ed.size) {
      ed.copyArr();
      employee e;
      cout << "Enter Employee Name " << endl;
     cin.ignore();
      cin.getline(e.name, 60);
      cout << "Enter Employee ID " << endl;
      cin >> e.id;
      cout << "Enter Employee Salary " << endl;
      cin >> e.salary;
      *(ed.employees+ed.noOfEmployees ) = e;
      cout << "Employee Entered Succesfully " << endl;
      ed.noOfEmployees ++;
      cout << "To Enter Another Employee Press 1, to exit to main menu press 2 ";
      cin >> flag;
    } else {
            employee e;
      cout << "Enter Employee Name " << endl;
     cin.ignore();
      cin.getline(e.name, 60);
      cout << "Enter Employee ID " << endl;
      cin >> e.id;
      cout << "Enter Employee Salary " << endl;
      cin >> e.salary;
      *(ed.employees+ed.noOfEmployees ) = e;
      cout << "Employee Entered Succesfully " << endl;
      ed.noOfEmployees ++;
      cout << "To Enter Another Employee Press 1, to exit to main menu press 2 ";
      cin >> flag;
     
    }
  }
  } else {
      int flag = 1;

 ed.size=5;
  ed.employees = new employee[ed.size];
  while (flag != 2) {
    if (ed.noOfEmployees == ed.size) {
      ed.copyArr();
      employee e;
      cout << "Enter Employee Name " << endl;
     cin.ignore();
      cin.getline(e.name, 60);
      cout << "Enter Employee ID " << endl;
      cin >> e.id;
      cout << "Enter Employee Salary " << endl;
      cin >> e.salary;
      *(ed.employees+ed.noOfEmployees ) = e;
      cout << "Employee Entered Succesfully " << endl;
      ed.noOfEmployees ++;
      cout << "To Enter Another Employee Press 1, to exit to main menu press 2 ";
      cin >> flag;
    } else {
            employee e;
      cout << "Enter Employee Name " << endl;
     cin.ignore();
      cin.getline(e.name, 60);
      cout << "Enter Employee ID " << endl;
      cin >> e.id;
      cout << "Enter Employee Salary " << endl;
      cin >> e.salary;
      *(ed.employees+ed.noOfEmployees ) = e;
      cout << "Employee Entered Succesfully " << endl;
      ed.noOfEmployees ++;
      cout << "To Enter Another Employee Press 1, to exit to main menu press 2 ";
      cin >> flag;
     
    }
  }
  }

}


void displayEmployees(employeeData& ed){
 clearScreen();
 int flag=1;
 if(ed.noOfEmployees>0){
 while(flag!=0){
for(int i=0;i<ed.noOfEmployees;i++){
  
  cout<<"Employee Name : "<<(ed.employees+i)->name<<" Employee ID : "<<(ed.employees+i)->id<<endl;

}
cout<<"To print list again press 1 , to exit to main menu press 0";
cin>>flag;
 }
 } else cout<<"No Employees were entered";


}
