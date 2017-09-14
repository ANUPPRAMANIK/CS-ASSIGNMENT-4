#include<iostream>
using namespace std;
int a(int b)
{
	int c,d,e,f,g,h=0;
	d=b;
	while(d!=0)
	{
		g=1;
		e=d%10;
		for(f=1;f<=e;f++)
		{
			g*=f;
			}
			h+=g;
			d/=10;
			}
			return h;
			}
			main() {
				int c,d,e,i;
				cout<<" enter two integers ";
				cin>>c>>d;
				for(e=c+1;e<d;e++)
				{
					i=a(e);
					if(i==e)
					cout<<e<<" \n ";
					}
					return 0;
					}
