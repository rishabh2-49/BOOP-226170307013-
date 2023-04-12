//Program to check whether the given number is an ARMSTRONG number or not.
#include<iostream>
using namespace std;
int main() {
	int n,i,arm=0,temp,dig;
	cout << "Enter a Number : ";
	cin >> n;
	temp=n;
	while(n!=0) {
		dig=n%10;
		arm+=(dig*dig*dig);
		n/=10;
	}
	if(arm==temp) {
		cout << "Number is an armstrong number.";
	} else {
		cout << "Number is not an armstrong number.";
	}
	return 0;
}	
