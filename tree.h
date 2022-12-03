/*
Write a program that takes exactly one integer (height) parameter as argument and draws half of 
the christmas tree. The program should print an error message if the input (height) is not divisible by 4.
The height and the width of stem is 2 and it is excluded from the height of the tree. Note that there're no space after 
the asterisk.
Below are examples of the expected output when the program is executed on the unix bash shell with specific inputs.
/printTree(3)
*
**
***
**
**
/printTree(5)
*
**
***
**
***
****
*****
**
**
/printTree(7)
*
**
***
**
***
****
*****
**
***
****
*****
******
*******
**
**



*/

#include <iostream>

using namespace std;

string printTree(int width) {
    if (width < 3 || width % 2!= 1){
        cerr << "incorrect input" << endl;
        return "";
    }
    string ans = "*\n";
    int sessions = (width - 2) / 2 + 1;
    for (int i = 0; i < sessions; i++) {
      int sessionWidth = 3 + 2 * i;
      for (int j = 2; j <= sessionWidth; j++){
        string tmp(j,'*');
        ans += tmp + "\n";
      }
    }
    for (int i = 0; i < 2; i++){
        ans += "**\n";
    }
    return ans;
    
}