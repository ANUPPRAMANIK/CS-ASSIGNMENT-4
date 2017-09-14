#include<iostream>
using namespace std;
int a(int b) {
	int c,d=0;
	for(c=1;c<=b;c++)
	{
		if(b%c==0)
		d++;
		}
		return d;
		}
		int e(int b)
		{
			int f,g,h,i=0;
			h=b;
			while(h!=0)
			{
				g=h%10;
				i+=g*g*g;
				h/=10;
				}
				if(i==b)
				f=1;
				return f;
				}
				int j(int b)
				{
					int k,c,l,i=0;
					k=b;
					for(c=1;c<k;c++)
					{
						if(k%c==0)
						i+=c;
						}
						if(c==b)
						l=1;
						return l;
						}
						main() {
							int b,m,g,n;
							cout<<" enter an integer ";
							cin>>b;
							m=a(b);
							g=e(b);
							n=j(b);
							if(m==2)
							cout<<b<<" \nthe integer is prime ";
							else
							cout<<b<<" \nthe integer is not prime ";
							if(g==1)
							cout<<" \nthe integer is an arrmstrong number ";
							if(n==1)
							cout<<" \nthe integer is a perfect number ";
							}
