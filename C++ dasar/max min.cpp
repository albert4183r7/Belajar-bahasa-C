#include<iostream>
using namespace std;
void max_min()
{
	int max,min,n;
	cout<<"jumlah bilangan : ",cin>>n;
	int array[n];
	for (int i=0;i<n;i++)
	{
		cin>>array[i];
		if(i==0)
		{
			max=array[i],min=array[i];
		}
		if (array[i]>max)
		{
			max=array[i];
		}
		else if(array[i]<min)
		{
			min=array[i];
		}
	}
	cout<<"max : "<<max<<endl;
	cout<<"min : "<<min;
}
int main()
{
	max_min();
}
