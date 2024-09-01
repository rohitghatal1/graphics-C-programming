#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // House structure
    setcolor(CYAN);
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

    // Door
    setcolor(BROWN);
    rectangle(320,350,350,300);
    line(320,350,330,340);
    line(320,300,330,310);
    line(330,340,330,310);
    circle(325,325,2);

    line(350,300,340,310);
    line(340,310,340,340);
    line(340,340,350,350);

    // Garden
    setcolor(GREEN);
    line(280,380,500,380);
    line(280,380,340,450);
    line(500,380,560,450);
    line(340,450,560,450);
    setfillstyle(SOLID_FILL, LIGHTGREEN);
    floodfill(290,390,GREEN);

    //creating person
    setcolor(WHITE);
    circle(250,390,15);
    //eyes
    circle(245,385,3);
    circle(245,384,1);
    circle(255,385,3);
    circle(255,384,1);
    //mouth
    line(245,395,255,395);
    line(245,395,247,398);
    line(255,395,253,398);
    line(247,398,249,400);
    line(253,398,249,400);

    // Grass on garden
    setcolor(GREEN);
    line(330,390,330,400);
    line(325,395,330,399);
    line(330,399,335,395);
    line(350,400,350,410);
    line(350,409,345,403);
    line(350,410,355,403);
    line(370,395,370,405);
    line(370,404,365,400);
    line(370,404,375,400);
    line(420,400,420,415);
    line(420,414,412,408);
    line(420,414,428,408);
    line(490,390,490,410);
    line(490,409,480,400);
    line(490,409,500,400);
    line(460,420,460,440);
    line(460,438,450,425);
    line(460,438,470,425);

    // Shovel
    setcolor(BLACK);
    line(350,430,390,430);
    line(350,435,390,435);
    line(390,430,390,425);
    line(390,435,390,440);
    line(390,425,400,425);
    line(400,425,403,427);
    line(403,427,405,430);
    line(405,430,407,432);
    line(390,440,400,440);
    line(400,440,403,438);
    line(403,438,405,435);
    line(405,435,407,431);
    rectangle(350,428,345,438);

    // Windows
    setcolor(BROWN);
    rectangle(260,320,290,300);
    rectangle(390,320,420,300);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(270,315,BROWN);
    floodfill(395,315,BROWN);
    setcolor(CYAN);
    line(180,250,180,310);
    line(180,310,215,350);
    setcolor(BROWN);
    rectangle(210,220,300,240);
    rectangle(320,220,410,240);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(215,225,BROWN);
    floodfill(325,225,BROWN);
    circle(151,180,5);
    setcolor(CYAN);
    line(135,190,135,260);
    line(135,260,180,310);

    // Road
    setcolor(LIGHTGRAY);
    line(0,90,170,600);
    line(0,90,3,83);
    line(3,83,5,80);
    line(5,80,8,77);
    line(8,77,13,72);
    line(13,72,20,70);
    line(20,70,33,68);
    line(10,90,15,105);
    line(18,110,23,125);
    line(26,130,31,145);
    line(34,150,39,165);
    line(41,170,48,190);
    line(52,200,61,225);
    line(65,235,77,270);
    line(82,280,96,320);
    line(103,335,123,390);
    line(130,410,153,470);
    line(20,90,138,361);
    line(145,380,240,600);

    // Mountains
    setcolor(GREEN);
    line(20,90,70,20);
    line(70,20,75,15);
    line(75,15,80,10);
    line(80,10,90,7);
    line(90,7,100,10);
    line(100,10,105,15);
    line(105,15,170,90);
    line(170,90,220,20);
    line(220,20,225,15);
    line(225,15,230,10);
    line(230,10,240,7);
    line(240,7,250,10);
    line(250,10,255,15);
    line(255,15,320,90);
    line(320,90,370,20);
    line(370,20,375,15);
    line(375,15,380,10);
    line(380,10,390,7);
    line(390,7,400,10);
    line(400,10,405,15);
    line(405,15,470,90);

    //for creating sun
    setcolor(YELLOW);
    circle(500,40,30);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(481,51,YELLOW);

    // Road to house
    setcolor(LIGHTGRAY);
    line(138,361,210,360);
    line(145,380,210,379);

    // Tree next to house
    setcolor(DARKGRAY);
    line(550,380,550,260);
    line(550,380,540,400);
    line(555,410,565,390);
    line(565,390,580,410);
    line(600,410,580,378);
    line(580,378,580,260);
    line(530,400,545,403);
    line(547,403,560,415);
    line(575,420,585,404);
    line(585,404,605,415);
    line(550,260,530,210);
    line(563,255,543,208);
    line(563,255,583,208);
    line(580,260,600,210);
    setcolor(GREEN);
    arc(563,170,5,165,45);
    arc(585,195,280,70,40);
    arc(540,190,100,265,40);
    arc(565,190,250,285,40);
    arc(565,170,240,293,43);
    arc(565,165,60,130,15);

    getch();
}
