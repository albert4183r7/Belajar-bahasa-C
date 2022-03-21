#include<iostream>
#include<string.h>
using namespace std;
int hitungkata(char a[100])
{
	int spasi = 0;
	for (int i=0;a[i];i++)
	{
		if (isspace(a[i]) or ispunct(a[i]))
		{
			spasi++;
		}
	}
	return spasi+1;
}
int main()
{
	char a[100];
	cout<<"",cin.getline(a,sizeof(a));
	cout<<hitungkata(a);
}
