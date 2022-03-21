#include<iostream>
using namespace std;
int main()
{
	int q,a,b;
	cout<<"",cin>>q;
	int x[q],y[q];
	cin>>a>>b;
	for (int i=0;i<q;i++)
	{
		cin>>x[i],cin>>y[i];
	}
	for (int i=0;i<q;i++)
	{
		if (x[i]==a or y[i]==b)
		{
			cout<<"tidak"<<endl;
		}
		else if (x[i]-a == y[i]-b or x[i]-a == y[i]+b or x[i]+a == y[i]-b or (x[i]-a)+(y[i]-b)==0)
		{
			cout<<"Bisa"<<endl;
		}
		else
		{
			cout<<"Tidak"<<endl;
		}
	}
}

