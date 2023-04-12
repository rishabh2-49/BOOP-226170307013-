

#include <iostream>
#include<conio.h>
using namespace std;

int main() {
  int no[5];

          
  cout << "Enter five numbers: ";
  for (int i = 0; i < 5; i++) {
    cin >> no[i];
  }

  
  int max_n = no[0];
  int min_n= no[0];

  for (int i = 1; i < 5; i++) {
    if (no[i] > max_n) {
      max_n= no[i];
    }
    if (no[i] < min_n) {
      min_n= no[i];
    }
  }

  
  cout << "Maximum number is " << max_n << endl;
  cout << "Minimum number is " << min_n << endl;

  return 0;
}