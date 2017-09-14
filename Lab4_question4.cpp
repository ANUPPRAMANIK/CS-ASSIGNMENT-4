#include<iostream>
using namespace std;
int a(int b)
{
	int c=0;
	if(b%2==0)
	c=1;
	return c;
	}
	main() {
		int b,d;
		cout<<" enter an integer ";
		cin>>b;
		d=a(b);
		if(d==1)
		cout<<b<<" \nthe integer is even ";
		else
		cout<<b<<" \nthe integer is odd "; 
		}
