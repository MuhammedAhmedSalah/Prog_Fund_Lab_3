
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

#include <cstdio>    // C standard I/O functions such as printf
#include <iostream>  // Standard input/output library
int main() {
  /* cout << "Hello, World!" << endl;
 setCursorPosition(20, 20);
 cout<<"\033[2J";
 cout << "Testing postion change of cursor" << endl;*/

  /*displayMenu(1, 1,7,1);
  int width, height;
getTerminalSize(width, height);

cout << "Terminal width: " << width << endl;
cout << "Terminal height: " << height << endl;
cout<<"Validating position (70, 20): " << (validatePosition(70, 20, width,
height) ? "Valid" : "Invalid") << endl;*/
  // runApplication();
  //  Display instructions for the user
  /*
  std::printf(
      "Press the arrow keys to test the program (press 'q' to quit):\n");
  char byte1 = 'q';
  char byte2 = 'q';
  char byte3 = 'q';

  // Infinite loop that runs until the user chooses to quit
  do {
    // Read a key from the user

    byte1 = getch_linux();
    // int b1=byte1;
    // cout<<"Byte 1 :: "<<b1<<std::endl;
    // std::cout<<"Byte 1 :: "<<byte1<<std::endl;
    // If the key is the beginning of an arrow-key escape sequence
    // cout<<byte1<<std::endl;
    // std::cout << static_cast<int>(byte1) << std::endl;
    cout << "Byte 1 int value:: " << static_cast<int>(byte1) << endl;
    // cout << "Byte 1 char value :: " << (byte1) << endl;

    if (byte1 == '\033') {
      byte2 = getch_linux();
      cout << "Byte 1 int value:: " << static_cast<int>(byte1) << endl;

      cout << "Byte 2  int value :: " << static_cast<int>(byte2) << endl;
      cout << "Byte 2 char value :: " << (byte2) << endl;

      byte3 = getch_linux();
      cout << "Byte 3 int value:: " << static_cast<int>(byte3) << endl;
      cout << "Byte 3 char value:: " << (byte3) << endl;
      cout << "Full escape sequence: " << static_cast<int>(byte1) << byte2 <<
  byte3 << endl;
      // Skip the second character '['
      // byte2 = getch_linux();
      // std::cout<<"Byte 2 :: "<<byte2<<std::endl;
      // byte3 = getch_linux();
      // The third character determines the arrow direction
      // std::cout<<"Byte 3 :: "<<byte3<<std::endl;
      /*switch (byte3) {
          case 'A':
              std::printf("↑ Up Arrow\n");
              break;

          case 'B':
              std::printf("↓ Down Arrow\n");
              break;

          case 'C':
              std::printf("→ Right Arrow\n");
              break;

          case 'D':
              std::printf("← Left Arrow\n");
              break;
          case 'H':
              std::printf("← Home Button \n");
              break;
          case 'F':
              std::printf("End Button\n");
              break;
      }end comment here
    }

    std::cout << "=================================" << std::endl;
  } while (byte1 != 'q' &&
           byte1 != 'Q');  // Exit the program if the user presses Q or q
  // Exit the program successfully












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
      /*
       

      if (bytesAvailable == 0) {
        cout << "Escape char"<<endl;  // escape character behav. here
      } else {
        cout<<"Arrow "<<endl;
        byte2 = getch_linux();
        cout << "Byte 1 int value:: " << static_cast<int>(byte1) << endl;

        cout << "Byte 2  int value :: " << static_cast<int>(byte2) << endl;
        cout << "Byte 2 char value :: " << (byte2) << endl;

        byte3 = getch_linux();
        cout << "Byte 3 int value:: " << static_cast<int>(byte3) << endl;
        cout << "Byte 3 char value:: " << (byte3) << endl;
        cout << "Full escape sequence: " << static_cast<int>(byte1) << byte2
             << byte3 << endl;
      }
    }

    std::cout << "=================================" << std::endl;
  } while (byte1 != 'q' && byte1 != 'Q');

*/
runApplication();

  return 0;
}