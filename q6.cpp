//Write a program to reverse elements of an array
#include <iostream>
using namespace std;

int main() {
  int arr[5],i;
  for (i=0;i<5;i++) {
	cout << "Enter element "<<i+1<<" : ";
    cin >> arr[i];
  }
  for (i=0;i<5/2;i++) {
    int temp = arr[i];
    arr[i] = arr[5-i-1];
    arr[5-i-1] = temp;
  }
  cout << "\nReversed array: ";
  for (i=0;i<5;i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

