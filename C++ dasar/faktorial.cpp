#include<iostream>
#include<conio.h>
using namespace std;
int faktorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*faktorial(n-1);
	}
}
int main()
{
	int n;
	cout<<"Input n : ";
	cin>>n;
	cout<<"faktorial "<<n<<" : "<<faktorial(n);
	getch();
}
