//terminal.cpp
#include <iostream>
using namespace std;
#ifdef _WIN32
#include <windows.h>
void enableVirtualTerminalProcessing() {
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

DWORD mode;
GetConsoleMode(console, &mode);

mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;

SetConsoleMode(console, mode);
}

void getTerminalSize(int& width, int& height){
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO info;
GetConsoleScreenBufferInfo(console, &info);
width = info.srWindow.Right - info.srWindow.Left + 1;
height = info.srWindow.Bottom - info.srWindow.Top + 1;
}
#else
#include <sys/ioctl.h>
#include <unistd.h>
void getTerminalSize(int& width, int& height){
    struct winsize terminalWindowSize;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &terminalWindowSize);
    width = terminalWindowSize.ws_col;
    height = terminalWindowSize.ws_row;
}
#endif



void clearScreen() {
cout << "\033[2J";
cout << "\033[H";
}
void setCursorPosition(int x, int y) {
  cout << "\033[";  // ANSI sequence begins
  cout << y;        // Row
  cout << ";";      // Separator
  cout << x;        // Column
  cout << "H";      // ANSI command ends
}
const int MENU_WIDTH = 26;
bool validatePosition(int x, int y, int terminalWidth, int terminalHeight){
    if(x>0 && x<=terminalWidth && y>0 && y<=terminalHeight){
       if(y + 15 <= terminalHeight&&x + MENU_WIDTH - 1 <= terminalWidth){
        return true;
       } else return false;
    }
    else{
        return false;

    }
}


