#include<iostream>
using namespace std;

int main()
{
	int n,x;
	cout<<"Masukkan Jumlah Bilangan Yang Diinput : ",cin>>n;
	int a[n];
	cout<<"Masukkan Bilangan Inputan : ";
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Sihlakan pilih satu bilangan : ",cin>>x;
		
	for(int i=0;i<n;i++)
	{
		if(x==a[i])
		{
			cout<<"Bilangan yang anda pilih berada di urutan : "<<i+1;
		}
	}	
}
