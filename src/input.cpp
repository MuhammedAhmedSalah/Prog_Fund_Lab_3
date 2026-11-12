#include <bits/stdc++.h>
using namespace std;

bool validatPostiveInput(int value){
        if(value>0){
        return true;
    }
    return false;
}


bool validateDigitInput(int value){
    if(isdigit(value)){
        return true;
    }
    return false;
}


bool validateIfColorsInRange(int textColor, int backgroundColor) {
  if (textColor >= 1 && textColor <= 8 && backgroundColor >= 1 &&
      backgroundColor <= 8) {
    return true;
  } else
    return false;
}

int takeInput(){
    int value;
    cin>>value;
    if(cin.fail())
    {
        return 0;
    }   
    else return value;
}


