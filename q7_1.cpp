//Write a program to add two arrays.
#include <iostream>
using namespace std;

int main() {
	
	int a[100],b[100];
	int n,m,i;
	cout << "Enter number of elements in Array 1 : ";
	cin >> n;
	for(i=0;i<n;i++) {
		cout << "Enter element "<<i+1<<" of Array 1 : ";
		cin >> a[i];
	}
	cout << "Enter number of elements in Array 2 : ";
	cin >> m;
	for(i=0;i<m;i++) {
		cout << "Enter element "<<i+1<<" of Array 2 : ";
		cin >> b[i];
	}
	for(i=0;i<m;i++,n++) {
		a[n]=b[i];
	}
	for(i=0;i<n;i++) {
		cout << a[i] << " ";
	}
  
  return 0;
}

