#include<iostream>
#include<conio.h>
using namespace std;
int fibo(int n)
{
	if (n<=2)
	{
		return 1;
	}
	else if(n>2)
	{
		return fibo(n-1)+fibo(n-2);
	}
}
int main()
{
	int n;
	cout<<"input : ",cin>>n;
	for (int i=1;i<n+1;i++)
	{
		cout<<fibo(i)<<" ";	
	}
	getch();
}
