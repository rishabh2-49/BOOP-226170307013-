//Program to check whether the given number is a PALINDROME number or not.
#include<iostream>
using namespace std;
int main() {
	int n,i,rev,temp,dig;
	cout << "Enter a Number : ";
	cin >> n;
	temp=n;
	while(n!=0) {
		dig=n%10;
		rev=(rev*10)+dig;
		n/=10;
	}
	if (temp==rev) {
		cout << "Number is a pailndrome.";
	} else {
		cout << "Number is not a palindrome.";
	}
	return 0;
}	
