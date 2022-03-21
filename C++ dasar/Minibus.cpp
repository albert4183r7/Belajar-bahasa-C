#include<iostream>
using namespace std;

int main()
{
	int n,a;
	cout<<"Jumlah Peserta : ",cin>>n;
	if(n<1 or n>100)
	{
		exit;
	}
	a=n/7;
	if(n%7<2)
	{
		if(n>0 and n<8)
		{
			cout<<"Jumlah Minibus Yang diperlukan : "<<"1";
		}
		else
		{
			cout<<"Jumlah Minibus yang diperlukan : "<<a;
		}
	}
	else if(n%7>1)
	{
		cout<<"Jumlah Minibus yang diperlukan : "<<a+1;	
	}
}
