#include <iostream>
#include <graphics.h>
#include <conio.h>

int main(){
int gd = DETECT,gm;

initgraph(&gd, &gm, "C:\\TC\\BGI");
//stickman1
circle(55,50,10);
//kaki
line(50,60,35,90);
line(35,90,5,115);
line(35,90,55,90);
line(55,90,80,115);
//tangan
line(50,60,75,65);
line(50,60,70,70);
//pedang
line(63,77,100,40);

//stickman2
circle(125,50,10);
//kaki
line(130,60,145,90);
line(145,90,175,115);
line(145,90,125,90);
line(125,90,100,115);
//tangan
line(105,65,130,60);
line(110,70,130,60);
//pedang
line(80,40,117,77);


getch();
closegraph();
return 0;
}

