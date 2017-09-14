#include<iostream>
using namespace std;
int a(int b)
{
	int c=0,d;
	for(d=1;d<=b;d++)
	{
		if(b%d==0)
		c++;
		}
		return c;
		}
		main() {
			int e,f,g,h;
			cout<<" enter two integers ";
			cin>>e>>f;
			for(g=e+1;g<f;g++)
			{
				h=a(g);
				if(h==2)
				cout<<g<<" \n ";
				}
				return 0;
				}
