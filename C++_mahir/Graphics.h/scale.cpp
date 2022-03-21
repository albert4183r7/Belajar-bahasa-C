#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    float x1,y1,z1,x2,y2,z2,a1,b1,c1,a2,b2,c2;
    float sx,sy,sz;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    cout<<"Enter starting co-ordinate(x1,y1,z1):";
    cin>>x1>>y1>>z1;
    cout<<"Enter ending co-ordinate(x2,y2,z2):";
    cin>>x2>>y2>>z2;
    line(0,240,640,240);
    line(320,0,320,400);
    line(x1+320,-y1+240,x2+320,-y2+240);
    cout<<"\nScale\n";
    cout<<"\nEnter sx:";
    cin>>sx;
    cout<<"\nEnter sy:";
    cin>>sy;
    cout<<"\nEnter sz:";
    cin>>sz;
    a1=x1*sx;
    b1=y1*sy;
    c1=z1*sz;
    a2=x2*sx;
    b2=y2*sy;
    c2=z2*sz;
    line(0,240,640,240);
    line(320,0,320,400);
    line(x1+320,-y1+240,x2+320,-y2+240);
    line(a1+320,-b1+240,a2+320,-b2+240);
    cout<<"\nStarting coordinates\n";
    cout<<"x:"<<x1<<"\t||x:"<<a1<<endl;
    cout<<"y:"<<y1<<"\t||y:"<<b1<<endl;
    cout<<"z:"<<z1<<"\t||z:"<<c1<<endl;
    cout<<"Ending Coordinates\n";
    cout<<"x:"<<x2<<"\t||x:"<<a2<<endl;
    cout<<"y:"<<y2<<"\t||y:"<<b2<<endl;
    cout<<"z:"<<z2<<"\t||z:"<<c2<<endl;
    getch();
    return 0;
}

