#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void jarak()
{
	int D,x2,x1,y2,y1;
	cout<<"x2 : ",cin>>x2;
	cout<<"x1 : ",cin>>x1;
	cout<<"y2 : ",cin>>y2;
	cout<<"y1 : ",cin>>y1;
	D = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<D;
}
int main()
{
	jarak();
	getch();
}
