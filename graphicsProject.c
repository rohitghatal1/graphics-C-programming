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

line(135,190,135,260);
line(135,260,180,310);
getch();
}