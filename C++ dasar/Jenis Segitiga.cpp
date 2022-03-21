#include<iostream>
using namespace std;

int main()
{
	int a,b,c,n,x,y,z;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
	
		if(b>a)
		{
			if(b>c)
			{
				x=b;
				b=c;
				c=x;
			}
			else if(a==c)
			{
				x=b;
				b=c;
				c=x;
			}
			else if(b==c)
			{
				z=a;
				x=b;	
				y=c;
				a=x;
				b=y;
				c=z;
			}
		}
		
		else if(b<a)
		{
			if(a>c)
			{
				y=c;
				c=a;
				a=y;
			}
			else if(a==c)
			{
				x=b;
				b=c;
				c=x;
			}
			else if(b==c)
			{
				z=a;
				x=b;
				y=c;
				a=x;
				b=y;
				c=z;
			}	
		}
	
		
		if(a==b and a==c and b==c)
		{
			cout<<"Segitiga Sama Sisi"<<endl;
		}
		else if(a*a+b*b==c*c)
		{	
			cout<<"Segitiga Siku-siku"<<endl;
		}
		else if(a==b and a!=c)
		{
			cout<<"Segitiga Sama Kaki"<<endl;
		}
		else
		{	
			cout<<"Segitiga Sembarang"<<endl;
		}
	}	
}
