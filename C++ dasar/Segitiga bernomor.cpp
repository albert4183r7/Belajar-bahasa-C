#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cout<<"Masukkan Angka : ",cin>>n;
	k=1;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<i+2;j++)
		{
			cout<<k<<" ";
			k++;
			if(k>n)
			{
				k=k-n;
			}
		}
		cout<<endl;
	}
}
