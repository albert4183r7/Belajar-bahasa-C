#include<iostream>
using namespace std;

int main()
{
	int n,a;
	cout<<"Masukkan Angka : ",cin>>n;
	a=1;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i;k++)
		{
			cout<<" ";
		}
		for(int j=2*n-1;j>2*i;j--)
		{
			if(i!=0)
			{
				if(j==2*n-1 or j==2*i+1)
				{
					cout<<"*";
				}
				else if(j<2*n-1 and j>2*i+1)
				{
					cout<<a;
					a++;
					if(a>n)
					{
						a=a-n;
					}
				}
			}
			else if(i==0)
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int k=n;k>i+2;k--)
		{
			cout<<" ";
		}
		for(int j=0;j<2*i+3;j++)
		{
			if(i!=n-2)
			{
				if(j>0 and j<2*i+2)
				{
					cout<<a;
					a++;
					if(a>n)
					{
						a=a-n;
					}
				}
				else if(j==0 or j==2*i+2)
				{
					cout<<"*";
				}				
			}
			else if(i==n-2)
			{
				cout<<"*";
			}
		}
	cout<<endl;	
	}
}
