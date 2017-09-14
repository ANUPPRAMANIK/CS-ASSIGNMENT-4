#include<iostream>
using namespace std;
int a(int b)
{
	int c,d=0;
	for(c=1;c<b;c++)
	{
		if(b%c==0)
		d+=c;
		}
		return d;
		}
		main() {
			int e,f,g,h;
			cout<<" enter two integers ";
			cin>>e>>f;
			for(g=e+1;g<f;g++)
			{
				h=a(g);
				if(h==g)
				cout<<g<<" \n ";
				}
				return 0;
				}
