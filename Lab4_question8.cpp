#include<iostream>
using namespace std;
int a(int b)
{
	int c,d,e,f,g=0;
	d=b;
	while(d!=0)
	{
		e=d%10;
		g+=e*e*e;
		d/=10;
		}
		return g;
		}
		main() {
			int h,e,i,j;
			cout<<" enter two integers ";
			cin>>h>>e;
			for(i=h+1;i<e;i++)
			{
				j=a(i);
				if(j==i)
				cout<<i<<" \n ";
				}
				return 0;
				}
