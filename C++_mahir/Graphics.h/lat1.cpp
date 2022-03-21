#include <iostream>
#include <graphics.h>
#include <conio.h>

int main(){
int gd = DETECT,gm;

initgraph(&gd, &gm, "C:\\TC\\BGI");
fillellipse(50,50,25,30);
int jajargenjang[]={50,150,150,150,125,200,25,200,50,150};
drawpoly(5,jajargenjang);
int sembarang[]={105,60,150,20,160,50,200,30,197,90,115,100,105,60};
drawpoly(7,sembarang);
rectangle(250,25,350,85);
int segitiga1[]={350,25,350,85,410,85,350,25};
drawpoly(4,segitiga1);
int segitiga2[]={250,85,410,85,330,145,250,85};
drawpoly(4,segitiga2);
int siku2[]={325,140,330,135,335,140};
drawpoly(3,siku2);

//kerangka
int atap[]={50,250,150,250,175,300,25,300,50,250};
drawpoly(5,atap);
rectangle(25,300,175,400);

//pintu
rectangle(85,360,115,400);
circle(107,375,4);

//jendela
rectangle(35,330,55,350);
rectangle(145,330,165,350);

getch();
closegraph();
return 0;
}
