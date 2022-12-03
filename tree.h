/*
Write a program that takes exactly one integer (width) parameter as argument and returns a string of half of 
the christmas tree. The program should print an error message if the input (width) is less than 3 or is not even.
Note that there're no space after the asterisk.
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
#ifndef TREE_H
#define TREE_H
#include <iostream>

using namespace std;

string printTree(int width);
#endif