#include <iostream>

using namespace std;

string printTree(int width) {
    if (width < 3 || width % 2!= 1){
        cerr << "incorrect input" << endl;
        return "";
    }
    string ans = "";
    int sessions = (width - 2) / 2 + 1;
    for (int j = 0; j < sessions; j++){
      for(int i = 1, k = 0; i <= j+2; ++i, k = 0)
      {
          for(int space = 1; space <= width/2+1-i; ++space)
          {
              ans += " ";
          }
  
          while(k != 2*i-1)
          {
              ans += "*";
              ++k;
          }
          ans += "\n";
      }
    }
    int mid = width / 2;
    string space(mid, ' ');
    ans += space + "*\n";
    ans += space + "*\n";
    return ans;
}