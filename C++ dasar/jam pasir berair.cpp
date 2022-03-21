#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	//BAGIAN ATAS
	
	if(n==1)
	{
		cout<<"*";
	}
	
	for(int i=0;i<n-1;i++)
	{
		if(i==0)
		{
			for(int j=i;j<2*n-1;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else if(i>0)
		{
			for(int k=0;k<2*n-(i+1);k++)
			{
				if(k<i)
				{
					cout<<" ";
				}
				else if(k>i and k<2*n-(i+2))
				{
					cout<<".";
				}
				else if(k==i or k==2*n-(i+2))
				{
					cout<<"*";
				}
			}
			cout<<endl;
		}
	}
	
	if(n!=1)
	{
		for(int j=0;j<2*n-1;j++)
		{
			if(j==n-1)
			{
				cout<<".";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	//BAGIAN BAWAH
	
	for(int l=n-2;l>=0;l--)
	{
		if(l==0)
		{
			for(int q=l;q<2*n-1;q++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		else if(l>0)
		{
			for(int m=0;m<2*n-(l+1);m++)
			{
				if(m<l)
				{
					cout<<" ";
				}
				else if(m>l and m<2*n-(l+2))
				{
					cout<<".";
				}
				else if(m==l or m==2*n-(l+2))
				{
					cout<<"*";
				}
			}	
			cout<<endl;
		}
	}
}

