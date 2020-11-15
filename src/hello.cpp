// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
using namespace std;

int main() {
  // print 4 times hello world per line for a continuous 6 lines
  for (int i = 0; i < 6; i++)
  {
    for (int i = 0; i < 4; i++)
    {
      cout.width(17);
      cout << left << "Hello World!";
    }
    cout << endl;
    
  }
  
  return 0;
}