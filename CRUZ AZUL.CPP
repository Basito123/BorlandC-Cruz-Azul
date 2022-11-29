#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

int main(void){
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"..//BGI");

setcolor(BLUE);
setfillstyle(1,BLUE);
fillellipse(200,250,140,140);

setcolor(WHITE);
setfillstyle(1,WHITE);
fillellipse(200,250,100,100);

int poly[40];
setcolor(RED);
setfillstyle(1,RED);

poly[0]=150;
poly[1]=200;

poly[2]=150;
poly[3]=300;

poly[4]=250;
poly[5]=300;

poly[6]=250;
poly[7]=200;

fillpoly(4,poly);

setcolor(WHITE);
setfillstyle(1,WHITE);
fillellipse(200,250,40,40);

setcolor(BLUE);
setfillstyle(1,BLUE);
rectangle(190,220,210,280);
floodfill(195+1,225+1,BLUE);

rectangle(170,240,230,260);

floodfill(170+1,240+1,BLUE);
floodfill(220+1,250+1,BLUE);

setcolor(BLUE);
settextstyle(3,0,2);
outtextxy(250-100,200-25,"DEPORTIVO");
outtextxy(250-100,300-3,"CRUZ AZUL");

int estrella[40],r=110,s=45;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella[0]=128-s;
estrella[1]=105+r;

estrella[2]=124-s;
estrella[3]=117+r;

estrella[4]=111-s;
estrella[5]=117+r;

estrella[6]=121-s;
estrella[7]=124+r;

estrella[8]=118-s;
estrella[9]=136+r;

estrella[10]=128-s;
estrella[11]=128+r;

estrella[12]=138-s;
estrella[13]=136+r;

estrella[14]=134-s;
estrella[15]=124+r;

estrella[16]=144-s;
estrella[17]=117+r;

estrella[18]=131-s;
estrella[19]=117+r;


fillpoly(10,estrella);
//estrella 2
int estrella1[40],a=65,b=30;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella1[0]=128-b;
estrella1[1]=105+a;

estrella1[2]=124-b;
estrella1[3]=117+a;

estrella1[4]=111-b;
estrella1[5]=117+a;

estrella1[6]=121-b;
estrella1[7]=124+a;

estrella1[8]=118-b;
estrella1[9]=136+a;

estrella1[10]=128-b;
estrella1[11]=128+a;

estrella1[12]=138-b;
estrella1[13]=136+a;

estrella1[14]=134-b;
estrella1[15]=124+a;

estrella1[16]=144-b;
estrella1[17]=117+a;

estrella1[18]=131-b;
estrella1[19]=117+a;

fillpoly(10,estrella1);

//
int estrella2[40],a1=30,b1=0;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella2[0]=128-b1;
estrella2[1]=105+a1;

estrella2[2]=124-b1;
estrella2[3]=117+a1;

estrella2[4]=111-b1;
estrella2[5]=117+a1;

estrella2[6]=121-b1;
estrella2[7]=124+a1;

estrella2[8]=118-b1;
estrella2[9]=136+a1;

estrella2[10]=128-b1;
estrella2[11]=128+a1;

estrella2[12]=138-b1;
estrella2[13]=136+a1;

estrella2[14]=134-b1;
estrella2[15]=124+a1;

estrella2[16]=144-b1;
estrella2[17]=117+a1;

estrella2[18]=131-b1;
estrella2[19]=117+a1;

fillpoly(10,estrella2);

//
int estrella3[40],a2=13,b2=-40;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella3[0]=128-b2;
estrella3[1]=105+a2;

estrella3[2]=124-b2;
estrella3[3]=117+a2;

estrella3[4]=111-b2;
estrella3[5]=117+a2;

estrella3[6]=121-b2;
estrella3[7]=124+a2;

estrella3[8]=118-b2;
estrella3[9]=136+a2;

estrella3[10]=128-b2;
estrella3[11]=128+a2;

estrella3[12]=138-b2;
estrella3[13]=136+a2;

estrella3[14]=134-b2;
estrella3[15]=124+a2;

estrella3[16]=144-b2;
estrella3[17]=117+a2;

estrella3[18]=131-b2;
estrella3[19]=117+a2;

fillpoly(10,estrella3);

//
int estrella4[40],a3=8,b3=-85;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella4[0]=128-b3;
estrella4[1]=105+a3;

estrella4[2]=124-b3;
estrella4[3]=117+a3;

estrella4[4]=111-b3;
estrella4[5]=117+a3;

estrella4[6]=121-b3;
estrella4[7]=124+a3;

estrella4[8]=118-b3;
estrella4[9]=136+a3;

estrella4[10]=128-b3;
estrella4[11]=128+a3;

estrella4[12]=138-b3;
estrella4[13]=136+a3;

estrella4[14]=134-b3;
estrella4[15]=124+a3;

estrella4[16]=144-b3;
estrella4[17]=117+a3;

estrella4[18]=131-b3;
estrella4[19]=117+a3;

fillpoly(10,estrella4);

//

int estrella5[40],a4=19,b4=-125;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella5[0]=128-b4;
estrella5[1]=105+a4;

estrella5[2]=124-b4;
estrella5[3]=117+a4;

estrella5[4]=111-b4;
estrella5[5]=117+a4;

estrella5[6]=121-b4;
estrella5[7]=124+a4;

estrella5[8]=118-b4;
estrella5[9]=136+a4;

estrella5[10]=128-b4;
estrella5[11]=128+a4;

estrella5[12]=138-b4;
estrella5[13]=136+a4;

estrella5[14]=134-b4;
estrella5[15]=124+a4;

estrella5[16]=144-b4;
estrella5[17]=117+a4;

estrella5[18]=131-b4;
estrella5[19]=117+a4;

fillpoly(10,estrella5);

//
int estrella6[40],a5=43,b5=-158;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella6[0]=128-b5;
estrella6[1]=105+a5;

estrella6[2]=124-b5;
estrella6[3]=117+a5;

estrella6[4]=111-b5;
estrella6[5]=117+a5;

estrella6[6]=121-b5;
estrella6[7]=124+a5;

estrella6[8]=118-b5;
estrella6[9]=136+a5;

estrella6[10]=128-b5;
estrella6[11]=128+a5;

estrella6[12]=138-b5;
estrella6[13]=136+a5;

estrella6[14]=134-b5;
estrella6[15]=124+a5;

estrella6[16]=144-b5;
estrella6[17]=117+a5;

estrella6[18]=131-b5;
estrella6[19]=117+a5;

fillpoly(10,estrella6);
//
int estrella7[40],a6=73,b6=-180;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella7[0]=128-b6;
estrella7[1]=105+a6;

estrella7[2]=124-b6;
estrella7[3]=117+a6;

estrella7[4]=111-b6;
estrella7[5]=117+a6;

estrella7[6]=121-b6;
estrella7[7]=124+a6;

estrella7[8]=118-b6;
estrella7[9]=136+a6;

estrella7[10]=128-b6;
estrella7[11]=128+a6;

estrella7[12]=138-b6;
estrella7[13]=136+a6;

estrella7[14]=134-b6;
estrella7[15]=124+a6;

estrella7[16]=144-b6;
estrella7[17]=117+a6;

estrella7[18]=131-b6;
estrella7[19]=117+a6;

fillpoly(10,estrella7);

//
int estrella8[40],a7=110,b7=-193;
setcolor(WHITE);
setfillstyle(1,WHITE);

estrella8[0]=128-b7;
estrella8[1]=105+a7;

estrella8[2]=124-b7;
estrella8[3]=117+a7;

estrella8[4]=111-b7;
estrella8[5]=117+a7;

estrella8[6]=121-b7;
estrella8[7]=124+a7;

estrella8[8]=118-b7;
estrella8[9]=136+a7;

estrella8[10]=128-b7;
estrella8[11]=128+a7;

estrella8[12]=138-b7;
estrella8[13]=136+a7;

estrella8[14]=134-b7;
estrella8[15]=124+a7;

estrella8[16]=144-b7;
estrella8[17]=117+a7;

estrella8[18]=131-b7;
estrella8[19]=117+a7;

fillpoly(10,estrella8);

getch();
closegraph();
return 0;
}
