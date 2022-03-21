#include<iostream>
using namespace std;

int main()
{
	int a,a2,i2,b,c,x,y,z,i,j,k,d,e,f;
	cout<<"Masukkan Angka : ",cin>>a>>b>>c;
	cout<<"Masukkan Angka : ",cin>>i>>j>>k;
	x=a;
	y=b;
	z=c;
	
	if(z>=60 and z<3600)
	{
		c=z%60;
		b=z/60;
		b=b+y;
	}
	if(z>=3600)
	{
		c=z%3600;
		a=z/3600;
		a=a+x;
		if(c>=60)
		{
			b=c/60;
			b=y+b;
			c=c%60;
		}
	}
	if(b>=60)
	{
		a2=b/60;
		b=b%60;
		a=a+a2;
	}
	
	d=i;
	e=j;
	f=k;
	
	if(f>=60 and f<3600)
	{
		k=f%60;
		j=f/60;
		j=j+e;
	}
	if(f>=3600)
	{
		k=f%3600;
		i=f/3600;
		i=i+d;
		if(k>=60)
		{
			j=k/60;
			j=j+e;
			k=k%60;
		}
	}
	if(j>=60)
	{
		i2=j/60;
		j=j%60;
		i=i+i2;
	}
	
	int q,r,s;
	if(a<i)
	{
		q=i-a;
	}
	else if(a>=i)
	{
		q=a-i;
	}
	if(b<j)
	{
		r=j-b;
	}
	else if(b>=j)
	{
		r=b-j;
	}
	if(c<k)
	{
		s=k-c;
	}
	else if(c>=k)
	{
		s=c-k;
	}
	cout<<q<<" "<<r<<" "<<s;
	
	
	
}
