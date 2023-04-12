//W.A.P. that accepts a number from keyboard and find whether the number is ODD or EVEN
#include<iostream>
using namespace std;
int main () {
	int n;
	cout << "Enter a number : ";
	cin >> n;
	if (n%2==0)
		cout << "Number is Even";
	else 
		cout << "Number is Odd";
}
