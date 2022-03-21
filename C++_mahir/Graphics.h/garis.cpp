#include<iostream>
#include<graphics.h>
#include<conio.h>
void rumah(int x1,int y1,int x2,int y2)
    {
        //horizontal
        int a=0,d=0;
        if((x1<x2)&&(y1<y2))
        {
            for(int i=x1;i<=x2;i++)
            {
                putpixel(i,y1+38,14);
                putpixel(i,y2,14);
                delay(5);
            }
            for(int i=x1+60;i<=x2-60;i++)
            {
                putpixel(i,y1-22,14);
                delay(5);
            }
            for(int i=x1+40;i<=x2-220;i++)
            {
                putpixel(i,y1+94,14);
                delay(5);
            }
            do{
                for(int i=x1+175;i<=x2-55;i++)
                {
                    putpixel(i,y1+84+a,14);
                    delay(5);
                }a = a+10;
            }while(a<=20);
        }
        else if((x1<x2)&&(y1>y2))
        {
            for(int i=x1;i<=x2;i++)
            {
                putpixel(i,y2+38,14);
                putpixel(i,y1,14);
                delay(5);
            }
            for(int i=x1+60;i<=x2-60;i++)
            {
                putpixel(i,y2-22,14);
                delay(5);
            }
            for(int i=x1+40;i<=x2-220;i++)
            {
                putpixel(i,y2+94,14);
                delay(5);
            }
            do{
                for(int i=x1+175;i<=x2-55;i++)
                {
                    putpixel(i,y2+84+a,14);
                    delay(5);
                }a = a+10;
            }while(a<=20);
        }
        else if((x1>x2)&&(y1<y2))
        {
            for(int i=x1;i>=x2;i--)
            {
                putpixel(i,y1+38,14);
                putpixel(i,y2,14);
                delay(5);
            }
            for(int i=x1-60;i>=x2+60;i--)
            {
                putpixel(i,y1-22,14);
                delay(5);
            }
            for(int i=x1-220;i>=x2+40;i--)
            {
                putpixel(i,y1+94,14);
                delay(5);
            }
            do{
                for(int i=x1-55;i>=x2+175;i--)
                {
                    putpixel(i,y1+84+d,14);
                    delay(5);
                }d=d+10;
            }while(d<=20);
        }
        else if((x1>x2)&&(y1>y2))
        {
            for(int i=x1;i>=x2;i--)
            {
                putpixel(i,y2+38,14);
                putpixel(i,y1,14);
                delay(5);
            }
            for(int i=x1-60;i>=x2+60;i--)
            {
                putpixel(i,y2-22,14);
                delay(5);
            }
            for(int i=x1-220;i>=x2+40;i--)
            {
                putpixel(i,y2+94,14);
                delay(5);
            }
            do{
                for(int i=x1-55;i>=x2+175;i--)
                {
                    putpixel(i,y2+84+d,14);
                    delay(5);
                }d=d+10;
            }while(d<=20);
        }
        //vertical
        int b=0,c=0,e=0,f=0;
        if((y1<y2)&&(x1<x2))
        {
            for(int i=y1+38;i<=y2;i++)
            {
                putpixel(x1,i,14);
                delay(5);
            }
            for(int i=y1+38;i<=y2;i++)
            {
                putpixel(x1+120,i,14);
                delay(5);
            }
            for(int i=y1+38;i<=y2;i++)
            {
                putpixel(x2,i,14);
                delay(5);
            }
            do{
                for(int i=y1+94;i<=y2;i++)
                {
                    putpixel(x1+40+b,i,14);
                    delay(5);
                }b=b+40;
            }while(b<=40);
            do{
                for(int i=y1+84;i<=y2-46;i++)
                {
                    putpixel(x1+175+c,i,14);
                    delay(5);
                }c=c+35;
            }while(c<=70);
        }
        else if((y1<y2)&&(x1>x2))
        {
            for(int i=y1+38;i<=y2;i++)
            {
                putpixel(x2,i,14);
                delay(5);
            }
            for(int i=y1+38;i<=y2;i++)
            {
                putpixel(x2+120,i,14);
                delay(5);
            }
            for(int i=y1+38;i<=y2;i++)
            {
                putpixel(x1,i,14);
                delay(5);
            }
            do{
                for(int i=y1+94;i<=y2;i++)
                {
                    putpixel(x2+40+b,i,14);
                    delay(5);
                }b=b+40;
            }while(b<=40);
            do{
                for(int i=y1+84;i<=y2-46;i++)
                {
                    putpixel(x2+175+c,i,14);
                    delay(5);
                }c=c+35;
            }while(c<=70);
        }
        else if((y1>y2)&&(x1<x2))
        {
            for(int i=y1;i>=y2+38;i--)
            {
                putpixel(x1,i,14);
                delay(5);
            }
            for(int i=y1;i>=y2+38;i--)
            {
                putpixel(x1+120,i,14);
                delay(5);
            }
            for(int i=y1;i>=y2+38;i--)
            {
                putpixel(x2,i,14);
                delay(5);
            }
            do{
                for(int i=y1;i>=y2+94;i--)
                {
                    putpixel(x1+40+e,i,14);
                    delay(5);
                }e=e+40;
            }while(e<=40);
            do{
                for(int i=y1-46;i>=y2+84;i--)
                {
                    putpixel(x1+175+f,i,14);
                    delay(5);
                }f=f+35;
            }while(f<=70);
        }
        else if((y1>y2)&&(x1>x2))
        {
            for(int i=y1;i>=y2+38;i--)
            {
                putpixel(x2,i,14);
                delay(5);
            }
            for(int i=y1;i>=y2+38;i--)
            {
                putpixel(x2+120,i,14);
                delay(5);
            }
            for(int i=y1;i>=y2+38;i--)
            {
                putpixel(x1,i,14);
                delay(5);
            }
            do{
                for(int i=y1;i>=y2+94;i--)
                {
                    putpixel(x2+40+e,i,14);
                    delay(5);
                }e=e+40;
            }while(e<=40);
            do{
                for(int i=y1-46;i>=y2+84;i--)
                {
                    putpixel(x2+175+f,i,14);
                    delay(5);
                }f=f+35;
            }while(f<=70);
        }
        //diagonal
        if((x1<x2)&&(y1<y2))
        {
            a=x1+60;
            b=y1-22;
            c=x2-180;
            d=y2-112;
            e=x2;
            f=y1+38;
            do{
                putpixel(a,b,14);
                putpixel(c,d,14);
                putpixel(e,f,14);
                delay(5);
                a--;
                b++;
                c--;
                d--;
                e--;
                f--;
            }while(a>=50);
        }
        else if((x1>x2)&&(y1<y2))
        {
            a=x2+60;
            b=y1-22;
            c=x1-180;
            d=y2-112;
            e=x1;
            f=y1+38;
            do{
                putpixel(a,b,14);
                putpixel(c,d,14);
                putpixel(e,f,14);
                delay(5);
                a--;
                b++;
                c--;
                d--;
                e--;
                f--;
            }while(a>=50);
        }
        else if((x1>x2)&&(y1>y2))
        {
            a=x2+60;
            b=y2-22;
            c=x1-180;
            d=y1-112;
            e=x1;
            f=y2+38;
            do{
                putpixel(a,b,14);
                putpixel(c,d,14);
                putpixel(e,f,14);
                delay(5);
                a--;
                b++;
                c--;
                d--;
                e--;
                f--;
            }while(a>=50);
        }
        else if((x1<x2)&&(y1>y2))
        {
            a=x1+60;
            b=y2-22;
            c=x2-180;
            d=y1-112;
            e=x2;
            f=y2+38;
            do{
                putpixel(a,b,14);
                putpixel(c,d,14);
                putpixel(e,f,14);
                delay(5);
                a--;
                b++;
                c--;
                d--;
                e--;
                f--;
            }while(a>=50);
        }
    }
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    rumah(50,50,350,200);
    getch();
    closegraph();
    return 0;
}

