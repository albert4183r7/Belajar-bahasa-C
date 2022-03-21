#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,r;
    int xScr,yScr;
    int mid_x,mid_y,sudut,tambah;
    double radian = M_PI/180;
    initwindow(1000,700);
    cout<<M_PI<<" "<<radian<<endl;

    mid_x = getmaxx()/2;
    mid_y = getmaxy()/2;
    cout<<getmaxx()<<" "<<getmaxy()<<endl;
    r = 100;

    sudut = 0;
    tambah = 30;
    do{
        x = r*cos(sudut*radian);
        y = r*sin(sudut*radian);
        cout<<"x & y = "<<x<<" "<<y<<endl;

        xScr = mid_x + x;
        yScr = mid_y - y;
        cout<<"mid_x & mid_y = "<<mid_x<<" "<<mid_y<<endl;

        putpixel(xScr,yScr,15);
        cout<<"xScr & yScr = "<<xScr<<" "<<yScr<<endl;
        sudut = sudut + tambah;
        cout<<sudut<<endl;
    }while(sudut<=360);
    getch();
    return 0;
}
