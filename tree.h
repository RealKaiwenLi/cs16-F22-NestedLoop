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
#ifndef TREE_H
#define TREE_H
#include <iostream>

using namespace std;

string printTree(int width);
#endif