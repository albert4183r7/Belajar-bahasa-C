#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    float x1,y1,z1,x2,y2,z2,a1,b1,c1,a2,b2,c2;
    float teta,deg;
    int op;
    char sb;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    cout<<"Enter starting co-ordinate(x1,y1,z1):";
    cin>>x1>>y1>>z1;
    cout<<"Enter ending co-ordinate(x2,y2,z2):";
    cin>>x2>>y2>>z2;
    line(0,240,640,240);
    line(320,0,320,400);
    line(x1+320,-y1+240,x2+320,-y2+240);
    cout<<"\nRotation\n";
    cout<<"Rotation Angle : ",cin>>deg;
    teta = (M_PI*deg)/180;
    cout<<"\n1. Rotasi thdp sb.x\n";
    cout<<"2. Rotasi thdp sb.y\n";
    cout<<"3. Rotasi thdp sb.z\n";
    do{
        cout<<"Pilihan : ",cin>>op;
    }while((op<1)||(op>4));
    switch(op)
    {
        case 1:
            sb='x';
            a1=x1;
            b1=y1*cos(teta)-z1*sin(teta);
            c1=-y1*sin(teta)+z1*cos(teta);
            a2=x2;
            b2=y2*cos(teta)-z2*sin(teta);
            c2=-y2*sin(teta)+z2*cos(teta);
        case 2:
            sb='y';
            a1=x1*cos(teta)-z1*sin(teta);
            b1=y1;
            c1=x1*sin(teta)+z1*cos(teta);
            a2=x2*cos(teta)-z2*sin(teta);
            b2=y2;
            c2=x2*sin(teta)+z2*cos(teta);
         case 3:
            sb='z';
            a1=x1*cos(teta)-y1*sin(teta);
            b1=x1*sin(teta)+y1*cos(teta);
            c1=z1;
            a2=x2*cos(teta)-y2*sin(teta);
            b2=x2*sin(teta)+y2*cos(teta);;
            c2=z2;
            break;
    }
    line(0,240,640,240);
    line(320,0,320,400);
    line(x1+320,-y1+240,x2+320,-y2+240);
    line(a1+320,-b1+240,a2+320,-b2+240);
    cout<<"Rotasi thdp sumbu-"<<sb;
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
