#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int temp;
	int a[13] = {5,4,6,1,2,3,1,5,2,10,12,1,23};
	for (int i=0;i<13;i++)
	{
	for (int j=i+1;j<13;j++)
	{
		if(a[i]>=a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}cout<<a[i]<<" ";
	}
}
