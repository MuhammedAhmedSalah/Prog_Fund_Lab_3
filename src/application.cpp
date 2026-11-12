// application.cpp

#include <iostream>

#include "terminal.h"
#include "menu.h"
#include "colors.h"
#include "input.h"

using namespace std;

void runApplication() {
  cout << "Welcome to the Application!" << endl;
  int textColor, backgroundColor;
  cout << "Enter text color :\n1 for Black\n2 for Red\n3 for Green\n4 for "
          "Yellow\n5 for Blue\n6 for Magenta\n7 for Cyan\n8 for White"
       << endl;
cin >> textColor;
  cout << "Enter background color :1 for Black\n2 for Red\n3 for Green\n4 for "
          "Yellow\n5 for Blue\n6 for Magenta\n7 for Cyan\n8 for White"
       << endl;
  cin >> backgroundColor;


  while (!validateIfColorsInRange(textColor, backgroundColor)) {
    cout << "Invalid color range. Please enter valid colors." << endl;
    cout << "Enter text color :1 for Black\n2 for Red\n3 for Green\n4 for "
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
  displayMenu(x, y, textColor, backgroundColor);
}
