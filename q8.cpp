//WAP. that display square, cubes and factorials of all integers from 1 to 10.
#include<iostream>
using namespace std;
int main() {
	int n,i,f=1;
	int a[10];
	n=10;
	for(i=1;i<=n;i++) {
		if (n==1 || n==0) {
			a[i-1]=1;
			continue;
		}
		f=f*i;
		a[i-1]=f;
	}
	printf("\n\nSr No.\tSquare\tCube\tFact\n\n");
	for (i=0;i<n;i++) 
		printf("(%d)\t%d\t%d\t%d\n",i+1,i*i,i*i*i,a[i]);
	return 0;
}	
