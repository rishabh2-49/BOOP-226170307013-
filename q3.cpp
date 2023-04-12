//Program to calculate factorial of given number using WHILE LOOP.
#include<iostream>
using namespace std;
int main() {
	int n,i,f=1;
	cout << "Enter a Number : ";
	cin >> n;
	if (n==1 || n==0) {
		f=1;
	}
	while (n!=1) {
		f=f*n;
		n--;
	}
	cout << "Factorial is "<< f <<".";
	return 0;
}	
