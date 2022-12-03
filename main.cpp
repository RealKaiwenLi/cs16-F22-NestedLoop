#include "tree.h"
#include "treeSolution.h""
#include <iostream>

void assertEquals(std::string expected, 
		  std::string actual, 
		  std::string message) {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;
  } else {
    cout << "   FAILED: " << message << endl 
	  << "     Expected: " << expected << " Actual: " << actual << endl; 
  }
}

int main(int argc, char* argv[]) { 
  int testNum = atoi(argv[1]);

  if(testNum == 1){
    assertEquals("", printTree(2), "test case 1: Input less than 3");
  }

  if(testNum == 2){
    assertEquals("", printTree(-1), "test case 2: Input less than 3");
  }

  if(testNum == 3){
    assertEquals(tree3, printTree(3), "test case 3: tree width is 3");
  }

  if(testNum == 4){
    assertEquals(tree5, printTree(5), "test case 4: tree width is 5");
  }
  
  if(testNum == 5){
    assertEquals(tree7, printTree(7), "test case 5: tree width is 7");
  }

  if(testNum == 6){
    assertEquals("", printTree(6), "test case 6: Input is even");
  }

  if(testNum == 7){
    assertEquals("", printTree(102), "test case 7: Input is even");
  }

  if(testNum == 8){
    assertEquals(tree9, printTree(9), "test case 8: tree width is 9");
  }

  if(testNum == 9){
    assertEquals(tree11, printTree(11), "test case 9: tree width is 11");
  }
  }