#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int key,i,j;
	int a[13] = {5,4,6,1,2,3,1,5,2,10,12,1,23};
	for (int j=2;j<13;j++)
	{
		key=a[j];
		i=j-1;
		while (i>0 and a[i]>key);
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	for (int j=0;j<13;j++)
	{
		cout<<a[j]<<" ";
	}
}
