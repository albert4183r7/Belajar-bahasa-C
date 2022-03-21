#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char a[100];
	cout<<"Masukkan Kata : ",cin>>a;
	int i=(strlen(a)-1)/2;
	
	cout<<"Huruf Awal : "<<a[0]<<endl;
	cout<<"Huruf Akhir : "<<a[strlen(a)-1]<<endl;
	cout<<"Huruf Tengah : "<<a[i]<<endl;
		
}
