#include <iostream>
using namespace std;
void setColors(int textColor, int backgroundColor) {
  cout << "\033[" << textColor + 29 << ";" << backgroundColor + 39 << "m";
}

void resetColors() { cout << "\033[0m"; }
