// menu.cpp
#include <iostream>
using namespace std;
#include "colors.h"
#include "terminal.h"

void displayMenu(int x, int y, int textColor, int backgroundColor) {
  setColors(textColor, backgroundColor);
  clearScreen();
  setCursorPosition(x, y);
  int spacing = 3;
  cout << " =========================";
  setCursorPosition(x, y + spacing);
  cout << "Main Menu";
  setCursorPosition(x, y + spacing * 2);
  cout << " =========================";
  setCursorPosition(x, y + spacing * 3);
  cout << "Screen 1 ";
  setCursorPosition(x, y + spacing * 4);
  cout << "Screen 2 ";
  setCursorPosition(x, y + spacing * 5);
  cout << "Exit";
  resetColors();
}