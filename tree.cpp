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