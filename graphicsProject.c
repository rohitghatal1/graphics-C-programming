#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

line(150,150,400,150);

line(150,150,130,200);
line(150,150,180,210);

line(400,150,430,210);
line(180,210,430,210);

line(180,210,180,250);
line(430,210,430,250);
line(180,250,430,250);


line(180,250,210,280);
line(430,250,460,280);
line(210,280,460,280);

line(215,280,215,350);
line(455,280,455,350);
line(215,350,455,350);

//for door
rectangle(320,350,350,300);

//for windows
rectangle(260,320,290,300);
rectangle(390,320,420,300);
line(180,250,180,310);
line(180,310,215,350);

//for windows on second floor
rectangle(210,220,300,240);
rectangle(320,220,410,240);

//for circle on top side of house
circle(151,180,5);

line(135,190,135,260);
line(135,260,180,310);

//for creating road
line(0,90,170,600);
line(20,90,240,600);

//for creating mountains
line(20,90,70,20);
line(70,20,75,15);
line(75,15,80,10);
line(80,10,90,7);
line(90,7,100,10);
line(100,10,105,15);
line(105,15,170,90);

//second mountain
line(170,90,220,20);
line(220,20,225,15);
line(225,15,230,10);
line(230,10,240,7);
line(240,7,250,10);
line(250,10,255,15);
line(255,15,320,90);

//third mountain
line(320,90,370,20);
line(370,20,375,15);
line(375,15,380,10);
line(380,10,390,7);
line(390,7,400,10);
line(400,10,405,15);
line(405,15,470,90);
getch();
}