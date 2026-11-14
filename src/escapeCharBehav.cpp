
#include <iostream>

/*#include
"/home/mohamed-ahmed-salah/Documents/Prog_Fund_Lab_1/include/terminal.h"
#include "/home/mohamed-ahmed-salah/Documents/Prog_Fund_Lab_1/include/menu.h"
#include
"/home/mohamed-ahmed-salah/Documents/Prog_Fund_Lab_1/include/colors.h"*/
#include "application.h"
#include "arrowInput2.h"
#include "menu.h"
#include "terminal.h"
using namespace std;
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>  // Provides Unix functions such as read
#include <unistd.h>

#include <cstdio>  // C standard I/O functions such as printf
#include <iostream>
/*
int main() {
  std::printf(
      "Press the arrow keys to test the program (press 'q' to quit):\n");
  char byte1 = 'q';
  char byte2 = 'q';
  char byte3 = 'q';

  // Infinite loop that runs until the user chooses to quit
  do {
    // Read a key from the user
    int bytesAvailable = 0;

    byte1 = getch_linux();
    ioctl(STDIN_FILENO, FIONREAD, &bytesAvailable);
    cout << "Byte 1 int value:: " << static_cast<int>(byte1) << endl;
    cout << "Number of Bytes " << bytesAvailable << endl;
    if (byte1 == '\033') {
      if (bytesAvailable == 0) {
        cout << "Escape char" << endl;  // escape character behav. here
      } else {
        cout << "Arrow " << endl;
        byte2 = getch_linux();
        cout << "Byte 1 int value:: " << static_cast<int>(byte1) << endl;

        cout << "Byte 2  int value :: " << static_cast<int>(byte2) << endl;
        cout << "Byte 2 char value :: " << (byte2) << endl;

        byte3 = getch_linux();
        cout << "Byte 3 int value:: " << static_cast<int>(byte3) << endl;
        cout << "Byte 3 char value:: " << (byte3) << endl;
        cout << "Full escape sequence: " << static_cast<int>(byte1) << byte2
             << byte3 << endl;

        if (byte3 == 'A') {
          std::printf("↑ Up Arrow\n");
          // arrow up behaviour here
        } else if (byte3 == 'B') {
          std::printf("↓ Down Arrow\n");
          // arrow down behaviour here
        }
      }
    } else if (byte1 == 10) {
      cout << "Enter key pressed" << endl;
      // Enter key behaviour here
    }

    std::cout << "=================================" << std::endl;
  } while (byte1 != 'q' && byte1 != 'Q');
  return 0;
}
*/
int readArrowKey() {
  char byte1 ;
  char byte2 ;
  char byte3 ;
  
    // Read a key from the user
    int bytesAvailable = 0;

    byte1 = getch_linux();
    ioctl(STDIN_FILENO, FIONREAD, &bytesAvailable);
   // cout << "Byte 1 int value:: " << static_cast<int>(byte1) << endl;
    //cout << "Number of Bytes " << bytesAvailable << endl;
    if (byte1 == '\033') {
      if (bytesAvailable == 0) {
      //  cout << "Escape char" << endl;  // escape character behav. here
        return -1; // Return a specific value to indicate escape character
      } else {
       // cout << "Arrow " << endl;
        byte2 = getch_linux();
       /* cout << "Byte 1 int value:: " << static_cast<int>(byte1) << endl;

        cout << "Byte 2  int value :: " << static_cast<int>(byte2) << endl;
        cout << "Byte 2 char value :: " << (byte2) << endl;*/

        byte3 = getch_linux();
      /*  cout << "Byte 3 int value:: " << static_cast<int>(byte3) << endl;
        cout << "Byte 3 char value:: " << (byte3) << endl;
        cout << "Full escape sequence: " << static_cast<int>(byte1) << byte2
             << byte3 << endl;*/

        if (byte3 == 'A') {
          //std::printf("↑ Up Arrow\n");
          // arrow up behaviour here
          return 1; // Return a specific value to indicate up arrow
        } else if (byte3 == 'B') {
          //std::printf("↓ Down Arrow\n");
          return 2; // Return a specific value to indicate down arrow
          // arrow down behaviour here
        }
      }
    } else if (byte1 == 10) {
      //cout << "Enter key pressed" << endl;
      return 3; // Return a specific value to indicate enter key
      // Enter key behaviour here
    }

    //std::cout << "=================================" << std::endl;
    return 0; // Return a default value for other keys
  } 

