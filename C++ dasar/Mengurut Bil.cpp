#include<iostream>
using namespace std;

int main()
{
	int n,x;
	cout<<"Masukkan Jumlah Bilangan : ",cin>>n;
	int a[n];
	
	cout<<"Masukkan Bilangan : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				x=a[i];
				a[i]=a[j];
				a[j]=x;
			}	
		}
	}
	for(int i=0;i<n;i++)
	{	
		cout<<a[i]<<" ";
	}	
}

