#include<iostream>
using namespace std;
float a(float b)
{
	float c=2*b;
	return c;
	}
	float d(float b)
	{
		float c=2*3.14*b;
		return c;
		}
		float e(float b)
		{
			float c=3.14*b*b;
			return c;
			}
			main() {
				float b,f,g,h;
				cout<<" enter radius ";
				cin>>b;
				f=e(b);
				g=d(b);
				h=a(b);
				cout<<b<<" \ndiameter: "<<h<<" \ncircumference: "<<g<<" \narea: "<<f;
}
