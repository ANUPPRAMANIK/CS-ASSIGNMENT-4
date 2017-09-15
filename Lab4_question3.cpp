#include<iostream>
using namespace std;
int a(int b, int c)
{
	int d;
	if(b>c)
	d=b;
	else
	if(b<c)
	d=c;
	return d;
	}
	int e(int b, int c)
	{
		int f;
		if(b<c)
		f=b;
		else
		if(b>c)
		f=c;
		return f;
	}
	main() {
		int b,c,g,h;
		cout<<" enter two integers ";
		cin>>b>>c;
		g=a(b,c);
		h=e(b,c);
		cout<<b<<" "<<c<<" \nmaximum: "<<g<<" \nminimum: "<<h;
		}
