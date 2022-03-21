#include<iostream>
#include<conio.h>
using namespace std;
int perkalian(int a,int b)
{
	if(a==1)
	{
		return b;
	}
	else if(a>1)
	{
		a--;
		return perkalian(a,b)+b;
	}
}
int main()
{
	int a,b;
	cout<<"bil 1 : ",cin>>a;
	cout<<"bil 2 : ",cin>>b;
	cout<<perkalian(a,b);
}
