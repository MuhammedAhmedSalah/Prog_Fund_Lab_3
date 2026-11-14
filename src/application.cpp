// application.cpp

#include <iostream>

#include "terminal.h"
#include "menu.h"
#include "colors.h"
#include "input.h"
#include<escapeCharBehav.h>
#include "employee.h"
using namespace std;

void runApplication() {
  cout << "Welcome to the Application!" << endl;
  int textColor, backgroundColor;
  cout << "Enter text color :\n1 for Black\n2 for Red\n3 for Green\n4 for "
          "Yellow\n5 for Blue\n6 for Magenta\n7 for Cyan\n8 for White"
       << endl;
cin >> textColor;
  cout << "Enter background color :\n1 for Black\n2 for Red\n3 for Green\n4 for "
          "Yellow\n5 for Blue\n6 for Magenta\n7 for Cyan\n8 for White"
       << endl;
  cin >> backgroundColor;


  while (!validateIfColorsInRange(textColor, backgroundColor)) {
    cout << "Invalid color range. Please enter valid colors." << endl;
    cout << "Enter text color :\n1 for Black\n2 for Red\n3 for Green\n4 for "
            "Yellow\n5 for Blue\n6 for Magenta\n7 for Cyan\n8 for White"
         << endl;
    cin >> textColor;
  
    cout << "Enter background color :1 for Black\n2 for Red\n3 for Green\n4 "
            "for Yellow\n5 for Blue\n6 for Magenta\n7 for Cyan\n8 for White"
         << endl;
    cin >> backgroundColor;

  }


  cout << "Colors set successfully!" << endl;
  cout << "Enter the position to display the menu (x y): ";
  int x, y;
  cin >> x >> y;



  int width, height;
  getTerminalSize(width, height);
  while (!validatePosition(x, y, width, height)) {
    cout << "Invalid position. Please enter valid coordinates within the "
            "terminal size."
         << endl;
    cout << "Enter the position to display the menu (x y): ";
    cin >> x >> y;
  }
 /* int selectedOption = 0;
  //displayMenu(x, y, textColor, backgroundColor,selectedOption);
  while(selectedOption!=-1){

  displayMenu(x, y, textColor, backgroundColor,selectedOption);
  selectedOption=readArrowKey();

  }

*/

//int currentOption = 1;
/*
cout << "Before loop" << endl;
//up =1, down =2
while (selectedOption != -1) {

    cout << "" << endl;

    displayMenu(x, y, textColor, backgroundColor, currentOption);

    //cout << "Menu displayed" << endl;

    selectedOption = readArrowKey();

   cout << "Input received: " << selectedOption << endl;
}
*/




/*

int currentOption = 1;

while(currentOption!=0){
displayMenu(x, y, textColor, backgroundColor, currentOption);
cout.flush();
int userSelect=readArrowKey();
if(currentOption==3&&userSelect==3){
currentOption=0;
}
else if(userSelect==3){
//new function here
}
else if(userSelect==1){
currentOption=((currentOption==1))?3:currentOption-1;
displayMenu(x, y, textColor, backgroundColor, currentOption);
if(currentOption==1&&readArrowKey()==3){
//new function here
} else if(currentOption==2&&readArrowKey()==3){
  // display function here
}

} else if(userSelect==2){
  currentOption=(currentOption%3)+1;
  displayMenu(x, y, textColor, backgroundColor, currentOption);
if(currentOption==1&&readArrowKey()==3){
//new function here
} else if(currentOption==2&&readArrowKey()==3){
  // display function here
}
} 

*/


int currentOption = 1;
employeeData ed;
ed.noOfEmployees=0;
while(currentOption!=0){
displayMenu(x, y, textColor, backgroundColor, currentOption);
cout.flush();
int userSelect=readArrowKey();
cout << "Current Option: " << currentOption << endl;
cout << "User Select: " << userSelect << endl;
if(currentOption==3&&userSelect==3){
currentOption=0;
}
else if(userSelect==3){
  
if(currentOption==1){
displayNewScreenD(ed);
} else if(currentOption==2){
  // display function here
   cout << "Entered Display branch!" << endl;
  displayEmployees(ed);

}
}
else if(userSelect==1){
currentOption=((currentOption==1))?3:currentOption-1;


} else if(userSelect==2){
  currentOption=(currentOption%3)+1;

} 


}






}



