//Program to enter an integer and print if it is prime or composite.
#include<iostream>
using namespace std;
int main() {
	int n,i,f=0;
	cout << "Enter a Number : ";
	cin >> n;
	for(i=2;i<=n/2;i++) {
		if(n%i==0) {
			f=1;
			break;
		}
	}
	if(f==1) {
		cout << "Number is not prime number.";
	} else {
		cout << "Number is a prime number";
	}
}
