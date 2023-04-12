//Write a program to add two arrays.
#include <iostream>
using namespace std;

int main() {
	
	int a[100],b[100],c[100];
	int n,i;
	cout << "Enter number of elements : ";
	cin >> n;
	for(i=0;i<n;i++) {
		cout << "Enter element "<<i+1<<" of Array 1 : ";
		cin >> a[i];
	}
	for(i=0;i<n;i++) {
		cout << "Enter element "<<i+1<<" of Array 2 : ";
		cin >> b[i];
	}
	for(i=0;i<n;i++) {
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++) {
		cout << c[i] << " ";
	}
  
  return 0;
}

