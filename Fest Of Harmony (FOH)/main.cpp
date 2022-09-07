

///NOTE:PLEASE ENSURE THAT ALL OF THE INCLUDED SOUNDS ARE AVAILABLE IN YOUR PROJECT [ BIN -> DEBUG] FOLDER.
///ALL RIGHTS REDERVED BY @TEAMHYDRA ©2021
///"THANK YOU FOR BEING WITH US."-TEAM_HYDRA


/////////////////////////included libraries/////////////////////////////
#include<GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include<conio.h>
#include <windows.h>
#include <cstdio>
#include <math.h>
using namespace std;

////////////////////////////Messages///////////////////////////////////////
char text[] = "DO YOU WANT TO PLAY? PRESS P";
char text2[] =" COFFEE SHOP ";
char text3[]= " GAME START";
char text5[]= "ICE CREAM";
char pop[]=" POP CORN";



char buffer2 [50];
char buffer [50];


const int font1=(int)GLUT_BITMAP_TIMES_ROMAN_24;
const int font2=(int)GLUT_BITMAP_HELVETICA_18 ;
const int font3=(int)GLUT_BITMAP_8_BY_13;


/////////////////////////////////variables///////////////////////////////
int count1=0;
int start;
int ending=0;

int point=0;

int N=0;
int horn=1;

int linexc=359;
int lineyc=359;
int linexoc=180;
int lineyoc=180;

int linexc1=269;
int lineyc1=269;
int linexoc1=90;
int lineyoc1=90;

int linexc2=226;
int lineyc2=226;
int linexoc2=46;
int lineyoc2=46;

int linexc3=315;
int lineyc3=315;
int linexoc3=136;
int lineyoc3=136;

int linexc4=337;
int lineyc4=337;
int linexoc4=158;
int lineyoc4=158;

int linexc5=293;
int lineyc5=293;
int linexoc5=114;
int lineyoc5=114;

int linexc6=248;
int lineyc6=248;
int linexoc6=68;
int lineyoc6=68;

int linexc7=204;
int lineyc7=204;
int linexoc7=24;
int lineyoc7=24;

int xmas[360];
int ymas[360];

int seatxc=359;
int seatyc=359;
int seatxoc=180;
int seatyoc=180;

int seatxc1=269;
int seatyc1=269;
int seatxoc1=90;
int seatyoc1=90;

int seatxc2=226;
int seatyc2=226;
int seatxoc2=46;
int seatyoc2=46;

int seatxc3=315;
int seatyc3=315;
int seatxoc3=136;
int seatyoc3=136;

float cloudshift1=0;
float cloudshift2=0;
float cloudshift3=0;
float cloudshift4=0;
float cloudshift5=0;

float barshift1 =0;
float barshift2 =0;
float barshift3 =0;
float barshift4 =0;
float barshift5 =0;
float barshift6 =0;
float barshift7 =0;
float barshift8 =0;
float barshift9 =0;
float barshift10 =0;
float barshift11 =0;
float barshift12 =40;

float shiftcar1=0;
float shiftcar2=0;
float shiftcar3=0;
float shiftcar4=0;


float byBalloonMovex = 0;
float byBalloonMovey = 0;
float bbBalloonMovey = 0;
float bbBalloonMovex = 0;
float dBalloonMovex = 0;
float dBalloonMovey = -900;
float bmBalloonMovex = 0;
float bmBalloonMovey = -650;
float lcBalloonMovey = -500;
float lcBalloonMovex = 0;
float stBalloonMovex = 0;
float stBalloonMovey = 0;
float oBalloonMovex = 0;
float oBalloonMovey = 0;
float bBalloonMovex = 0;
float bBalloonMovey = 0;
float prBalloonMovex = 0;
float prBalloonMovey = 0;
float pBalloonMovex = 0;
float pBalloonMovey = 0;
float dbBalloonMovex = 0;
float dbBalloonMovey = 0;
float bcBalloonMovex = 0;
float bcBalloonMovey = 0;
float rcBalloonMovex = 0;
float rcBalloonMovey = 0;

float birdmovex= 150;
float birdmovey = 0;
float bbirdmovex= 150;
float bbirdmovey = 0;

float rainspeed=0.0;

float snowspeed=0.0;

float clrshift = -700;

float bshift = 0;
float lrshift = 0;
float udshift = 0;

float tri1 = 15;
float tri2 = 10;
float tri3 = 12;
float tri4 = 5;
float tri5 = 14;

float p1=0;
float p2=0;
float p3=0;
float p4=0;
float p5=0;

float theta = 0;


/////////////////////////////////flags//////////////////////////////////////
bool raincondition=false;
bool snowcondition=false;
bool gamecondition=false;
bool gamevisiblecondition=false;
bool endcondition=false;
bool lostcondition=false;
bool wincondition=false;
bool soundcondition=false;
bool endflag=false;

bool sunrisecondition=true;
bool morningcondition=false;
bool nooncondition=false;
bool afternooncondition=false;
bool eveningcondition=false;
bool sunsetcondition=false;
bool nightcondition=false;
bool ballooncondition=false;
bool chorkicondition = false;
bool carmove = false;


bool onOff;
bool rleft = false;
bool rright = false;
bool cleft = false;
bool cright = false;
bool fire = false;

bool sound=false;


/////////////////gotoXY and color/////////////////

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;



void gotoXY(int x, int y)
{
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console,CursorPosition);
}
void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}



void renderBitmapString(float x, float y, void *font,const char *string)
{
    const char *c;
    glRasterPos2f(x, y);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}



///////////////////////////////// UPDATE ////////////////////////////
void update(int value)
{


if(count1==0)
{
sunrisecondition=true;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;

 if(soundcondition)
 {
  sound=true;
 }


}


if(count1==300)
{
sunrisecondition=false;
 morningcondition=true;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;

if(soundcondition)
 {
  sound=true;
 }



}



if(count1==600)
{
sunrisecondition=false;
 morningcondition=false;
 nooncondition=true;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;

if(soundcondition)
 {
  sound=true;
 }


}



if(count1==900)
{
sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=true;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;

 if(soundcondition)
 {
  sound=true;
 }



}



if(count1==1200)
{
sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=true;
 sunsetcondition=false;
 nightcondition=false;

 if(soundcondition)
 {
  sound=true;
 }



}


if(count1==1500)
{
sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=true;
 nightcondition=false;

 if(soundcondition)
 {
  sound=true;
 }


}


if(count1==1800)
{
sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=true;

 if(soundcondition)
 {
  sound=true;
 }




}

if(sound)
{

  if(  (0<=count1 && count1<300) || (1500<=count1 && count1<1800)  )
   {
    PlaySound(TEXT("riseset.wav"), NULL, SND_FILENAME | SND_ASYNC);

    }

if(  (1800<=count1 && count1<2100) )
    {
    PlaySound(TEXT("night.wav"), NULL, SND_FILENAME | SND_ASYNC);


    }

   if(  (1200<=count1 && count1<1500) )
    {
    PlaySound(TEXT("evening.wav"), NULL, SND_FILENAME | SND_ASYNC);


    }


 if(  (600<=count1 && count1<900) )
    {
    PlaySound(TEXT("noon.wav"), NULL, SND_FILENAME | SND_ASYNC);


    }


if(  (300<=count1 && count1<600) || (900<=count1 && count1<1200) )
    {
    PlaySound(TEXT("aftermorning.wav"), NULL, SND_FILENAME | SND_ASYNC);

    }


sound=false;

}



if(count1==2100)
{

   count1=-1;

}

count1++;

if(gamecondition)
{

if(start >=80)
{

    gamevisiblecondition=true;

}

start++;

}

if(endcondition)
{

if(ending >=100)
{

    endcondition=false;
     wincondition=false;

}

ending++;

}


////////////////////////////lets gaming//////////////////////////////
if(gamevisiblecondition)
{

tri1 -= 1;
	if (tri1 <-210)
    {
        tri1 = 15;
        point-=5;
    }

tri2 -= 1.5;
	if (tri2 <-210)
    {
        tri2 = 10;
         point-=3;
    }

   tri3 -=2 ;
	if (tri3 <-210)
    {
        tri3 = 12;
         point-=2;
    }

    tri4 -= 1.5;
	if (tri4 <-210)
    {
        tri4 = 2;
         point-=3;
    }

    tri5 -= 1;
	if (tri5 <-210)
    {
        tri5 = 14;
         point-=5;
    }

		 p1=440+lrshift;

if(p1>253 && p1<287)
{

  if(tri1+150<bshift)
     {

         if(bshift<tri1+195)
         {

            tri1=15;
            point++;

         }

     }
}

 p2=440+lrshift;

if(p2>336 && p2<370)
{

  if(tri2+150<bshift)
     {

         if(bshift<tri2+195)
         {

            tri2=10;
            point++;

         }

     }
}


 p3=440+lrshift;

if(p3>419 && p3<453)
{

  if(tri3+150<bshift)
     {

         if(bshift<tri3+195)
         {

            tri3=12;
            point++;

         }

     }
}


 p4=440+lrshift;

if(p4>502 && p4<536)
{

  if(tri4+150<bshift)
     {

         if(bshift<tri4+195)
         {

            tri4=5;
            point++;

         }

     }
}


 p5=440+lrshift;

if(p5>585 && p5<619)
{

  if(tri5+150<bshift)
     {

         if(bshift<tri5+195)
         {

            tri5=10;
            point++;

         }

     }
}
}


if(point<-24)
{

if(gamevisiblecondition && !endcondition)
{

if(N==0)
{

  gamecondition=false;
     gamevisiblecondition=false;
     endcondition=true;
    start=0;
     ending=0;
     PlaySound(TEXT("game_end.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

 N++;

   if(N>2)
   {
       N=1;
   }

    }


}

if(point>99)
{


if(gamevisiblecondition && !endcondition)
{
if(N==0)
{

    wincondition=true;
  gamecondition=false;
     gamevisiblecondition=false;
     endcondition=true;
    start=0;
     ending=0;
     PlaySound(TEXT("win.wav"), NULL, SND_FILENAME | SND_ASYNC);

}

 N++;
   if(N>2)
   {

       N=1;

   }
    }


}
//////////////////////balloon move/////////////////////////////////////

if(ballooncondition)
{

 lcBalloonMovey += 4;//1st


if(lcBalloonMovey>=-50 && lcBalloonMovey<=250)
{
    lcBalloonMovex-=2;
}
  if(lcBalloonMovey>300 && lcBalloonMovey<=650)
{
    lcBalloonMovex+=2;
}
if(lcBalloonMovey>700 && lcBalloonMovey<=900)
{
    lcBalloonMovex-=2;
}


///////////////////////////////////////////
    dbBalloonMovey += 5;//2nd


    if(dbBalloonMovey>=-100 && dbBalloonMovey<=200)
{
    dbBalloonMovex-=3;
}
  if(dbBalloonMovey>250 && dbBalloonMovey<=550)
{
    dbBalloonMovex+=2;
}
 if(dbBalloonMovey>600 && dbBalloonMovey<=850)
{
    dbBalloonMovex-=2;
}

/////////////////////////////////////////////

    bmBalloonMovey += 5;//3rd


    if(bmBalloonMovey>=-250 && bmBalloonMovey<=100)
{
    bmBalloonMovex-=2;
}
  if(bmBalloonMovey>150 && bmBalloonMovey<=700)
{
    bmBalloonMovex+=3;
}
if(bmBalloonMovey>700 && bmBalloonMovey<=800)
{
    bmBalloonMovex-=2;
}


///////////////////////////////////////////

    stBalloonMovey += 6;//4th


    if(stBalloonMovey>=-100 && stBalloonMovey<=100)
{
    stBalloonMovex+=2;
}
  if(stBalloonMovey>200 && stBalloonMovey<=500)
{
    stBalloonMovex-=2;
}
if(stBalloonMovey>600 && stBalloonMovey<=800)
{
    stBalloonMovex+=2;
}

////////////////////////////////////

    prBalloonMovey += 5;//5th


if(prBalloonMovey>=-300 && prBalloonMovey<=600)
{
    prBalloonMovex-=2;
}
if(prBalloonMovey>300 && prBalloonMovey<=500)
{
    prBalloonMovex+=2;
}
if(prBalloonMovey>600 && prBalloonMovey<=800)
{
    prBalloonMovex-=2;
}

////////////////////////////////////////

    pBalloonMovey += 5;//6th


if(pBalloonMovey>-200 && pBalloonMovey<=0)
{
    pBalloonMovex-=3;
}
if(pBalloonMovey>0 && pBalloonMovey<=300)
{
    pBalloonMovex+=3;
}
if(pBalloonMovey>400 && pBalloonMovey<=900)
{
    pBalloonMovex-=2;
}
/////////////////////////////////////////////

bbBalloonMovey += 5;//7th


    if(bbBalloonMovey>=-200 && bbBalloonMovey<=200)
{
    bbBalloonMovex+=2;
}
  if(bbBalloonMovey>300 && bbBalloonMovey<=500)
{
    bbBalloonMovex-=2;
}
 if(bbBalloonMovey>600 && bbBalloonMovey<=900)
{
    bbBalloonMovex+=1;
}



/////////////////////////////////////

oBalloonMovey += 5;//8th


    if(oBalloonMovey>=-300 && oBalloonMovey<=200)
{
    oBalloonMovex+=2;
}
if(oBalloonMovey>200 && oBalloonMovey<=500)
{
    oBalloonMovex-=2;
}
if(oBalloonMovey>500 && oBalloonMovey<=800)
{
    oBalloonMovex+=1;
}


//////////////////////////////////////

    bBalloonMovey += 6;//9th


    if(bBalloonMovey>-100 && bBalloonMovey<=900)
{
    bBalloonMovex+=2;
}
if(bBalloonMovey>600 && bBalloonMovey<=800)
{
    bBalloonMovex-=2;
}




/////////////////////////////////////////////////
    rcBalloonMovey += 4;//11th


    if(rcBalloonMovey>=-300 && rcBalloonMovey<=00)
{
    rcBalloonMovex+=4;
}
  if(rcBalloonMovey>100 && rcBalloonMovey<=600)
{
    rcBalloonMovex-=3;
}
if(rcBalloonMovey>600 && rcBalloonMovey<=1000)
{
    rcBalloonMovex+=2;
}

/////////////////////////////////////////////////
    byBalloonMovey += 5;//12th


    if(byBalloonMovey>=-200 && byBalloonMovey<=200)
{
    byBalloonMovex-=1;
}
  if(byBalloonMovey>350 && byBalloonMovey<=500)
{
    byBalloonMovex+=2;
}
 if(byBalloonMovey>650 && byBalloonMovey<=900)
{
    byBalloonMovex-=2;
}

/////////////////////////////////////////////

bcBalloonMovey += 4.5;//13th


    if(bcBalloonMovey>=-150 && bcBalloonMovey<=100)
{
    bcBalloonMovex-=2;
}
  if(bcBalloonMovey>200 && bcBalloonMovey<=400)
{
    bcBalloonMovex+=2;
}


}

////////////////////////////////////////////////cloud move/////////////////////////////////////
	cloudshift1 += 2;

	if (cloudshift1 >=1560)
    {
        cloudshift1 = -370;
    }

    cloudshift2 += 3;

	if (cloudshift2 >=1300)
    {
        cloudshift2 = -720;
    }


    cloudshift3 -= 3;

	if (cloudshift3 <=-900)
    {
        cloudshift3 = 1200;
    }

    cloudshift4 -= 2;

	if (cloudshift4 <=-1600)
    {
        cloudshift4 = 400;
    }

    cloudshift5 += 4;

	if (cloudshift5 >=800)
    {
        cloudshift5 = -1240;
    }

    shiftcar1 += 3;

	if (shiftcar1 >1760)
    {
        shiftcar1 = -170;
    }


    shiftcar3 += 3;

	if (shiftcar3 >=800)
    {
        shiftcar3 = -1000;
    }

    shiftcar4 -= 3;

	if (shiftcar4 <=-500)
    {
        shiftcar4 = 1410;
    }

    barshift1 += 3;

	if (barshift1 >=440)
    {
        barshift1 = 0;
    }

    barshift2 += 3;

	if (barshift2 >=400)
    {
        barshift2 = -40;
    }
    barshift3 += 3;

	if (barshift3 >=360)
    {
        barshift3 = -80;
    }
    barshift4 += 3;

	if (barshift4 >=320)
    {
        barshift4 = -120;
    }
    barshift5 += 3;

	if (barshift5 >=280)
    {
        barshift5 = -160;
    }
    barshift6 += 3;

	if (barshift6 >=240)
    {
        barshift6 = -200;
    }
    barshift7 += 3;

	if (barshift7 >=200)
    {
        barshift7 = -240;
    }
    barshift8 += 3;

	if (barshift8 >=160)
    {
        barshift8 = -280;
    }
    barshift9 += 3;

	if (barshift9 >=120)
    {
        barshift9 = -320;
    }
    barshift10 += 3;

	if (barshift10 >=80)
    {
        barshift10 = -360;
    }
    barshift11 += 3;

	if (barshift11 >=40)
    {
        barshift11 = -400;
    }

    if(barshift12>0)
    {

        barshift12= -440;

    }

    barshift12 += 3;



glutPostRedisplay();
glutTimerFunc(35, update, 0);
}



void bird()
{
    //////////////////////////////bird///////////////////////////////

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(720,575);
glVertex2i(700,600);
glVertex2i(720,585);
glVertex2i(740,600);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(745,600);
glVertex2i(725,625);
glVertex2i(745,610);
glVertex2i(765,625);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(770,605);
glVertex2i(750,630);
glVertex2i(770,615);
glVertex2i(790,630);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(770,575);
glVertex2i(750,600);
glVertex2i(770,585);
glVertex2i(790,600);
glEnd();

///////////////////////////

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(607,675);
glVertex2i(585,700);
glVertex2i(606,685);
glVertex2i(630,700);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(637,665);
glVertex2i(615,690);
glVertex2i(636,675);
glVertex2i(660,690);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(667,680);
glVertex2i(645,705);
glVertex2i(666,690);
glVertex2i(690,705);
glEnd();

///////////////////////////

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(40,765);
glVertex2i(20,790);
glVertex2i(40,775);
glVertex2i(60,790);
glEnd();



glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(1120,875);
glVertex2i(1100,900);
glVertex2i(1120,885);
glVertex2i(1140,900);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(1070,825);
glVertex2i(1050,850);
glVertex2i(1070,835);
glVertex2i(1090,850);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(1520,775);
glVertex2i(1500,800);
glVertex2i(1520,785);
glVertex2i(1540,800);
glEnd();

///////////////////////////////

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(345,800);
glVertex2i(325,825);
glVertex2i(345,810);
glVertex2i(365,825);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glPointSize(20.0);
glVertex2i(485,825);
glVertex2i(465,850);
glVertex2i(485,835);
glVertex2i(505,850);
glEnd();

}



void cloud1()
{

float theta;
    /////////////////////////////////shadow////////////////////////
glColor3ub (220,220,220);

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(235+28*cos(theta),778+27*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(282+25*cos(theta),768+22*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(315+37*cos(theta),793+36*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(355+26*cos(theta),783+20*sin(theta));
}
glEnd();

//////////////////////////1//////////////////////////////

glColor3ub (240,248,255);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(232+28*cos(theta),785+28*sin(theta));
}
glEnd();

///////////////////////2///////////////////////////////

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(265+31*cos(theta),810+35*sin(theta));
}
glEnd();

//////////////////////////3//////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(315+37*cos(theta),800+36*sin(theta));
}
glEnd();

/////////////////////////4//////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(355+26*cos(theta),790+20*sin(theta));
}
glEnd();

/////////////////////////5//////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(282+25*cos(theta),775+22*sin(theta));
}
glEnd();
}



void cloud2()
{

float theta;
    /////////////////////////////////shadow//////////////////////////
glColor3ub (220,220,220);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(597+26*cos(theta),733+25*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(640+38*cos(theta),742+47*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(680+37*cos(theta),732+30*sin(theta));
}
glEnd();

/////////////////////////////////1////////////////////////////
glColor3ub (240,248,255);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(595+28*cos(theta),740+25*sin(theta));
}
glEnd();

///////////////////////////////2///////////////////////////////

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(640+38*cos(theta),749+47*sin(theta));
}
glEnd();

///////////////////////////////3///////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(680+37*cos(theta),738+30*sin(theta));
}
glEnd();

}


void cloud3()
{

float theta;
///////////////////////////shadow////////////////////////////////
glColor3ub (220,220,220);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(642+30*cos(theta),722+25*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(685+42*cos(theta),733+38*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(730+37*cos(theta),755+48*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(770+37*cos(theta),721+30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(820+27*cos(theta),728+25*sin(theta));
}
glEnd();

////////////////////////////1///////////////////////////
glColor3ub (240,248,255);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(640+32*cos(theta),728+25*sin(theta));
}
glEnd();

///////////////////////2///////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(685+42*cos(theta),740+38*sin(theta));
}
glEnd();

/////////////////////////////3////////////////////////////

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(730+37*cos(theta),760+48*sin(theta));
}
glEnd();

//////////////////////////////4//////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(780+32*cos(theta),760+28*sin(theta));
}
glEnd();

/////////////////////////5//////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(820+27*cos(theta),735+25*sin(theta));
}
glEnd();

//////////////////////6///////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(770+37*cos(theta),728+30*sin(theta));
}
glEnd();
}


void cloud4()
{
float theta;

        /////////////////////////////////shadow////////////////////////
glColor3ub (220,220,220);

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1403+22*cos(theta),778+24*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1436+30*cos(theta),780+32*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1484+32*cos(theta),793+33*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1524+21*cos(theta),783+17*sin(theta));
}
glEnd();
//////////////////////////1//////////////////////////////

glColor3ub (240,248,255);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1400+25*cos(theta),785+25*sin(theta));
}
glEnd();

///////////////////////2///////////////////////////////

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1435+32*cos(theta),810+32*sin(theta));
}
glEnd();

//////////////////////////3//////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1483+34*cos(theta),800+33*sin(theta));
}
glEnd();

/////////////////////////4//////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1523+23*cos(theta),790+17*sin(theta));
}
glEnd();

/////////////////////////5//////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1435+25*cos(theta),775+20*sin(theta));
}
glEnd();


}


void cloud5()
{

float theta;
////////////////////////shadow///////////////////////

glColor3ub (220,220,220);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1038+23*cos(theta),761+23*sin(theta));
}
glEnd();



glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1132+27*cos(theta),756+21*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1085+32*cos(theta),750+25*sin(theta));
}
glEnd();

////////////////////////////1///////////////////////////
glColor3ub (240,248,255);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1036+25*cos(theta),768+23*sin(theta));
}
glEnd();

///////////////////////2///////////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1066+27*cos(theta),788+30*sin(theta));
}
glEnd();

/////////////////////////////3////////////////////////////

glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1109+28*cos(theta),779+27*sin(theta));
}
glEnd();

//////////////////////////////4//////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1135+27*cos(theta),763+21*sin(theta));
}
glEnd();

/////////////////////////5//////////////////////////
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1086+32*cos(theta),757+25*sin(theta));
}
glEnd();


}


void seat(int cx, int cy)
{
    float theta;

glColor3ub (166,214,8);
glLineWidth(5);
glBegin(GL_LINE_STRIP);
glVertex2f(cx-40,cy-30);
glVertex2f(cx,cy);
glVertex2f(cx+40,cy-30);
glEnd();

glColor3ub (139,69,19);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f(cx-30,cy-25);
glVertex2f(cx-30,cy-70);
glVertex2f(cx+30,cy-25);
glVertex2f(cx+30,cy-70);
glEnd();

glColor3ub (254,254,51);
glBegin(GL_QUADS);
glVertex2f(cx-35,cy-40);
glVertex2f(cx-35,cy-70);
glVertex2f(cx-10,cy-70);///+25
glVertex2f(cx-10,cy-40);
glEnd();

glColor3ub (254,254,51);
glBegin(GL_QUADS);
glVertex2f(cx+10,cy-40);
glVertex2f(cx+10,cy-70);
glVertex2f(cx+35,cy-70);///+25
glVertex2f(cx+35,cy-40);
glEnd();


glColor3ub (0,56,168);
glBegin(GL_QUADS);
glVertex2f(cx-35,cy-70);
glVertex2f(cx-35,cy-80);
glVertex2f(cx+35,cy-80);
glVertex2f(cx+35,cy-70);
glEnd();

glColor3ub (255,0,0);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f(cx-35,cy-40);
glVertex2f(cx-10,cy-40);
glVertex2f(cx+10,cy-40);
glVertex2f(cx+35,cy-40);
glVertex2f(cx-10,cy-40);
glVertex2f(cx-10,cy-70);
glVertex2f(cx+10,cy-40);
glVertex2f(cx+10,cy-70);
glEnd();

glColor3ub (139,69,19);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(cx+6*cos(theta),cy+6*sin(theta));//1270,910
}
glEnd();

}

void chorki2()
{
///////////////////////////stand/////////////////////////
glColor3ub (255,211,0);

glBegin(GL_POLYGON);
glVertex2f(1090,390);
glVertex2f(1160,390);
glVertex2f(1275,710);
glVertex2f(1260,710);
glEnd();

glBegin(GL_POLYGON);
glVertex2f(1390,390);
glVertex2f(1460,390);
glVertex2f(1280,710);
glVertex2f(1265,710);
glEnd();
//////////////////////////////////////////////////////////

glColor3ub (218,138,103);//218,138,103
glBegin(GL_TRIANGLES);
glVertex2f(1090,390);
glVertex2f(1175,430);
glVertex2f(1144,492);

glVertex2f(1144,492);
glVertex2f(1205,513);
glVertex2f(1186,573);

glVertex2f(1186,573);
glVertex2f(1233,590);
glVertex2f(1218,632);

glVertex2f(1218,632);
glVertex2f(1254,650);
glVertex2f(1243,682);

//////////////////////////////////////////////////////

glVertex2f(1460,390);
glVertex2f(1374,430);
glVertex2f(1403,492);

glVertex2f(1403,492);
glVertex2f(1342,513);
glVertex2f(1357,573);

glVertex2f(1357,573);
glVertex2f(1310,590);
glVertex2f(1324,632);

glVertex2f(1324,632);
glVertex2f(1288,650);
glVertex2f(1296,682);
glEnd();

////////////////////////////////////////////////////////////////
glColor3ub (136,45,23);
glBegin(GL_QUADS);
glVertex2f(1080,405);
glVertex2f(1070,390);
glVertex2f(1480,390);
glVertex2f(1470,405);
glEnd();


//////////////////////////////////////////////////////////////////////////
if(!chorkicondition)
{

glColor3ub (255,117,24);
glEnable(GL_LINE_SMOOTH);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2f(1460,720);
glVertex2f(1075,720);
glEnd();

glBegin(GL_LINES);
glVertex2f(1270,910);
glVertex2f(1270,530);
glEnd();

glBegin(GL_LINES);
glVertex2f(1135,855);
glVertex2f(1405,585);
glEnd();

glBegin(GL_LINES);
glVertex2f(1405,855);
glVertex2f(1135,585);
glEnd();
////////////////////////////////////////////////////////////

glColor3ub (202,224,133);
glBegin(GL_LINES);
glVertex2f(1450,795);
glVertex2f(1090,645);
glEnd();

glBegin(GL_LINES);
glVertex2f(1450,645);
glVertex2f(1090,795);
glEnd();

glBegin(GL_LINES);
glVertex2f(1345,545);
glVertex2f(1195,895);
glEnd();

glBegin(GL_LINES);
glVertex2f(1345,895);
glVertex2f(1195,545);
glEnd();


}
if(chorkicondition)
{

glColor3ub (255,117,24);
glEnable(GL_LINE_SMOOTH);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2f(xmas[linexc],ymas[lineyc]);
glVertex2f(xmas[linexoc],ymas[lineyoc]);

glEnd();



linexc--;
lineyc--;

linexoc--;
lineyoc--;
if(linexc<0)
{
    linexc=359;
    lineyc=359;
}

if(linexoc<0)
{
    linexoc=359;
    lineyoc=359;
}

glBegin(GL_LINES);
glVertex2f(xmas[linexc1],ymas[lineyc1]);
glVertex2f(xmas[linexoc1],ymas[lineyoc1]);
glEnd();
linexc1--;
lineyc1--;

linexoc1--;
lineyoc1--;
if(linexc1<0)
{
    linexc1=359;
    lineyc1=359;
}

if(linexoc1<0)
{
    linexoc1=359;
    lineyoc1=359;
}


glColor3ub (255,117,24);
glBegin(GL_LINES);
glVertex2f(xmas[linexc2],ymas[lineyc2]);
glVertex2f(xmas[linexoc2],ymas[lineyoc2]);
glEnd();
linexc2--;
lineyc2--;

linexoc2--;
lineyoc2--;
if(linexc2<0)
{
    linexc2=359;
    lineyc2=359;
}

if(linexoc2<0)
{
    linexoc2=359;
    lineyoc2=359;
}



glColor3ub (255,117,24);
glBegin(GL_LINES);
glVertex2f(xmas[linexc3],ymas[lineyc3]);
glVertex2f(xmas[linexoc3],ymas[lineyoc3]);

glEnd();
linexc3--;
lineyc3--;

linexoc3--;
lineyoc3--;
if(linexc3<0)
{
    linexc3=359;
    lineyc3=359;
}

if(linexoc3<0)
{
    linexoc3=359;
    lineyoc3=359;
}


glColor3ub (202,224,133);

glBegin(GL_LINES);
glVertex2f(xmas[linexc4],ymas[lineyc4]);
glVertex2f(xmas[linexoc4],ymas[lineyoc4]);
glEnd();

linexc4--;
lineyc4--;

linexoc4--;
lineyoc4--;
if(linexc4<0)
{
    linexc4=359;
    lineyc4=359;
}

if(linexoc4<0)
{
    linexoc4=359;
    lineyoc4=359;
}


glColor3ub (202,224,133);
glBegin(GL_LINES);
glVertex2f(xmas[linexc5],ymas[lineyc5]);
glVertex2f(xmas[linexoc5],ymas[lineyoc5]);
glEnd();
linexc5--;
lineyc5--;

linexoc5--;
lineyoc5--;
if(linexc5<0)
{
    linexc5=359;
    lineyc5=359;
}

if(linexoc5<0)
{
    linexoc5=359;
    lineyoc5=359;
}

glColor3ub (202,224,133);
glBegin(GL_LINES);
glVertex2f(xmas[linexc6],ymas[lineyc6]);
glVertex2f(xmas[linexoc6],ymas[lineyoc6]);
glEnd();
linexc6--;
lineyc6--;

linexoc6--;
lineyoc6--;
if(linexc6<0)
{
    linexc6=359;
    lineyc6=359;
}

if(linexoc6<0)
{
    linexoc6=359;
    lineyoc6=359;
}


glColor3ub (202,224,133);
glBegin(GL_LINES);
glVertex2f(xmas[linexc7],ymas[lineyc7]);
glVertex2f(xmas[linexoc7],ymas[lineyoc7]);
glEnd();
linexc7--;
lineyc7--;

linexoc7--;
lineyoc7--;
if(linexc7<0)
{
    linexc7=359;
    lineyc7=359;
}

if(linexoc7<0)
{
    linexoc7=359;
    lineyoc7=359;
}
}

    ///////////////big circle////////////////////
float theta;
glColor3ub (242,0,60);

glEnable(GL_LINE_SMOOTH);
glLineWidth(15);
int xb,yb;
glBegin(GL_LINE_LOOP);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    xb=1270+190*cos(theta);
    yb=720+190*sin(theta);

    xmas[i]=xb;
    ymas[i]=yb;
    glVertex2f(xb,yb);
}
glEnd();


////////////////////////small circle///////////////////////

glColor3ub (255,253,208);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1270+47*cos(theta),720+47*sin(theta));
}
glEnd();

//////////////////////small circle//////////////////////
glColor3ub (50,74,178);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1270+25*cos(theta),720+25*sin(theta));
}
glEnd();

///////////////////small circle/////////////////////////
glColor3ub (139,190,27);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1270+20*cos(theta),720+20*sin(theta));
}
glEnd();

//////////////////////////// big circle color /////////////////////////

glColor3ub (242,0,60);

glEnable(GL_LINE_SMOOTH);
glLineWidth(15);
glBegin(GL_LINE_LOOP);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1270+190*cos(theta),720+190*sin(theta));
}
glEnd();

/////////////////////////// small line in big circle color ////////////////

glColor3ub (255,235,205);

glEnable(GL_LINE_SMOOTH);
glLineWidth(4);
glBegin(GL_LINE_LOOP);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(1270+150*cos(theta),720+150*sin(theta));
}
glEnd();

//////////////////////////////////////////////////////

if(!chorkicondition)
{
seat(xmas[359],ymas[359]);
seat(xmas[90],ymas[90]);
seat(xmas[180],ymas[180]);
seat(xmas[270],ymas[270]);
seat(xmas[45],ymas[45]);
seat(xmas[135],ymas[135]);
seat(xmas[225],ymas[225]);
seat(xmas[315],ymas[315]);
}

if(chorkicondition)
{

seat(xmas[seatxc],ymas[seatyc]);
seat(xmas[seatxoc],ymas[seatyoc]);


seatxc--;
seatyc--;

seatxoc--;
seatyoc--;
if(seatxc<0)
{
    seatxc=359;
    seatyc=359;
}

if(seatxoc<0)
{
    seatxoc=359;
    seatyoc=359;
}

seat(xmas[seatxc1],ymas[seatyc1]);
seat(xmas[seatxoc1],ymas[seatyoc1]);


seatxc1--;
seatyc1--;

seatxoc1--;
seatyoc1--;
if(seatxc1<0)
{
    seatxc1=359;
    seatyc1=359;
}

if(seatxoc1<0)
{
    seatxoc1=359;
    seatyoc1=359;
}

seat(xmas[seatxc2],ymas[seatyc2]);
seat(xmas[seatxoc2],ymas[seatyoc2]);


seatxc2--;
seatyc2--;

seatxoc2--;
seatyoc2--;
if(seatxc2<0)
{
    seatxc2=359;
    seatyc2=359;
}

if(seatxoc2<0)
{
    seatxoc2=359;
    seatyoc2=359;
}

seat(xmas[seatxc3],ymas[seatyc3]);
seat(xmas[seatxoc3],ymas[seatyoc3]);


seatxc3--;
seatyc3--;

seatxoc3--;
seatyoc3--;
if(seatxc3<0)
{
    seatxc3=359;
    seatyc3=359;
}

if(seatxoc3<0)
{
    seatxoc3=359;
    seatyoc3=359;
}


}

}


void sunrise(int x3, int y3, int r3)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (255,215,0);//255, 235, 115

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{
    glColor3ub (232, 68, 0);
    x2 = x1+sin(angle)*radius;
    y2 = y1+cos(angle)*radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void sunset(int x3, int y3, int r3)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (255,215,0);//255, 235, 115

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{
    glColor3ub (232, 68, 0);
    x2 = x1+sin(angle)*radius;
    y2 = y1+cos(angle)*radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Moon(int x3, int y3, int r3)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (230,230,220);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<361.0f;angle+=0.2)
{
    x2 = x1+sin(angle)*radius;
    y2 = y1+cos(angle)*radius;
    glVertex2f(x2,y2);
}
glEnd();
///////////////////////ASH//////////////////////
glBegin(GL_QUADS);
glColor3ub (190,190,190);
glVertex2i(1492,880);
glVertex2i(1492,860);
glVertex2i(1526,860);
glVertex2i(1526,880);

glVertex2i(1522,846);
glVertex2i(1522,815);
glVertex2i(1499,815);
glVertex2i(1499,846);
glEnd();

glBegin(GL_POINTS);
glColor3ub (211,211,211);
//////////////////////////////////1//////////////////////////////////
glVertex2i(1488,886);
glVertex2i(1490,886);
glVertex2i(1494,886);
glVertex2i(1496,886);
glVertex2i(1500,886);
glVertex2i(1504,886);
glVertex2i(1508,886);
glVertex2i(1512,886);
glVertex2i(1514,886);
//////////////////////////////2////////////////////////////////////
glVertex2i(1480,882);
glVertex2i(1482,882);
glVertex2i(1486,882);
glVertex2i(1490,882);
glVertex2i(1494,882);
glVertex2i(1496,882);
glVertex2i(1500,882);
glVertex2i(1504,882);
glVertex2i(1508,882);
glVertex2i(1512,882);
glVertex2i(1516,882);
glVertex2i(1519,882);
///////////////////////////3//////////////////////////////////
glVertex2i(1476,878);
glVertex2i(1480,878);
glVertex2i(1482,878);
glVertex2i(1486,878);
glVertex2i(1490,878);
glVertex2i(1492,878);
glVertex2i(1513,878);
glVertex2i(1516,878);
glVertex2i(1520,878);
glVertex2i(1524,878);
//////////////////////////4///////////////////////////////////////
glVertex2i(1478,874);
glVertex2i(1482,874);
glVertex2i(1486,874);
glVertex2i(1490,874);
glVertex2i(1516,874);
glVertex2i(1524,874);
glVertex2i(1528,874);
/////////////////////////5////////////////////////////////////
glVertex2i(1484,870);
glVertex2i(1486,870);
glVertex2i(1490,870);
glVertex2i(1492,870);
glVertex2i(1518,870);
glVertex2i(1520,870);
glVertex2i(1524,870);
glVertex2i(1528,870);
glVertex2i(1530,870);
/////////////////////////6////////////////////////////////
glVertex2i(1488,866);
glVertex2i(1490,866);
glVertex2i(1494,866);
glVertex2i(1496,866);
glVertex2i(1500,866);
glVertex2i(1520,866);

glVertex2i(1528,866);
glVertex2i(1532,866);
////////////////////////7/////////////////////////////////
glVertex2i(1494,862);
glVertex2i(1496,862);
glVertex2i(1500,862);
glVertex2i(1504,862);
glVertex2i(1508,862);
glVertex2i(1516,862);
glVertex2i(1524,862);
glVertex2i(1528,862);
glVertex2i(1532,862);
glVertex2i(1534,862);
///////////////////////8//////////////////////////
glVertex2i(1504,858);
glVertex2i(1508,858);
glVertex2i(1512,858);
glVertex2i(1516,858);
glVertex2i(1520,858);
glVertex2i(1524,858);
glVertex2i(1528,858);
glVertex2i(1532,858);
glVertex2i(1536,858);
/////////////////////9//////////////////////////
glVertex2i(1507,854);
glVertex2i(1508,854);
glVertex2i(1512,854);
glVertex2i(1516,854);
glVertex2i(1520,854);
glVertex2i(1524,854);
glVertex2i(1528,854);
glVertex2i(1536,854);
glVertex2i(1538,854);
///////////////////////10///////////////////////
glVertex2i(1507,850);
glVertex2i(1508,850);
glVertex2i(1512,850);
glVertex2i(1516,850);
glVertex2i(1520,850);
glVertex2i(1524,850);
glVertex2i(1538,850);
////////////////////////11///////////////////////
glVertex2i(1538,846);
glVertex2i(1528,846);
glVertex2i(1520,846);
glVertex2i(1516,846);
glVertex2i(1512,846);
glVertex2i(1504,846);
glVertex2i(1508,846);
//////////////////////////12////////////////////////
glVertex2i(1537,842);
glVertex2i(1530,842);
glVertex2i(1516,842);
glVertex2i(1512,842);
glVertex2i(1504,842);
glVertex2i(1500,842);
////////////////////////13///////////////////////
glVertex2i(1537,838);
glVertex2i(1536,838);
glVertex2i(1532,838);
glVertex2i(1528,838);
glVertex2i(1520,838);
glVertex2i(1516,838);
glVertex2i(1512,838);
glVertex2i(1504,838);
glVertex2i(1500,838);
glVertex2i(1496,838);
//////////////////////14/////////////////////////
glVertex2i(1534,834);
glVertex2i(1532,834);
glVertex2i(1528,834);
glVertex2i(1524,834);
glVertex2i(1518,834);
glVertex2i(1516,834);
glVertex2i(1512,834);
glVertex2i(1508,834);
glVertex2i(1504,834);
glVertex2i(1500,834);
glVertex2i(1496,834);
//////////////////////15///////////////////////
glVertex2i(1532,830);
glVertex2i(1528,830);
glVertex2i(1524,830);
glVertex2i(1520,830);
glVertex2i(1512,830);
glVertex2i(1496,830);
////////////////////////16//////////////////
glVertex2i(1530,826);
glVertex2i(1528,826);
glVertex2i(1524,826);
glVertex2i(1516,826);
glVertex2i(1512,826);
glVertex2i(1508,826);
glVertex2i(1499,826);
glVertex2i(1470,826);
////////////////////////17////////////////////
glVertex2i(1526,822);
glVertex2i(1524,822);
glVertex2i(1508,822);
glVertex2i(1504,822);
glVertex2i(1500,822);
glVertex2i(1496,822);
glVertex2i(1472,822);
glVertex2i(1475,822);
/////////////////////////18////////////////////////
glVertex2i(1522,818);
glVertex2i(1504,818);
glVertex2i(1500,818);
glVertex2i(1496,818);
glVertex2i(1480,818);
glVertex2i(1482,818);
glVertex2i(1478,818);
//////////////////////19////////////////////////////

glVertex2i(1518,816);
glVertex2i(1517,816);
glVertex2i(1504,816);
glVertex2i(1500,816);
glVertex2i(1496,816);
glVertex2i(1492,816);
glVertex2i(1488,816);
glVertex2i(1484,816);
glVertex2i(1482,816);
//////////////////////////20////////////////////////
glVertex2i(1513,812);
glVertex2i(1512,812);
glVertex2i(1508,812);
glVertex2i(1504,812);
glVertex2i(1500,812);
glVertex2i(1496,812);
glVertex2i(1492,812);
glVertex2i(1490,812);
/////////////////////////21/////////////////////////
glVertex2i(1468,840);
glVertex2i(1470,840);
glVertex2i(1474,840);
glVertex2i(1478,840);
glVertex2i(1474,844);
glVertex2i(1470,844);
glVertex2i(1476,844);
glVertex2i(1476,848);
glVertex2i(1474,848);
////////////////////////dark ash///////////////////////

glColor3ub (190,190,190);
glVertex2i(1488,820);
glVertex2i(1480,820);
glVertex2i(1484,820);
glVertex2i(1482,824);
glVertex2i(1478,824);
glVertex2i(1474,824);
glVertex2i(1474,828);
glVertex2i(1472,828);
glEnd();

}

void bluetant()
{

//blue Tent
    glBegin(GL_QUADS);
    glColor3ub(140,190,214);
    glPointSize(20.0);
    glVertex2i(1550,230);
    glVertex2i(1550,150);
    glVertex2i(1700,150);
    glVertex2i(1700,230);

    glEnd();


//shadow

    glBegin(GL_QUADS);
    glColor3ub(126, 124, 126);
    glPointSize(20.0);
    glVertex2i(1550,150);
    glVertex2i(1550,135);
    glVertex2i(1700,135);
    glVertex2i(1700,150);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(126, 124, 126);
    glPointSize(20.0);
    glVertex2f(1540,135);
    glVertex2f(1550,135);
    glVertex2f(1550,150);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(126, 124, 126);
    glPointSize(20.0);
    glVertex2f(1700,135);
    glVertex2f(1710,135);
    glVertex2f(1700,150);
    glEnd();


//door

glBegin(GL_QUADS);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2i(1600,220);
    glVertex2i(1600,150);
    glVertex2i(1650,150);
    glVertex2i(1650,220);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1595,150);
    glVertex2f(1600,150);
    glVertex2f(1600,155);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1650,150);
    glVertex2f(1655,150);
    glVertex2f(1650,155);
    glEnd();

//roof
//red
     glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1540,230);
    glVertex2f(1565,230);
    glVertex2f(1625,320);
    glEnd();

//blue
    glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1565,230);
    glVertex2f(1575,230);
    glVertex2f(1625,320);
    glEnd();

//yellow
    glBegin(GL_TRIANGLES);
    glColor3ub(251,236,93);
    glPointSize(20.0);
    glVertex2f(1575,230);
    glVertex2f(1595,230);
    glVertex2f(1625,320);
    glEnd();

//blue
     glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1595,230);
    glVertex2f(1605,230);
    glVertex2f(1625,320);
    glEnd();

//skyblue
    glBegin(GL_TRIANGLES);
    glColor3ub(140,190,214);
    glPointSize(20.0);
    glVertex2f(1605,230);
    glVertex2f(1625,230);
    glVertex2f(1625,320);
    glEnd();

//blue
    glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1625,230);
    glVertex2f(1635,230);
    glVertex2f(1625,320);
    glEnd();

//skyblue
     glBegin(GL_TRIANGLES);
    glColor3ub(140,190,214);
    glPointSize(20.0);
    glVertex2f(1635,230);
    glVertex2f(1655,230);
    glVertex2f(1625,320);
    glEnd();

//blue
     glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1655,230);
    glVertex2f(1665,230);
    glVertex2f(1625,320);
    glEnd();

//yellow
     glBegin(GL_TRIANGLES);
    glColor3ub(251,236,93);
    glPointSize(20.0);
    glVertex2f(1665,230);
    glVertex2f(1685,230);
    glVertex2f(1625,320);
    glEnd();

//red
     glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1685,230);
    glVertex2f(1710,230);
    glVertex2f(1625,320);
    glEnd();

//Flag
    glBegin(GL_TRIANGLES);
    glColor3ub(140,190,214);
    glPointSize(20.0);
    glVertex2f(1590,350);
    glVertex2f(1640,345);
    glVertex2f(1627,310);
    glEnd();


//square
      glBegin(GL_QUADS);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2i(1618,320);
    glVertex2i(1618,310);
    glVertex2i(1632,310);
    glVertex2i(1632,320);

    glEnd();

}


void yellowtant()
{
  //Yellow tent

glBegin(GL_QUADS);
    glColor3ub(251,236,93);
    glPointSize(20.0);
    glVertex2i(1340,210);
    glVertex2i(1340,110);
    glVertex2i(1543,110);
    glVertex2i(1543,210);

    glEnd();

//shadow
    glBegin(GL_QUADS);
    glColor3ub(126, 124, 126);
    glPointSize(20.0);
    glVertex2i(1340,110);
    glVertex2i(1332,95);
    glVertex2i(1552,95);
    glVertex2i(1543,110);

    glEnd();

//door

    glBegin(GL_QUADS);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2i(1410,200);
    glVertex2i(1410,110);
    glVertex2i(1473,110);
    glVertex2i(1473,200);

    glEnd();


glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1405,110);
    glVertex2f(1410,110);
    glVertex2f(1410,118);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1473,110);
    glVertex2f(1478,110);
    glVertex2f(1473,118);
    glEnd();



//yellow tent roof
//red
     glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1330,210);
    glVertex2f(1355,210);
    glVertex2f(1440,340);
    glEnd();

//blue
    glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1355,210);
    glVertex2f(1365,210);
    glVertex2f(1440,340);
    glEnd();

//yellow
    glBegin(GL_TRIANGLES);
    glColor3ub(251,236,93);
    glPointSize(20.0);
    glVertex2f(1365,210);
    glVertex2f(1385,210);
    glVertex2f(1440,340);
    glEnd();

//blue
     glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1385,210);
    glVertex2f(1400,210);
    glVertex2f(1440,340);
    glEnd();

//skyblue
    glBegin(GL_TRIANGLES);
    glColor3ub(140,190,214);
    glPointSize(20.0);
    glVertex2f(1400,210);
    glVertex2f(1430,210);
    glVertex2f(1440,340);
    glEnd();

//blue
    glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1430,210);
    glVertex2f(1445,210);
    glVertex2f(1440,340);
    glEnd();

//sky blue
     glBegin(GL_TRIANGLES);
    glColor3ub(140,190,214);
    glPointSize(20.0);
    glVertex2f(1445,210);
    glVertex2f(1475,210);
    glVertex2f(1440,340);
    glEnd();

//blue
     glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1475,210);
    glVertex2f(1485,210);
    glVertex2f(1440,340);
    glEnd();

//yellow
     glBegin(GL_TRIANGLES);
    glColor3ub(251,236,93);
    glPointSize(20.0);
    glVertex2f(1485,210);
    glVertex2f(1505,210);
    glVertex2f(1440,340);
    glEnd();

//blue
     glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1505,210);
    glVertex2f(1515,210);
    glVertex2f(1440,340);
    glEnd();


    //red
     glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1515,210);
    glVertex2f(1540,210);
    glVertex2f(1440,340);
    glEnd();

//blue
     glBegin(GL_TRIANGLES);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2f(1540,210);
    glVertex2f(1553,210);
    glVertex2f(1440,340);
    glEnd();


//red flag

//Flag
    glBegin(GL_TRIANGLES);
    glColor3ub(220,20,60);
    glPointSize(20.0);
    glVertex2f(1427,380);
    glVertex2f(1500,385);
    glVertex2f(1437,330);
    glEnd();

//square
      glBegin(GL_QUADS);
    glColor3ub(65,105,225);
    glPointSize(20.0);
    glVertex2i(1433,340);
    glVertex2i(1433,330);
    glVertex2i(1448,330);
    glVertex2i(1448,340);

    glEnd();

}


void graytant()
{
//Grey Tent
   glBegin(GL_QUADS);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2i(1000,480);
    glVertex2i(1000,430);
    glVertex2i(1100,430);
    glVertex2i(1100,480);

    glEnd();

//shadow
    glBegin(GL_QUADS);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2i(1000,430);
    glVertex2i(1000,420);
    glVertex2i(1100,420);
    glVertex2i(1100,430);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(995,420);
    glVertex2f(1000,420);
    glVertex2f(1000,430);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1100,420);
    glVertex2f(1105,420);
    glVertex2f(1100,430);
    glEnd();


//door

    glBegin(GL_QUADS);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2i(1035,470);
    glVertex2i(1035,430);
    glVertex2i(1065,430);
    glVertex2i(1065,470);

    glEnd();


glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1032,430);
    glVertex2f(1035,430);
    glVertex2f(1035,435);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1065,430);
    glVertex2f(1068,430);
    glVertex2f(1065,435);
    glEnd();


//roof
//deep
    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(995,480);
    glVertex2f(1000,480);
    glVertex2f(1050,540);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(1000,480);
    glVertex2f(1010,480);
    glVertex2f(1050,540);
    glEnd();

//deep
    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1010,480);
    glVertex2f(1015,480);
    glVertex2f(1050,540);
    glEnd();

//light
    glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(1015,480);
    glVertex2f(1025,480);
    glVertex2f(1050,540);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1025,480);
    glVertex2f(1030,480);
    glVertex2f(1050,540);
    glEnd();

//light
    glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(1030,480);
    glVertex2f(1045,480);
    glVertex2f(1050,540);
    glEnd();

//deep
    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1045,480);
    glVertex2f(1050,480);
    glVertex2f(1050,540);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(1050,480);
    glVertex2f(1065,480);
    glVertex2f(1050,540);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1065,480);
    glVertex2f(1070,480);
    glVertex2f(1050,540);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(1070,480);
    glVertex2f(1080,480);
    glVertex2f(1050,540);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1080,480);
    glVertex2f(1085,480);
    glVertex2f(1050,540);
    glEnd();



//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(1085,480);
    glVertex2f(1095,480);
    glVertex2f(1050,540);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(1095,480);
    glVertex2f(1105,480);
    glVertex2f(1050,540);
    glEnd();



//Grey flag

//Flag
    glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(1030,560);
    glVertex2f(1060,555);
    glVertex2f(1050,540);
    glEnd();

//square
      glBegin(GL_QUADS);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2i(1045,542);
    glVertex2i(1045,535);
    glVertex2i(1055,535);
    glVertex2i(1055,542);

    glEnd();

}

void cornergraytant()
{

 //corner Grey Tent
   glBegin(GL_QUADS);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2i(8,420);
    glVertex2i(8,350);
    glVertex2i(135,350);
    glVertex2i(135,420);
    glEnd();

//shadow
    glBegin(GL_QUADS);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2i(8,350);
    glVertex2i(0,338);
    glVertex2i(145,338);
    glVertex2i(135,350);


    glEnd();


//door

    glBegin(GL_QUADS);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2i(50,410);
    glVertex2i(50,350);
    glVertex2i(90,350);
    glVertex2i(90,410);

    glEnd();


glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(50,350);
    glVertex2f(47,350);
    glVertex2f(50,355);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(50,350);
    glVertex2f(93,350);
    glVertex2f(90,355);
    glEnd();


//roof
//deep
    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(0,420);
    glVertex2f(10,420);
    glVertex2f(70,500);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(10,420);
    glVertex2f(20,420);
    glVertex2f(70,500);
    glEnd();

//deep
    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(20,420);
    glVertex2f(25,420);
    glVertex2f(70,500);
    glEnd();

//light
    glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(25,420);
    glVertex2f(35,420);
    glVertex2f(70,500);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(35,420);
    glVertex2f(40,420);
    glVertex2f(70,500);
    glEnd();

//light
    glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(40,420);
    glVertex2f(55,420);
    glVertex2f(70,500);
    glEnd();

//deep
    glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(55,420);
    glVertex2f(60,420);
    glVertex2f(70,500);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(60,420);
    glVertex2f(75,420);
    glVertex2f(70,500);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(75,420);
    glVertex2f(80,420);
    glVertex2f(70,500);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(80,420);
    glVertex2f(90,420);
    glVertex2f(70,500);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(90,420);
    glVertex2f(95,420);
    glVertex2f(70,500);
    glEnd();



//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(95,420);
    glVertex2f(105,420);
    glVertex2f(70,500);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(105,420);
    glVertex2f(110,420);
    glVertex2f(70,500);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(110,420);
    glVertex2f(120,420);
    glVertex2f(70,500);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(120,420);
    glVertex2f(125,420);
    glVertex2f(70,500);
    glEnd();

//light
     glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(125,420);
    glVertex2f(135,420);
    glVertex2f(70,500);
    glEnd();

//deep
     glBegin(GL_TRIANGLES);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2f(135,420);
    glVertex2f(145,420);
    glVertex2f(70,500);
    glEnd();


//Grey flag

//Flag
    glBegin(GL_TRIANGLES);
    glColor3ub(191, 191, 191);
    glPointSize(20.0);
    glVertex2f(58,525);
    glVertex2f(95,530);
    glVertex2f(69,495);
    glEnd();

//square
      glBegin(GL_QUADS);
    glColor3ub(162, 162, 162);
    glPointSize(20.0);
    glVertex2i(64,502);
    glVertex2i(63,492);
    glVertex2i(77,492);
    glVertex2i(77,502);

    glEnd();



}

void SunRiseSky()
{

glBegin(GL_QUADS);
glColor3ub (225, 84, 1);
glVertex2i(0, 530);
glColor3ub (225, 84, 1);
glVertex2i(0, 450);
glColor3ub (255, 228, 16);
glVertex2i(860, 450);
glColor3ub (255, 228, 16);
glVertex2i(860, 530);
glEnd();



glBegin(GL_QUADS);
glColor3ub (255, 156, 0);
glVertex2i(0, 620);
glColor3ub (225, 84, 1);
glVertex2i(0, 530);
glColor3ub (255, 228, 16);
glVertex2i(860, 530);
glColor3ub (253, 170, 0);
glVertex2i(860, 620);
glEnd();

glBegin(GL_QUADS);
glColor3ub (239, 147, 0);
glVertex2i(0, 750);
glColor3ub (255, 156, 0);
glVertex2i(0, 620);
glColor3ub (253, 170, 0);
glVertex2i(860, 620);
glColor3ub (248, 155, 0);
glVertex2i(860, 750);
glEnd();

glBegin(GL_QUADS);
glColor3ub (200, 135, 63);
glVertex2i(0, 900);
glColor3ub (239, 147, 0);
glVertex2i(0, 750);
glColor3ub (248, 155, 0);
glVertex2i(860, 750);
glColor3ub (187, 129, 66);
glVertex2i(860, 900);
glEnd();

glBegin(GL_QUADS);
glColor3ub (130, 101, 71);
glVertex2i(0, 1024);
glColor3ub (200, 135, 63);
glVertex2i(0, 900);
glColor3ub (187, 129, 66);
glVertex2i(860, 900);
glColor3ub (134, 103, 68);
glVertex2i(860, 1024);
glEnd();


glBegin(GL_QUADS);
glColor3ub (134, 103, 68);
glVertex2i(860, 1024);
glColor3ub (187, 129, 66);
glVertex2i(860, 900);
glColor3ub (200, 135, 63);
glVertex2i(1768, 900);
glColor3ub (130, 101, 71);
glVertex2i(1768, 1024);
glEnd();

glBegin(GL_QUADS);
glColor3ub (187, 129, 66);
glVertex2i(860, 900);
glColor3ub (248, 155, 0);
glVertex2i(860, 750);
glColor3ub (239, 147, 0);
glVertex2i(1768, 750);
glColor3ub (200, 135, 63);
glVertex2i(1768, 900);
glEnd();

glBegin(GL_QUADS);
glColor3ub (248, 155, 0);
glVertex2i(860, 750);
glColor3ub (253, 170, 0);
glVertex2i(860, 620);
glColor3ub (255, 156, 0);
glVertex2i(1768, 620);
glColor3ub (239, 147, 0);
glVertex2i(1768, 750);
glEnd();

glBegin(GL_QUADS);
glColor3ub (253, 170, 0);
glVertex2i(860, 620);
glColor3ub (255, 228, 16);
glVertex2i(860, 530);
glColor3ub (225, 84, 1);
glVertex2i(1768, 530);
glColor3ub (255, 156, 0);
glVertex2i(1768, 620);
glEnd();

glBegin(GL_QUADS);
glColor3ub (255, 228, 16);
glVertex2i(860, 530);
glColor3ub (255, 228, 16);
glVertex2i(860, 450);
glColor3ub (225, 84, 1);
glVertex2i(1768, 450);
glColor3ub (225, 84, 1);
glVertex2i(1768, 530);
glEnd();


}

void MorningSky()
{
////////////////////Morning Sky/////////////////////////
glBegin(GL_QUADS);
glColor3ub (65,105,225);
glVertex2i(0, 1024);
glColor3ub (231,254,255);
glVertex2i(0, 450);
glColor3ub (231,254,255);
glVertex2i(1768, 450);
glColor3ub (0,0,255);
glVertex2i(1768, 1024);
glEnd();



}

void MorningSand()
{
////////////////////sand/////////////////////////
glBegin(GL_QUADS);
glColor3ub (255,235,205);
glVertex2i(0, 450);
glColor3ub (166,123,91);
glVertex2i(0, 0);
glColor3ub (166,123,91);
glVertex2i(1768, 0);
glColor3ub (255,235,205);
glVertex2i(1768, 450);
glEnd();
glFlush ();
}


void NoonSky()
{
////////////////////Noon Sky/////////////////////////
glBegin(GL_POLYGON);
glColor3ub (69,177,232);
glVertex2i(0, 1024);
glColor3ub (255,253,208);
glVertex2i(0, 450);
glColor3ub (255,253,208);
glVertex2i(1768, 450);
glColor3ub (42, 150, 220);
glVertex2i(1768, 1024);
glEnd();



}

void NoonSand()
{
////////////////////sand/////////////////////////
glBegin(GL_QUADS);
glColor3ub (236, 216, 187);
glVertex2i(0, 450);
glColor3ub (212, 146, 81);
glVertex2i(0, 0);
glColor3ub (212, 146, 81);
glVertex2i(1768, 0);
glColor3ub (236, 216, 187);
glVertex2i(1768, 450);
glEnd();


}


void AfternoonSky()
{


glBegin(GL_QUADS);
glColor3ub (100,149,237);
glVertex2i(0, 1024);
glColor3ub (147,204,234);
glVertex2i(0, 737);
glColor3ub (164,221,237);
glVertex2i(1768, 737);
glColor3ub (100,149,237);
glVertex2i(1768, 1024);

glColor3ub (147,204,234);
glVertex2i(0, 737);
glColor3ub (244,194,194);
glVertex2i(0, 450);
glColor3ub (244,194,194);
glVertex2i(1768, 450);
glColor3ub (164,221,237);
glVertex2i(1768, 737);
glEnd();




}

void AfternoonSand()
{
////////////////////sand/////////////////////////
glBegin(GL_QUADS);
glColor3ub (222,184,135);
glVertex2i(0, 450);
glColor3ub (179,139,109);
glVertex2i(0, 0);
glColor3ub (179,139,109);
glVertex2i(1768, 0);
glColor3ub (216, 179, 126);
glVertex2i(1768, 450);
glEnd();
glFlush ();
}

void SunSetSky()
{


glBegin(GL_QUADS);
glColor3ub (211, 77, 40);
glVertex2i(0, 530);
glColor3ub (157, 45, 23);
glVertex2i(0, 450);
glColor3ub (150, 55, 41);
glVertex2i(1768, 450);
glColor3ub (184, 77, 53);
glVertex2i(1768, 530);
glEnd();

glBegin(GL_QUADS);
glColor3ub (252, 118, 67);
glVertex2i(0, 620);
glColor3ub (211, 77, 40);
glVertex2i(0, 530);
glColor3ub (184, 77, 53);
glVertex2i(1768, 530);
glColor3ub (192, 95, 66);
glVertex2i(1768, 620);
glEnd();

glBegin(GL_QUADS);
glColor3ub (153, 88, 105);
glVertex2i(0, 750);
glColor3ub (252, 118, 67);
glVertex2i(0, 620);
glColor3ub (192, 95, 66);
glVertex2i(1768, 620);
glColor3ub (144, 87, 108);
glVertex2i(1768, 750);
glEnd();

glBegin(GL_QUADS);
glColor3ub (105, 62, 107);
glVertex2i(0, 900);
glColor3ub (153, 88, 105);
glVertex2i(0, 750);
glColor3ub (144, 87, 108);
glVertex2i(1768, 750);
glColor3ub (91, 61, 113);
glVertex2i(1768, 900);
glEnd();

glBegin(GL_QUADS);
glColor3ub (87, 56, 112);
glVertex2i(0, 1024);
glColor3ub (105, 62, 107);
glVertex2i(0, 900);
glColor3ub (91, 61, 113);
glVertex2i(1768, 900);
glColor3ub (68, 42, 99);
glVertex2i(1768, 1024);
glEnd();


}


void EveningSky()
{
/////////////////////////dark blue/////////////////
glBegin(GL_POLYGON);
glColor3ub (29, 50, 93);
glVertex2i(0, 1024);
glColor3ub (47, 80, 129);
glVertex2i(0, 944);
glColor3ub (75, 110, 152);
glVertex2i(0, 864);
glColor3ub (75, 110, 152);
glVertex2i(1768, 864);
glColor3ub (47, 80, 129);
glVertex2i(1768, 944);
glColor3ub (29, 50, 93);
glVertex2i(1768, 1024);
glEnd();
/////////////////////////light blue/////////////

glBegin(GL_QUADS);
glColor3ub (75, 110, 152);
glVertex2i(0, 864);
glColor3ub (146, 159, 175);
glVertex2i(0, 737);
glColor3ub (146, 159, 175);
glVertex2i(1768, 737);
glColor3ub (75, 110, 152);
glVertex2i(1768, 864);
glEnd();

//////////////////////////light orange/////////
glBegin(GL_QUADS);
glColor3ub (146, 159, 175);
glVertex2i(0, 737);
glColor3ub (219, 194, 165);
glVertex2i(0, 600);
glColor3ub (219, 194, 165);
glVertex2i(1768, 600);
glColor3ub (146, 159, 175);
glVertex2i(1768, 737);
glEnd();

///////////////////////////orange///////////
glBegin(GL_POLYGON);
glColor3ub (219, 194, 165);
glVertex2i(0, 600);
glColor3ub (244, 186, 148);
glVertex2i(0, 557);
glColor3ub (228, 110, 71);
glVertex2i(0, 497);
glColor3ub (240, 140, 87);
glVertex2i(1768, 497);
glColor3ub (250, 189, 136);
glVertex2i(1768, 557);
glColor3ub (219, 194, 165);
glVertex2i(1768, 600);
glEnd();

//////////////////////////mud color/////////////
glBegin(GL_QUADS);
glColor3ub (228, 110, 71);
glVertex2i(0, 497);
glColor3ub (142, 60, 58);
glVertex2i(0, 450);
glColor3ub (142, 60, 58);
glVertex2i(1768, 450);
glColor3ub (240, 140, 87);
glVertex2i(1768, 497);
glEnd();


}

void EveningSand()
{
////////////////////sand/////////////////////////
glBegin(GL_QUADS);
glColor3ub (186,135,89);
glVertex2i(0, 450);
glColor3ub (138, 89, 49);
glVertex2i(0, 0);
glColor3ub (138, 89, 49);
glVertex2i(1768, 0);
glColor3ub (186, 120, 67);
glVertex2i(1768, 450);
glEnd();
glFlush ();
}

void NightSky()
{
glBegin(GL_QUADS);
glColor3ub (0, 4, 32);
glVertex2i(0, 1024);
glColor3ub (0, 6, 76);
glVertex2i(0, 450);
glColor3ub (19, 32, 123);
glVertex2i(1768, 450);
glColor3ub (0, 4, 32);
glVertex2i(1768, 1024);
glEnd();

//////////////////////big star1/////////////////////////
glPointSize(2.0);

glBegin(GL_POINTS);
glColor3ub (255,255,255);
glVertex2i(1603, 897);
glVertex2i(1604, 897);
glVertex2i(1605, 897);

glVertex2i(1605, 899);

glVertex2i(1600, 895);
glVertex2i(1602, 895);
glVertex2i(1604, 895);
glVertex2i(1606, 895);
glVertex2i(1608, 895);

glVertex2i(1603, 893);
glVertex2i(1604, 893);
glVertex2i(1605, 893);

glVertex2i(1605, 891);
/////////////////////big star2///////////////////////////////

glVertex2i(883, 942);
glVertex2i(884, 942);
glVertex2i(885, 942);

glVertex2i(884, 944);

glVertex2i(880, 940);
glVertex2i(882, 940);
glVertex2i(884, 940);
glVertex2i(886, 940);

glVertex2i(883, 938);
glVertex2i(884, 938);
glVertex2i(885, 938);

glVertex2i(884, 936);
/////////////////////big star3///////////////////////////////
glVertex2i(1493, 652);
glVertex2i(1494, 652);
glVertex2i(1495, 652);

glVertex2i(1494, 654);

glVertex2i(1491, 650);
glVertex2i(1493, 650);
glVertex2i(1495, 650);
glVertex2i(1497, 650);

glVertex2i(1493, 648);
glVertex2i(1494, 648);
glVertex2i(1495, 648);

glVertex2i(1494, 646);
/////////////////////big star4///////////////////////////////
glVertex2i(1303, 802);
glVertex2i(1304, 802);
glVertex2i(1305, 802);

glVertex2i(1304, 804);

glVertex2i(1301, 800);
glVertex2i(1303, 800);
glVertex2i(1305, 800);
glVertex2i(1307, 800);

glVertex2i(1303, 798);
glVertex2i(1304, 798);
glVertex2i(1305, 798);

glVertex2i(1304, 796);
/////////////////////////small star1//////////////////////
glVertex2i(1401, 822);

glVertex2i(1399, 820);
glVertex2i(1400, 820);
glVertex2i(1402, 820);
glVertex2i(1403, 820);

glVertex2i(1401, 818);

/////////////////////////small star2//////////////////////
glVertex2i(1461, 752);

glVertex2i(1459, 750);
glVertex2i(1460, 750);
glVertex2i(1462, 750);
glVertex2i(1463, 750);

glVertex2i(1461, 748);
/////////////////////////small star3//////////////////////
glVertex2i(1691, 792);

glVertex2i(1689, 790);
glVertex2i(1690, 790);
glVertex2i(1692, 790);
glVertex2i(1693, 790);

glVertex2i(1691, 788);
/////////////////////////small star4//////////////////////
glVertex2i(761, 752);

glVertex2i(759, 750);
glVertex2i(760, 750);
glVertex2i(762, 750);
glVertex2i(763, 750);

glVertex2i(761, 748);
/////////////////////////small star5//////////////////////
glVertex2i(561, 882);

glVertex2i(559, 880);
glVertex2i(560, 880);
glVertex2i(562, 880);
glVertex2i(563, 880);

glVertex2i(561, 878);
////////////////////////////////////
glVertex2i(1553, 730);
glVertex2i(1340, 860);
glVertex2i(1370, 900);
glVertex2i(1600, 850);
glVertex2i(1630, 830);
glVertex2i(1543, 930);
glVertex2i(1330, 750);
glVertex2i(1330, 790);
glVertex2i(1350, 950);
glVertex2i(1300, 710);
glVertex2i(1500, 960);
glVertex2i(1435, 800);
glVertex2i(1430, 680);
glVertex2i(1560, 660);
glVertex2i(1590, 780);
glVertex2i(1660, 680);
glVertex2i(1700, 730);
glVertex2i(1260, 900);
glVertex2i(1180, 780);
glVertex2i(1110, 720);
glVertex2i(1410, 740);
glVertex2i(1390, 600);
glVertex2i(1100, 880);
glVertex2i(1000, 840);
glVertex2i(930, 810);
glVertex2i(970, 760);
glVertex2i(900, 870);
glVertex2i(830, 700);
glVertex2i(780, 920);
glVertex2i(720, 780);
glVertex2i(650, 820);
glVertex2i(580, 780);
glVertex2i(480, 740);
glVertex2i(470, 840);
glVertex2i(410, 800);
glVertex2i(320, 750);
glVertex2i(280, 950);
glVertex2i(200, 880);
glVertex2i(500, 960);
glVertex2i(650, 700);
glVertex2i(630, 980);
glVertex2i(360, 900);
glVertex2i(1130, 660);
glVertex2i(1180, 580);
glVertex2i(1100, 700);
glVertex2i(1200, 610);
glVertex2i(1040, 660);
glVertex2i(1080, 580);
glVertex2i(1000, 610);
glVertex2i(900, 610);
glVertex2i(700, 650);
glVertex2i(650, 600);
glVertex2i(440, 640);
glVertex2i(500, 680);
glVertex2i(200, 640);
glVertex2i(150, 680);
/////////////////////////////////////////////////////////////

glEnd();
}


////////////////////sand/////////////////////////
void NightSand()
{
glBegin(GL_QUADS);
glColor3ub (44, 35, 0);
glVertex2i(0, 450);
glColor3ub (75, 53, 41);
glVertex2i(0, 0);
glColor3ub (75, 53, 41);
glVertex2i(1768, 0);
glColor3ub (123, 94, 124);
glVertex2i(1768, 450);
glEnd();
glFlush ();
}


void car1()
{
    ///////////////Car 1////////////////////////

    glBegin(GL_QUADS);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(25,250);
    glVertex2i(25,200);
    glVertex2i(135,200);
    glVertex2i(135,250);

    glVertex2i(40,270);
    glVertex2i(25,250);
    glVertex2i(135,250);
    glVertex2i(120,270);

      glColor3ub(255,255,255);
    glPointSize(10.0);
    glVertex2i(45,250);
    glVertex2i(45,220);
    glVertex2i(115,220);
    glVertex2i(115,250);

    glEnd();

///////////////// Lathi of Car 1/////////////

    glBegin(GL_POLYGON);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(45,310);
    glVertex2i(45,270);
    glVertex2i(50,270);
    glVertex2i(50,310);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(115,310);
    glVertex2i(115,270);
    glVertex2i(110,270);
    glVertex2i(110,310);
    glEnd();


//////////// CHAWNI OF CAR 1//////////////////

     glBegin(GL_POLYGON);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(40,340);
    glVertex2i(20,310);
    glVertex2i(140,310);
    glVertex2i(120,340);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(35,310);
    glVertex2i(45,310);
    glVertex2i(50,335);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(50,310);
    glVertex2i(60,310);
    glVertex2i(65,335);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(65,310);
    glVertex2i(75,310);
    glVertex2i(78,335);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(85,310);
    glVertex2i(95,310);
    glVertex2i(82,335);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(100,310);
    glVertex2i(110,310);
    glVertex2i(95,335);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(115,310);
    glVertex2i(125,310);
    glVertex2i(105,335);
    glEnd();
}

void wheelcar1(int x, int y, int rc1, int rc2, int rc3, int rc4)
{

   ///////////////////////////////////////Wheel 1////////////////////////////////////////

    float theta;
glColor3ub (113, 90, 74);

glEnable(GL_LINE_SMOOTH);
glLineWidth(5);
glBegin(GL_LINE_LOOP);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc1*cos(theta),y+rc1*sin(theta));
}
glEnd();

/////////////////////////////////////////////////////////////////////////////////////

glColor3ub (53,56,57);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc2*cos(theta),y+rc2*sin(theta));
}
glEnd();


/////////////////////////////////////////////////////////////////////////////////////

glColor3ub (190, 149, 121);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc3*cos(theta),y+rc3*sin(theta));
}
glEnd();

/////////////////////////////////////////////////////////////////////////////////////

glColor3ub (104, 95, 78);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc4*cos(theta),y+rc4*sin(theta));
}
glEnd();

}

void wheelcar2(int x, int y, int rc1, int rc2, int rc3, int rc4)
{

   ///////////////////////////////////////Wheel 1////////////////////////////////////////

    float theta;
glColor3ub (105,105,105);

glEnable(GL_LINE_SMOOTH);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc1*cos(theta),y+rc1*sin(theta));
}
glEnd();

/////////////////////////////////////////////////////////////////////////////////////

glColor3ub (169,169,169);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc2*cos(theta),y+rc2*sin(theta));
}
glEnd();


/////////////////////////////////////////////////////////////////////////////////////

glColor3ub (132,132,130);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc3*cos(theta),y+rc3*sin(theta));
}
glEnd();

/////////////////////////////////////////////////////////////////////////////////////

glColor3ub (0,0,0);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+rc4*cos(theta),y+rc4*sin(theta));
}
glEnd();

}

void car2()
{

    ////////////// Car 2////////////////////

    glBegin(GL_QUADS);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(720,130);
    glVertex2i(720,80);
    glVertex2i(830,80);
    glVertex2i(830,130);

    glVertex2i(735,150);
    glVertex2i(720,130);
    glVertex2i(830,130);
    glVertex2i(815,150);

      glColor3ub(255,255,255);
    glPointSize(10.0);
    glVertex2i(740,130);
    glVertex2i(740,100);
    glVertex2i(810,100);
    glVertex2i(810,130);

    glEnd();


///////////Lathi of Car 2/////////////

    glBegin(GL_POLYGON);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(740,190);
    glVertex2i(740,150);
    glVertex2i(745,150);
    glVertex2i(745,190);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(810,190);
    glVertex2i(810,150);
    glVertex2i(805,150);
    glVertex2i(805,190);
    glEnd();

///////////////Chawni of Car 2//////////////////

     glBegin(GL_POLYGON);
    glColor3ub(255,64,64);
    glPointSize(10.0);
    glVertex2i(735,220);
    glVertex2i(715,190);
    glVertex2i(835,190);
    glVertex2i(815,220);
    glEnd();


     glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(730,190);
    glVertex2i(740,190);
    glVertex2i(745,215);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(745,190);
    glVertex2i(755,190);
    glVertex2i(760,215);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(760,190);
    glVertex2i(770,190);
    glVertex2i(775,215);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(780,190);
    glVertex2i(790,190);
    glVertex2i(778,215);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(795,190);
    glVertex2i(805,190);
    glVertex2i(790,215);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(810,190);
    glVertex2i(820,190);
    glVertex2i(800,215);
    glEnd();

}

void car3()
{
   ////////////////Car 3////////////////////


glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(985,445);
    glVertex2i(985,410);
    glVertex2i(1045,410);
    glVertex2i(1045,445);

    glVertex2i(995,455);
    glVertex2i(985,445);
    glVertex2i(1045,445);
    glVertex2i(1035,455);

    glColor3ub(255,255,255);
    glPointSize(10.0);
    glVertex2i(1000,445);
    glVertex2i(1000,425);
    glVertex2i(1030,425);
    glVertex2i(1030,445);

    glEnd();



    ///////////Lathi of Car 3 ///////////////


    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(996,475);
    glVertex2i(996,455);
    glVertex2i(1000,455);
    glVertex2i(1000,475);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(1031,475);
    glVertex2i(1031,455);
    glVertex2i(1035,455);
    glVertex2i(1035,475);
    glEnd();


     ////////////Chawni of Car 3/////////////////


    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(1000,490);
    glVertex2i(985,475);
    glVertex2i(1045,475);
    glVertex2i(1030,490);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(990,475);
    glVertex2i(995,475);
    glVertex2i(1000,485);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(1000,475);
    glVertex2i(1005,475);
    glVertex2i(1010,485);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(1025,475);
    glVertex2i(1030,475);
    glVertex2i(1022,485);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(1035,475);
    glVertex2i(1040,475);
    glVertex2i(1030,485);
    glEnd();

}

void car4()
{
    ////////////////////////Car 4/////////////////////


glBegin(GL_QUADS);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(350,460);
    glVertex2i(350,425);
    glVertex2i(410,425);
    glVertex2i(410,460);

    glVertex2i(360,470);
    glVertex2i(350,460);
    glVertex2i(410,460);
    glVertex2i(400,470);

    glColor3ub(255,255,255);
    glPointSize(10.0);
    glVertex2i(365,460);
    glVertex2i(365,440);
    glVertex2i(395,440);
    glVertex2i(395,460);

    glEnd();



     ///////////Lathi of Car 4 ///////////////


glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(361,490);
    glVertex2i(361,470);
    glVertex2i(365,470);
    glVertex2i(365,490);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(396,490);
    glVertex2i(396,470);
    glVertex2i(400,470);
    glVertex2i(400,490);
    glEnd();


////////////Chawni of Car 4/////////////////


 glBegin(GL_POLYGON);
    glColor3ub(128,128,128);
    glPointSize(10.0);
    glVertex2i(365,505);
    glVertex2i(350,490);
    glVertex2i(410,490);
    glVertex2i(395,505);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(355,490);
    glVertex2i(360,490);
    glVertex2i(365,500);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(365,490);
    glVertex2i(370,490);
    glVertex2i(375,500);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(390,490);
    glVertex2i(395,490);
    glVertex2i(387,500);
    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3ub(255,255, 255);
    glPointSize(10.0);
    glVertex2i(400,490);
    glVertex2i(405,490);
    glVertex2i(397,500);
    glEnd();


}


///Balloon///////////////////////////////////////////////////////////////////////

///////////////////Maroon Balloon1///////////////////
void bubblecircle1(int x3, int y3, int r3, int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr,cg,cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void bubblecircled1(int x3, int y3, int r3, int sr,int sg,int sb )
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Balloon1(int cx, int cy, int sr,int sg,int sb, int cr, int cg, int cb)
{
bubblecircled1(cx+20,cy-40,15, sr, sg, sb);

glBegin(GL_POLYGON);
glColor3ub (sr,sg,sb);
glVertex2i(cx-20,cy-34);
glVertex2i(cx+10,cy-52);
glVertex2i(cx+35,cy-40);
glVertex2i(cx+40,cy);
glEnd();
bubblecircle1(cx,cy,40, sr, sg, sb, cr,cg,cb);//500,300

glEnable(GL_LINE_SMOOTH);
glLineWidth(2);
glBegin(GL_LINE_STRIP);
glColor3ub (245, 243, 237);
glVertex2i(cx+27,cy-53);
glVertex2i(cx+30,cy-70);
glVertex2i(cx+30,cy-80);
glVertex2i(cx+40,cy-105);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3ub(sr, sg, sb);
    glPointSize(10.0);
    glVertex2f(cx+25,cy-65);
    glVertex2f(cx+35,cy-60);
    glVertex2f(cx+25,cy-45);
    glEnd();

}

///////////////////Maroon Balloon2///////////////////
void bubblecircle2(int x3, int y3, int r3, int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr,cg,cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void bubblecircled2(int x3, int y3, int r3, int sr,int sg,int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Balloon2(int cx, int cy, int sr,int sg,int sb, int cr, int cg, int cb)
{
bubblecircled2(cx,cy-25,8,sr, sg, sb);

glBegin(GL_POLYGON);
glColor3ub (sr, sg, sb);
glVertex2i(cx-17,cy-10);
glVertex2i(cx-8,cy-27);
glVertex2i(cx+8,cy-27);
glVertex2i(cx+20,cy-5);
glEnd();
bubblecircle2(cx,cy,20,sr, sg, sb, cr,cg,cb);//730,340

glEnable(GL_LINE_SMOOTH);
glLineWidth(1);
glBegin(GL_LINE_STRIP);
glColor3ub (245, 243, 237);
glVertex2i(cx,cy-30);
glVertex2i(cx,cy-40);
glVertex2i(cx+6,cy-65);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3ub(sr, sg, sb);
    glPointSize(10.0);
    glVertex2f(cx-4,cy-38);
    glVertex2f(cx+3,cy-38);
    glVertex2f(cx,cy-25);
    glEnd();

}


/////////////////// Orange Balloon3///////////////////
void bubblecircle3(int x3, int y3, int r3, int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr,cg,cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void bubblecircled3(int x3, int y3, int r3, int sr,int sg,int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Balloon3(int cx, int cy,int sr,int sg,int sb, int cr, int cg, int cb)
{
bubblecircled3(cx,cy-16,6,sr, sg, sb);

glBegin(GL_POLYGON);
glColor3ub (sr, sg, sb);
glVertex2i(cx-11,cy-4);
glVertex2i(cx-5,cy-17);
glVertex2i(cx+6,cy-17);
glVertex2i(cx+12,cy);
glEnd();
bubblecircle3(cx,cy,12,sr, sg, sb,cr,cg,cb);//800,295

glEnable(GL_LINE_SMOOTH);
glLineWidth(1);
glBegin(GL_LINE_STRIP);
glColor3ub (245, 243, 237);
glVertex2i(cx,cy-21);
glVertex2i(cx,cy-30);
glVertex2i(cx+3,cy-50);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3ub(sr, sg, sb);
    glPointSize(10.0);
    glVertex2f(cx-3,cy-27);
    glVertex2f(cx+3,cy-27);
    glVertex2f(cx,cy-16);
    glEnd();
}

///////////////////Blue Balloon4///////////////////
void bubblecircle4(int x3, int y3, int r3,int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr, cg, cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void bubblecircled4(int x3, int y3, int r3,int sr,int sg,int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Balloon4(int cx, int cy,int sr,int sg,int sb, int cr, int cg, int cb)
{
bubblecircled4(cx,cy-40,10,sr, sg, sb);

glBegin(GL_POLYGON);
glColor3ub (sr, sg, sb);
glVertex2i(cx-26,cy-15);
glVertex2i(cx-10,cy-42);
glVertex2i(cx+10,cy-42);
glVertex2i(cx+26,cy-15);
glEnd();
bubblecircle4(cx,cy,30,sr, sg, sb,cr,cg,cb);//635,260

glEnable(GL_LINE_SMOOTH);
glLineWidth(1);
glBegin(GL_LINE_STRIP);
glColor3ub (245, 243, 237);
glVertex2i(cx,cy-49);
glVertex2i(cx,cy-60);
glVertex2i(cx-2,cy-70);
glVertex2i(cx-5,cy-85);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3ub(sr, sg, sb);
    glPointSize(10.0);
    glVertex2f(cx-4,cy-56);
    glVertex2f(cx+4,cy-56);
    glVertex2f(cx,cy-45);
    glEnd();
}
///////////////Purple Balloon5///////////////
void bubblecircle5(int x3, int y3, int r3,int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr, cg, cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void bubblecircled5(int x3, int y3, int r3, int sr, int sg, int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Balloon5(int cx, int cy, int sr,int sg,int sb, int cr, int cg, int cb)
{
bubblecircled5(cx-20,cy-28,12,sr,sg,sb);

glBegin(GL_POLYGON);
glColor3ub (sr,sg,sb);
glVertex2i(cx-25,cy+2);
glVertex2i(cx-32,cy-25);
glVertex2i(cx-11,cy-35);
glVertex2i(cx+20,cy-16);
glEnd();
bubblecircle5(cx,cy,25,sr,sg,sb,cr,cg,cb);//900,295

glEnable(GL_LINE_SMOOTH);
glLineWidth(1);
glBegin(GL_LINE_STRIP);
glColor3ub (245, 243, 237);
glVertex2i(cx-26,cy-37);
glVertex2i(cx-28,cy-45);
glVertex2i(cx-30,cy-75);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3ub(sr, sg, sb);
    glPointSize(10.0);
    glVertex2f(cx-32,cy-42);
    glVertex2f(cx-25,cy-45);
    glVertex2f(cx-25,cy-23);
    glEnd();

}
///////////////////////////Pink Balloon6////////////////////////////
void bubblecircle6(int x3, int y3, int r3,int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr, cg, cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void bubblecircled6(int x3, int y3, int r3, int sr, int sg, int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Balloon6(int cx, int cy, int sr,int sg,int sb, int cr, int cg, int cb)
{
bubblecircled6(cx-20,cy-40,15, sr, sg, sb);

glBegin(GL_POLYGON);
glColor3ub (sr,sg,sb);
glVertex2i(cx+20,cy-34);
glVertex2i(cx-10,cy-52);
glVertex2i(cx-35,cy-40);
glVertex2i(cx-40,cy);
glEnd();
bubblecircle6(cx,cy,40, sr, sg, sb, cr,cg,cb);//500,300

glEnable(GL_LINE_SMOOTH);
glLineWidth(2);
glBegin(GL_LINE_STRIP);
glColor3ub (245, 243, 237);
glVertex2i(cx-27,cy-53);
glVertex2i(cx-30,cy-70);
glVertex2i(cx-30,cy-80);
glVertex2i(cx-40,cy-105);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3ub(sr, sg, sb);
    glPointSize(10.0);
    glVertex2f(cx-25,cy-65);
    glVertex2f(cx-35,cy-60);
    glVertex2f(cx-25,cy-45);
    glEnd();


}

///////////////////////////Green Balloon7////////////////////////////
void bubblecircle7(int x3, int y3, int r3,int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr, cg, cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void bubblecircled7(int x3, int y3, int r3, int sr, int sg, int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void Balloon7(int cx, int cy, int sr,int sg,int sb, int cr, int cg, int cb)
{
bubblecircled7(cx,cy-50,15, sr, sg, sb);

glBegin(GL_POLYGON);
glColor3ub (sr,sg,sb);
glVertex2i(cx-37,cy-15);
glVertex2i(cx-15,cy-54);
glVertex2i(cx+15,cy-54);
glVertex2i(cx+37,cy-15);
glEnd();
bubblecircle7(cx,cy,40, sr, sg, sb, cr,cg,cb);//500,300

glEnable(GL_LINE_SMOOTH);
glLineWidth(2);
glBegin(GL_LINE_STRIP);
glColor3ub (245, 243, 237);
glVertex2i(cx-1,cy-63);
glVertex2i(cx-2,cy-70);
glVertex2i(cx-3,cy-80);
glVertex2i(cx-4,cy-105);
glVertex2i(cx-2,cy-155);
glEnd();

glBegin(GL_TRIANGLES);
    glColor3ub(sr,sg,sb);
    glPointSize(10.0);
    glVertex2f(cx-1,cy-50);
    glVertex2f(cx-10,cy-75);
    glVertex2f(cx+3,cy-75);
    glEnd();


}
///CIRCLE-> X axis, Y axis, x axis radius, y axis radius, color//////////////////

void circle(int x, int y, int a, int b, int c1, int c2, int c3)
{
    glColor3ub (c1,c2,c3);
    glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(x+a*cos(theta),y+b*sin(theta));
}
glEnd();
}


///////////////////////////tree//////////////////////
void tree(int x, int y)
{
    circle(x,y-15,23,23,102,176,50);////circle 2
    circle(x,y+15,25,32,60,179,113);//// circle 1
    glEnable(GL_LINE_SMOOTH);
glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (112,28,28);
glVertex2i(x,y+25);
glVertex2i(x,y-60);

glVertex2i(x,y);
glVertex2i(x+15,y+20);


glVertex2i(x,y-20);
glVertex2i(x-15,y);
glEnd();

}



///////////////////////////Store Balloon////////////////////////////
void storebubblecircle(int x3, int y3, int r3,int sr,int sg,int sb, int cr, int cg, int cb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (cr, cg, cb);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;
    glColor3ub (sr, sg, sb);
    glVertex2f(x2,y2);
}

glEnd();

}
void storebubblecircled(int x3, int y3, int r3, int sr, int sg, int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void storeBalloon(int cx, int cy, int sr,int sg,int sb, int cr, int cg, int cb)
{
storebubblecircled(cx+3,cy-10,4, sr, sg, sb);

glBegin(GL_POLYGON);
glColor3ub (sr,sg,sb);
glVertex2i(cx-5,cy-7);
glVertex2i(cx-1,cy-10);
glVertex2i(cx+7,cy-9);
glVertex2i(cx+7,cy);
glEnd();
storebubblecircle(cx,cy,8, sr, sg, sb, cr,cg,cb);//1600,585 //1603,575

glEnable(GL_LINE_SMOOTH);
glLineWidth(0.2);
glBegin(GL_LINE_STRIP);
glColor3ub (252, 227, 225);
glVertex2i(cx+5,cy-12);
glVertex2i(cx+5,cy-30);
glEnd();


}


///Store///////////////////////////////////////////


void storecircled(int x3, int y3, int r3, int sr, int sg, int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}

void ice(int x3, int y3, int r3, int sr, int sg, int sb)
{

glPointSize(5.0);
float x1,y1,x2,y2;
float angle;
double radius=r3;

x1 = x3,y1=y3;
glColor3ub (sr, sg, sb);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1);

for (angle=1.0f;angle<10.0f;angle+=0.2)
{

    x2 = x1+sin(angle)* radius;
    y2 = y1+cos(angle)* radius;

    glVertex2f(x2,y2);
}

glEnd();

}





//////////////////////store1 Pink ////////////////////////////
void Store1(int x3, int y3, int r3, int sr, int sg, int sb)

{

    ///////////// Store 1 table //////////////////

glBegin(GL_QUADS);
    glColor3ub(181, 147, 144);
    glPointSize(10.0);
    glVertex2i(1485,450);
    glVertex2i(1485,447);
    glVertex2i(1617,447);
    glVertex2i(1617,450);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(201, 166, 164);
    glPointSize(10.0);
    glVertex2i(1490,447);
    glVertex2i(1490,437);
    glVertex2i(1612,437);
    glVertex2i(1612,447);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(185, 150, 148);
    glPointSize(10.0);
    glVertex2i(1490,437);
    glVertex2i(1490,435);
    glVertex2i(1612,435);
    glVertex2i(1612,437);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(201, 166, 164);
    glPointSize(10.0);
    glVertex2i(1490,435);
    glVertex2i(1490,425);
    glVertex2i(1612,425);
    glVertex2i(1612,435);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(185, 150, 148);
    glPointSize(10.0);
    glVertex2i(1490,425);
    glVertex2i(1490,423);
    glVertex2i(1612,423);
    glVertex2i(1612,425);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(201, 166, 164);
    glPointSize(10.0);
    glVertex2i(1490,423);
    glVertex2i(1490,410);
    glVertex2i(1612,410);
    glVertex2i(1612,423);
    glEnd();
    //////////// Store 1 Lathi ///////////////

    glBegin(GL_QUADS);
    glColor3ub(243, 220, 214);
    glPointSize(10.0);
    glVertex2i(1490,500);
    glVertex2i(1490,450);
    glVertex2i(1493,450);
    glVertex2i(1493,500);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(243, 220, 214);
    glPointSize(10.0);
    glVertex2i(1608,510);
    glVertex2i(1608,450);
    glVertex2i(1612,450);
    glVertex2i(1612,510);
    glEnd();


////////////ice-cream box///////////////////

 glBegin(GL_QUADS);
    glColor3ub(188, 212, 225);
    glPointSize(10.0);
    glVertex2i(1493,500);
    glVertex2i(1493,450);
    glVertex2i(1530,450);
    glVertex2i(1530,500);
    glEnd();

    //////////////ice-cream/////////////

    glBegin(GL_TRIANGLES);
    glColor3ub(206, 141, 76);
    glPointSize(10.0);
    glVertex2f(1505,470);
    glVertex2f(1520,470);
    glVertex2f(1513,451);
    glEnd();

/////////////////man///////////////////

glBegin(GL_QUADS);
    glColor3ub(222,184,135);//1670,485
    glPointSize(10.0);
    glVertex2i(1568,478);
    glVertex2i(1568,475);
    glVertex2i(1572,475);
    glVertex2i(1572,478);

    glColor3ub(87, 121, 166);//1670,485
    glVertex2i(1563,450);
    glVertex2i(1563,475);
    glVertex2i(1579,475);
    glVertex2i(1579,450);
    //hand/////

    glColor3ub(222,184,135);//1670,485
    glVertex2i(1563,473);
    glVertex2i(1563,470);
    glVertex2i(1555,450);
    glVertex2i(1554,447);

    glColor3ub(222,184,135);//1670,485
    glVertex2i(1579,473);
    glVertex2i(1579,470);
    glVertex2i(1571,453);
    glVertex2i(1570,450);

//////////////// Store 1 saad  //////////////////

    glColor3ub(248, 123, 161);
    glVertex2i(1480,525);
    glVertex2i(1480,510);
    glVertex2i(1500,510);
    glVertex2i(1500,525);

    glColor3ub(254, 240, 235);
    glVertex2i(1500,525);
    glVertex2i(1500,510);
    glVertex2i(1520,510);
    glVertex2i(1520,525);

    glColor3ub(248, 123, 161);
    glVertex2i(1520,525);
    glVertex2i(1520,510);
    glVertex2i(1540,510);
    glVertex2i(1540,525);

    glColor3ub(254, 240, 235);
    glVertex2i(1540,525);
    glVertex2i(1540,510);
    glVertex2i(1560,510);
    glVertex2i(1560,525);

    glColor3ub(248, 123, 161);
    glVertex2i(1560,525);
    glVertex2i(1560,510);
    glVertex2i(1580,510);
    glVertex2i(1580,525);

    glColor3ub(254, 240, 235);
    glVertex2i(1580,525);
    glVertex2i(1580,510);
    glVertex2i(1600,510);
    glVertex2i(1600,525);

    glColor3ub(248, 123, 161);
    glVertex2i(1600,525);
    glVertex2i(1600,510);
    glVertex2i(1620,510);
    glVertex2i(1620,525);

    //////////////////////////////

    glColor3ub(248, 102, 147);
    glVertex2i(1485,560);
    glVertex2i(1480,525);
    glVertex2i(1500,525);
    glVertex2i(1505,560);

    glColor3ub(255, 224, 223);
    glVertex2i(1505,560);
    glVertex2i(1500,525);
    glVertex2i(1520,525);
    glVertex2i(1525,560);

    glColor3ub(248, 102, 147);
    glVertex2i(1525,560);
    glVertex2i(1520,525);
    glVertex2i(1540,525);
    glVertex2i(1545,560);

    glColor3ub(255, 224, 223);
    glVertex2i(1545,560);
    glVertex2i(1540,525);
    glVertex2i(1560,525);
    glVertex2i(1560,560);

    glColor3ub(248, 102, 147);
    glVertex2i(1555,560);
    glVertex2i(1560,525);
    glVertex2i(1580,525);
    glVertex2i(1575,560);

    glColor3ub(255, 224, 223);
    glVertex2i(1575,560);
    glVertex2i(1580,525);
    glVertex2i(1600,525);
    glVertex2i(1595,560);

    glColor3ub(248, 102, 147);
    glVertex2i(1595,560);
    glVertex2i(1600,525);
    glVertex2i(1620,525);
    glVertex2i(1615,560);

/////board//////////////
    glColor3ub(201, 166, 164);
    glVertex2i(1504,566);
    glVertex2i(1504,550);
    glVertex2i(1599,550);
    glVertex2i(1599,566);
    glEnd();

 storecircled(x3,y3,r3, sr, sg, sb);
}



void Store2()
{

    tree(1650,470);

     glBegin(GL_TRIANGLES);
    glColor3ub(166,214,8);
    glPointSize(5.0);
    glVertex2i(1640,510);
    glVertex2i(1820,510);
    glVertex2i(1730,570);

    glColor3ub(255, 255, 255);
    glVertex2i(1660,510);
    glVertex2i(1800,510);
    glVertex2i(1730,570);

    glColor3ub(166,214,8);
    glVertex2i(1680,510);
    glVertex2i(1780,510);
    glVertex2i(1730,570);

    glColor3ub(255, 255, 255);
    glVertex2i(1700,510);
    glVertex2i(1760,510);
    glVertex2i(1730,570);

    glColor3ub(166,214,8);
    glVertex2i(1720,510);
    glVertex2i(1740,510);
    glVertex2i(1730,570);
    glEnd();

     glColor3ub (203,161,53);
glEnable(GL_LINE_SMOOTH);
glLineWidth(5);
glBegin(GL_LINES);
glVertex2f(1730,510);
glVertex2f(1730,410);
glEnd();


    glBegin(GL_QUADS);
    glColor3ub(166,214,8);
    glVertex2i(1640,510);
    glVertex2i(1640,502);
    glVertex2i(1820,502);
    glVertex2i(1820,510);

    glColor3ub(255, 255, 255);
    glVertex2i(1660,510);
    glVertex2i(1660,502);
    glVertex2i(1800,502);
    glVertex2i(1800,510);

     glColor3ub(166,214,8);
    glVertex2i(1680,510);
    glVertex2i(1680,502);
    glVertex2i(1780,502);
    glVertex2i(1780,510);

    glColor3ub(255, 255, 255);
    glVertex2i(1700,510);
    glVertex2i(1700,502);
    glVertex2i(1760,502);
    glVertex2i(1760,510);

    glColor3ub(166,214,8);
    glVertex2i(1720,510);
    glVertex2i(1720,502);
    glVertex2i(1740,502);
    glVertex2i(1740,510);
    glEnd();

    circle(1730,570,6,6,166,214,8);


    ////////////////////// bench ////////////////////////
glEnable(GL_LINE_SMOOTH);
glLineWidth(5.5);
glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2f(1702,455);
glVertex2f(1702,430);

glVertex2f(1758,455);
glVertex2f(1758,430);

glVertex2f(1770,435);
glVertex2f(1770,410);

glVertex2f(1690,435);
glVertex2f(1690,410);

glColor3ub (190,190,190);
glVertex2f(1670,432);
glVertex2f(1800,432);
glEnd();

glLineWidth(7);
glBegin(GL_LINES);
glColor3ub (190,190,190);

glVertex2f(1680,445);
glVertex2f(1800,445);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (190,190,190);
glVertex2f(1680,458);
glVertex2f(1800,458);
glEnd();


}

void Store3()
{
    glPointSize(10.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(32,178,170);
    glVertex2i(680,380);
    glVertex2i(1040,380);
    glVertex2i(860,465);

    glColor3ub(255, 255, 255);
    glVertex2i(740,380);
    glVertex2i(980,380);
    glVertex2i(860,465);

    glColor3ub(32,178,170);
    glVertex2i(790,380);
    glVertex2i(930,380);
    glVertex2i(860,465);

    glColor3ub(255, 255, 255);
    glVertex2i(838,380);
    glVertex2i(882,380);
    glVertex2i(860,465);

    glEnd();

    circle(860,465,6,6,32,178,170);
    circle(1034,368,15,13,32,178,170);


    glBegin(GL_QUADS);
    glColor3ub(32,178,170);
    glVertex2i(680,380);
    glVertex2i(680,355);
    glVertex2i(1040,355);
    glVertex2i(1040,380);

    ////////////////////////stand///////////////////////
    glVertex2i(1002,355);
    glVertex2i(1017,200);
    glVertex2i(1020,200);
    glVertex2i(1020,355);

    glVertex2i(700,355);
    glVertex2i(700,200);
    glVertex2i(703,200);
    glVertex2i(718,355);

    ////////////////////table /////////////////////////////


    glVertex2i(725,270);
    glVertex2i(735,200);
    glVertex2i(985,200);
    glVertex2i(995,270);

    glColor3ub(128,128,128);
    glVertex2i(800,255);
    glVertex2i(800,215);
    glVertex2i(920,215);
    glVertex2i(920,255);

    glColor3ub(255,255,255);
    glVertex2i(805,250);
    glVertex2i(805,220);
    glVertex2i(915,220);
    glVertex2i(915,250);

////////////////////////// left cups /////////////////////


glColor3ub(255,193,204);
    glVertex2i(745,320);
    glVertex2i(750,310);
    glVertex2i(760,310);
    glVertex2i(765,320);

 glColor3ub(255,99,71);
    glVertex2i(745,310);
    glVertex2i(750,290);
    glVertex2i(760,290);
    glVertex2i(765,310);

    glColor3ub(255,193,204);
    glVertex2i(745,300);
    glVertex2i(750,280);
    glVertex2i(760,280);
    glVertex2i(765,300);

    glColor3ub(255,99,71);
    glVertex2i(745,290);
    glVertex2i(750,270);
    glVertex2i(760,270);
    glVertex2i(765,290);




////////////////// right cups /////////////////////
glColor3ub(153,230,179);

    glVertex2i(785,300);
    glVertex2i(790,280);
    glVertex2i(800,280);
    glVertex2i(805,300);

    glColor3ub(95,158,160);
    glVertex2i(785,290);
    glVertex2i(790,270);
    glVertex2i(800,270);
    glVertex2i(805,290);
///////////////////// coffee machine ////////////////////////
glColor3ub(255,235,205);
  glVertex2i(820,330);
    glVertex2i(820,270);
    glVertex2i(850,270);
    glVertex2i(850,330);

    glColor3ub(255,0,0);
  glVertex2i(815,330);
    glVertex2i(815,305);
    glVertex2i(855,305);
    glVertex2i(855,330);
/////////////////////////////////////

    glColor3ub(169,169,169);
  glVertex2i(865,290);
    glVertex2i(865,270);
    glVertex2i(895,270);
    glVertex2i(895,290);

    glColor3ub(203,109,81);
  glVertex2i(860,290);
    glVertex2i(860,285);
    glVertex2i(900,285);
    glVertex2i(900,290);
    glEnd();

circle(835, 330, 5,5,0,0,0);

    glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (50,20,20);
glVertex2f(730,290);
glVertex2f(830,290);

glVertex2f(740,290);
glVertex2f(740,270);

glVertex2f(820,290);
glVertex2f(820,270);


glVertex2f(783,290);
glVertex2f(783,270);
glEnd();

    ////////// bill board ///////////
    glBegin(GL_QUADS);
    glColor3ub(25,25,112);
    glVertex2i(990,340);
    glVertex2i(990,270);
    glVertex2i(1040,270);
    glVertex2i(1040,340);

    glColor3ub(255,255,255);
    glVertex2i(995,335);
    glVertex2i(995,275);
    glVertex2i(1035,275);
    glVertex2i(1035,335);


    glEnd();

    glColor3ub(0,0,0);
    glPointSize(7.0);
    glBegin(GL_POINTS);
    glVertex2i(1005,320);
    glVertex2i(1005,305);
    glVertex2i(1005,290);
     glEnd();

    glColor3ub(255,0,0);
    glPointSize(3.0);
    glBegin(GL_POINTS);
    glVertex2i(1020,320);
    glVertex2i(1020,305);
    glVertex2i(1020,290);
    glVertex2i(1023,320);
    glVertex2i(1023,305);
    glVertex2i(1023,290);
    glVertex2i(1026,320);
    glVertex2i(1026,305);
    glVertex2i(1026,290);


    glEnd();

////////////////////// bench ////////////////////////
glEnable(GL_LINE_SMOOTH);
glLineWidth(5.5);
glBegin(GL_LINES);
glColor3ub (0,0,0);
glVertex2f(1152,255);
glVertex2f(1152,230);

glVertex2f(1208,255);
glVertex2f(1208,230);

glVertex2f(1220,235);
glVertex2f(1220,210);

glVertex2f(1140,235);
glVertex2f(1140,210);

glColor3ub (172,172,172);
glVertex2f(1120,232);
glVertex2f(1240,232);
glEnd();

glLineWidth(7);
glBegin(GL_LINES);
glColor3ub (172,172,172);

glVertex2f(1130,245);
glVertex2f(1230,245);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub (172,172,172);
glVertex2f(1130,258);
glVertex2f(1230,258);
glEnd();


}

void tob()
{


  glLineWidth(4);
glBegin(GL_LINES);
glColor3ub (138,51,36);
glVertex2f(195,150);
glVertex2f(195,205);
glEnd();

 circle(180,185,17,15,0,145,80);
 circle(208,185,17,15,0,145,80);
circle(195,207,17,15,0,145,80);



    glBegin(GL_QUADS);
    glColor3ub(107,68,35);
    glPointSize(5.0);
    glVertex2i(172,150);
    glVertex2i(182,120);
    glVertex2i(208,120);
    glVertex2i(218,150);
glEnd();



}


//////////////////////Popcorn store////////////////////////////
void Popcorn()
{

////table/////

    glBegin(GL_QUADS);
    glColor3ub(253, 216, 203);
    glPointSize(10.0);
    glVertex2i(130,250);
    glVertex2i(130,200);
    glVertex2i(250,200);
    glVertex2i(250,250);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(248, 188, 177);
    glPointSize(10.0);
    glVertex2i(140,250);
    glVertex2i(140,200);
    glVertex2i(240,200);
    glVertex2i(240,250);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(253, 216, 203);
    glPointSize(10.0);
    glVertex2i(150,250);
    glVertex2i(150,200);
    glVertex2i(230,200);
    glVertex2i(230,250);
    glEnd();


glBegin(GL_QUADS);
    glColor3ub(248, 188, 177);
    glPointSize(10.0);
    glVertex2i(160,250);
    glVertex2i(160,200);
    glVertex2i(220,200);
    glVertex2i(220,250);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(253, 216, 203);
    glPointSize(10.0);
    glVertex2i(170,250);
    glVertex2i(170,200);
    glVertex2i(210,200);
    glVertex2i(210,250);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(248, 188, 177);
    glPointSize(10.0);
    glVertex2i(180,250);
    glVertex2i(180,200);
    glVertex2i(200,200);
    glVertex2i(200,250);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(206, 187, 178);
    glPointSize(10.0);
    glVertex2i(130,195);
    glVertex2i(130,190);
    glVertex2i(250,190);
    glVertex2i(250,195);
    glEnd();

    //////////left piller///////////
    glBegin(GL_QUADS);
    glColor3ub(247, 186, 174);
    glPointSize(10.0);
    glVertex2i(130,320);
    glVertex2i(130,195);
    glVertex2i(135,195);
    glVertex2i(145,320);
    glEnd();
//shade
    glBegin(GL_QUADS);
    glColor3ub(220, 164, 149);
    glPointSize(10.0);
    glVertex2i(145,320);
    glVertex2i(135,195);
    glVertex2i(137,195);
    glVertex2i(150,320);
    glEnd();
//right piller
     glBegin(GL_QUADS);
    glColor3ub(247, 186, 174);
    glPointSize(10.0);
    glVertex2i(190,320);
    glVertex2i(190,195);
    glVertex2i(185,195);
    glVertex2i(182,320);
    glEnd();
//shade
    glBegin(GL_QUADS);
    glColor3ub(220, 164, 149);
    glPointSize(10.0);
    glVertex2i(182,320);
    glVertex2i(182,195);
    glVertex2i(186,195);
    glVertex2i(186,320);
    glEnd();
         //left
    glBegin(GL_QUADS);
    glColor3ub(253, 200, 182);
    glPointSize(10.0);
    glVertex2i(190,320);
    glVertex2i(190,195);
    glVertex2i(195,195);
    glVertex2i(197,320);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(220, 164, 149);
    glPointSize(10.0);
    glVertex2i(195,320);
    glVertex2i(195,195);
    glVertex2i(199,195);
    glVertex2i(199,320);
    glEnd();
//right
     glBegin(GL_QUADS);
    glColor3ub(253, 200, 182);
    glPointSize(10.0);
    glVertex2i(250,320);
    glVertex2i(250,195);
    glVertex2i(245,195);
    glVertex2i(235,320);
    glEnd();

     glBegin(GL_QUADS);
    glColor3ub(220, 164, 149);
    glPointSize(10.0);
    glVertex2i(232,320);
    glVertex2i(242,195);
    glVertex2i(245,195);
    glVertex2i(235,320);
    glEnd();
    //////////////////////

     glBegin(GL_QUADS);
    glColor3ub(247, 186, 174);
    glPointSize(10.0);
    glVertex2i(130,320);
    glVertex2i(130,305);
    glVertex2i(190,305);
    glVertex2i(190,320);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(253, 200, 182);
    glPointSize(10.0);
    glVertex2i(190,320);
    glVertex2i(190,305);
    glVertex2i(250,305);
    glVertex2i(250,320);
    glEnd();

    //shade
    glBegin(GL_QUADS);
    glColor3ub(220, 164, 149);
    glPointSize(10.0);
    glVertex2i(145,305);
    glVertex2i(145,300);
    glVertex2i(185,300);
    glVertex2i(185,305);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(220, 164, 149);
    glPointSize(10.0);
    glVertex2i(197,305);
    glVertex2i(197,300);
    glVertex2i(235,300);
    glVertex2i(235,305);
    glEnd();

    ///////////chawni////////
glBegin(GL_TRIANGLES);
 glColor3ub(252, 199, 181);
    glPointSize(10.0);
    glVertex2i(130,320);
    glVertex2i(187,320);
    glVertex2i(195,370);
    glEnd();

    glBegin(GL_TRIANGLES);
 glColor3ub(247, 187, 176);
    glPointSize(10.0);
    glVertex2i(139,323);
    glVertex2i(183,323);
    glVertex2i(187,358);
    glEnd();
    //shade///

    glBegin(GL_TRIANGLES);
 glColor3ub(252, 199, 181);
    glPointSize(10.0);
    glVertex2i(187,320);
    glVertex2i(250,320);
    glVertex2i(195,370);
    glEnd();

    glBegin(GL_TRIANGLES);
 glColor3ub(255, 215, 207);
    glPointSize(10.0);
    glVertex2i(195,323);
    glVertex2i(243,323);
    glVertex2i(195,358);
    glEnd();

    ///////////////////popcorn///////////////////
   glBegin(GL_QUADS);
    glColor3ub(221, 199, 171);
    glPointSize(10.0);
    glVertex2i(160,337);
    glVertex2i(160,320);
    glVertex2i(220,320);
    glVertex2i(220,337);
    glEnd();

}

void dolna()
{
    glPointSize(10.0);
    glBegin(GL_TRIANGLES);
    glColor3ub(35,41,122);
    glVertex2i(100,630);
    glVertex2i(400,630);
    glVertex2i(250,710);

    glColor3ub(255,211,0);
    glVertex2i(130,630);
    glVertex2i(370,630);
    glVertex2i(250,710);

    glColor3ub(35,41,122);
    glVertex2i(160,630);
    glVertex2i(340,630);
    glVertex2i(250,710);

    glColor3ub(255,211,0);
    glVertex2i(190,630);
    glVertex2i(310,630);
    glVertex2i(250,710);

    glColor3ub(35,41,122);
    glVertex2i(225,630);
    glVertex2i(275,630);
    glVertex2i(250,710);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,211,0);
    glVertex2i(225,630);
    glVertex2i(225,550);
    glVertex2i(275,550);
    glVertex2i(275,630);

    glColor3ub(19,67,117);
    glVertex2i(225,610);
    glVertex2i(225,602);
    glVertex2i(275,602);
    glVertex2i(275,610);

    glVertex2i(225,580);
    glVertex2i(225,573);
    glVertex2i(275,573);
    glVertex2i(275,580);
    glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub (255,211,0);
glVertex2f(360,630);
glVertex2f(410,480);

glVertex2f(300,630);
glVertex2f(330,460);

glVertex2f(170,500);
glVertex2f(200,630);

glVertex2f(90,500);
glVertex2f(140,630);
glEnd();
circle(170, 500,23,23,19,67,117);
circle(100,500,23,23,19,67,117);

}


///////////////////////////////  GAME /////////////////////////////////
void Sprint( float x, float y, char *st)
{
    int l,i;


    l=strlen( st );
    glColor3f(0.0,0.0,0.0);

    glRasterPos2f( x, y);
    for( i=0; i<l; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, st[i]);

    }
}
void Sprint1( float x, float y, char *st)
{
    int l,i;

    l=strlen( st );
    glColor3ub(224,255,255);

    glRasterPos2f( x, y);
    for( i=0; i<l; i++)
    {
       glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, st[i]);

    }
}
void scorebar()
{
///////////////////////text field////////////////////
glBegin(GL_QUADS);
glColor3ub (178,255,255);
glVertex2i(300,572);
glVertex2i(300,550);
glVertex2i(580,550);
glVertex2i(580,572);
glEnd();

}
void gamebar1()
{

glBegin(GL_QUADS);
glColor3ub (255,69,0);
glVertex2i(200,550);
glVertex2i(200,250);
glVertex2i(240,250);
glVertex2i(240,550);
glEnd();
}
void gamebar2()
{
glBegin(GL_QUADS);
glColor3ub (255,140,0);
glVertex2i(240,550);
glVertex2i(240,250);
glVertex2i(280,250);
glVertex2i(280,550);
glEnd();
}

void gamebar3()
{

glBegin(GL_QUADS);
glColor3ub (139,190,27);
glVertex2i(280,550);
glVertex2i(280,250);
glVertex2i(320,250);
glVertex2i(320,550);
glEnd();
}
void gamebar4()
{

glBegin(GL_QUADS);
glColor3ub (208,255,20);
glVertex2i(320,550);
glVertex2i(320,250);
glVertex2i(360,250);
glVertex2i(360,550);
glEnd();
}
void gamebar5()
{

glBegin(GL_QUADS);
glColor3ub (255,215,0);
glVertex2i(360,550);
glVertex2i(360,250);
glVertex2i(400,250);
glVertex2i(400,550);
glEnd();
}
void gamebar6()
{
glBegin(GL_QUADS);
glColor3ub (203,65,84);
glVertex2i(400,550);
glVertex2i(400,250);
glVertex2i(440,250);
glVertex2i(440,550);
glEnd();
}
void gamebar7()
{
glBegin(GL_QUADS);
glColor3ub (253,188,180);
glVertex2i(440,550);
glVertex2i(440,250);
glVertex2i(480,250);
glVertex2i(480,550);
glEnd();
}
void gamebar8()
{
glBegin(GL_QUADS);
glColor3ub (219,112,147);
glVertex2i(480,550);
glVertex2i(480,250);
glVertex2i(520,250);
glVertex2i(520,550);
glEnd();
}
void gamebar9()
{
glBegin(GL_QUADS);
glColor3ub (164,221,237);
glVertex2i(520,550);
glVertex2i(520,250);
glVertex2i(560,250);
glVertex2i(560,550);
glEnd();
}
void gamebar10()
{
glBegin(GL_QUADS);
glColor3ub (153,102,204);
glVertex2i(560,550);
glVertex2i(560,250);
glVertex2i(600,250);
glVertex2i(600,550);
glEnd();
}
void gamebar11()
{

glBegin(GL_QUADS);
glColor3ub (123,104,238);
glVertex2i(600,550);
glVertex2i(600,250);
glVertex2i(640,250);
glVertex2i(640,550);
glEnd();
}
void gamebar12()
{
glBegin(GL_QUADS);
glColor3ub (102,153,204);
glVertex2i(640,550);
glVertex2i(640,250);
glVertex2i(680,250);
glVertex2i(680,550);
glEnd();

}

void enemy1(int cx,int cy,int sr1,int sg1,int sb1,int sr2,int sg2,int sb2)
{
    ////////////////////////enemy1 lines////////////////////////

glColor3ub (sr1,sg1,sb1);
glEnable(GL_LINE_SMOOTH);
glLineWidth(1.3);

glBegin(GL_LINES);
glVertex2f(cx,cy+16);
glVertex2f(cx,cy-16);

glVertex2f(cx-16,cy);
glVertex2f(cx+16,cy);

glVertex2f(cx-11,cy+11);
glVertex2f(cx+10,cy-11);

glVertex2f(cx-11,cy-11);
glVertex2f(cx+10,cy+11);
glEnd();

///////////////////////////enemy 1 points////////////////
glColor3ub (sr1,sg1,sb1);
glPointSize(4.0);
glBegin(GL_POINTS);
glVertex2f(cx,cy+17);
glVertex2f(cx,cy-17);


glVertex2f(cx-17,cy);
glVertex2f(cx+17,cy);

glVertex2f(cx-11,cy+11);
glVertex2f(cx+10,cy-11);

glVertex2f(cx-11,cy-11);
glVertex2f(cx+11,cy+11);
glEnd();
///////////////////////////enemy 1 circle///////////////////
float theta;
glColor3ub (sr2,sg2,sb2);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(cx+10*cos(theta),cy+10*sin(theta));/////////270,500
}
glEnd();

}

void game()
{
    float theta;
////////////////// outside screen ///////////////////

glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (0, 4, 32);
glVertex2i(215,535);
glColor3ub (19, 32, 123);
glVertex2i(215,265);
glColor3ub (19, 32, 123);
glVertex2i(665,265);
glColor3ub (0, 4, 32);
glVertex2i(665,535);
glEnd();
glPopMatrix();

///////////////////////////////////////Left stand////////////////////////////////////////
glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (125, 66, 16);
glVertex2i(280,250);
glVertex2i(280,120);
glVertex2i(320,120);
glVertex2i(320,250);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(280,250);
glVertex2i(280,230);
glVertex2i(300,230);
glVertex2i(300,250);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(300,230);
glVertex2i(300,210);
glVertex2i(320,210);
glVertex2i(320,230);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(280,210);
glVertex2i(280,190);
glVertex2i(300,190);
glVertex2i(300,210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(300,190);
glVertex2i(300,170);
glVertex2i(320,170);
glVertex2i(320,190);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(280,170);
glVertex2i(280,150);
glVertex2i(300,150);
glVertex2i(300,170);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(300,150);
glVertex2i(300,130);
glVertex2i(320,130);
glVertex2i(320,150);
glEnd();
glPopMatrix();

/////////////////////////////////////Right stand//////////////////////////////////////////////
glPopMatrix();
 glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (125, 66, 16);
glVertex2i(560,250);
glVertex2i(560,120);
glVertex2i(600,120);
glVertex2i(600,250);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(560,250);
glVertex2i(560,230);
glVertex2i(580,230);
glVertex2i(580,250);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(580,230);
glVertex2i(580,210);
glVertex2i(600,210);
glVertex2i(600,230);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(560,210);
glVertex2i(560,190);
glVertex2i(580,190);
glVertex2i(580,210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(580,190);
glVertex2i(580,170);
glVertex2i(600,170);
glVertex2i(600,190);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(560,170);
glVertex2i(560,150);
glVertex2i(580,150);
glVertex2i(580,170);
glEnd();

glBegin(GL_QUADS);
glColor3ub (157, 81, 8);
glVertex2i(580,150);
glVertex2i(580,130);
glVertex2i(600,130);
glVertex2i(600,150);
glEnd();
glPopMatrix();

///////////////////// stand down///////////////
glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (0,0,0);
glVertex2i(540,130);
glVertex2i(540,120);
glVertex2i(620,120);
glVertex2i(620,130);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (0,0,0);
glVertex2i(260,130);
glVertex2i(260,120);
glVertex2i(340,120);
glVertex2i(340,130);
glEnd();
glPopMatrix();



glPushMatrix();
glBegin(GL_POLYGON);
glColor3ub (99, 45, 19);
//glColor3ub (140, 85, 55);
glVertex2i(392,250);
glVertex2i(382,227);
glVertex2i(503,227);
glVertex2i(493,250);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
glColor3ub (140, 85, 55);
glVertex2i(382,227);
glVertex2i(382,218);
glVertex2i(503,218);
glVertex2i(503,227);
glEnd();
glPopMatrix();
////////////////////////////////////////////////////////////

glPushMatrix();
glColor3ub (0,0,255);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(410+6*cos(theta),250+6*sin(theta));
}
glEnd();
glPopMatrix();

glPushMatrix();
glEnable(GL_LINE_SMOOTH);
glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (218,165,32);
glVertex2i(410,243);
glVertex2i(410,225);
glEnd();
glPopMatrix();

////////////////////////////////////////////////////////////

glPushMatrix();
glColor3ub (255,0,0);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(445+6*cos(theta),250+6*sin(theta));
}
glEnd();
glPopMatrix();

glPushMatrix();
glEnable(GL_LINE_SMOOTH);
glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (218,165,32);
glVertex2i(445,243);
glVertex2i(445,225);
glEnd();
glPopMatrix();

////////////////////////////////////////////////////////////

glPushMatrix();

glColor3ub (0,0,255);
glBegin(GL_POLYGON);
for (int i=0;i<360;i++)
{
    theta = i*(3.1416/180);
    glVertex2f(480+6*cos(theta),250+6*sin(theta));
}
glEnd();
glPopMatrix();

glPushMatrix();
glEnable(GL_LINE_SMOOTH);
glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (218,165,32);
glVertex2i(480,243);
glVertex2i(480,225);
glEnd();
glPopMatrix();

if(!gamecondition&&!gamevisiblecondition&&!endcondition&&!wincondition)
{
  glPushMatrix();
glTranslatef(335, 380, 0);
glColor3ub(224,255,255);
renderBitmapString(30,20,(void *)font1,"Galaxy Warriors");
glPopMatrix();
}





}


void rocket()
{
glPushMatrix();
glTranslatef(lrshift, bshift, 0.0);

///Bullet

glBegin(GL_TRIANGLES);
glColor3ub(128, 128, 128);
glVertex2i(440,340);
glVertex2i(435,330);
glVertex2i(445,330);
glEnd();
glPopMatrix();

///Fire spot triangle

glPushMatrix();
glTranslatef(lrshift, 0.0, 0.0);
glBegin(GL_TRIANGLES);
glColor3ub (140, 85, 55);
glVertex2i(440,340);
glVertex2i(435,330);
glVertex2i(445,330);
glEnd();

///Middle Upper Quad

glBegin(GL_QUADS);
glColor3ub (255, 0, 0);
glVertex2i(435,330);
glVertex2i(435,310);
glVertex2i(445,310);
glVertex2i(445,330);
glEnd();

///Middle Lower Quad

glBegin(GL_POLYGON);
glColor3ub (0,206,209);
glVertex2i(435,310);
glVertex2i(435,290);
glVertex2i(440,280);
glVertex2i(445,290);
glVertex2i(445,310);
glEnd();

///Left Wing

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(435,320);
glVertex2i(410,320);
glVertex2i(410,310);
glVertex2i(418,310);
glVertex2i(435,295);
glEnd();

///Left Wing Extension

glBegin(GL_QUADS);
glColor3ub (210,105,30);
glVertex2i(402,330);
glVertex2i(402,300);
glVertex2i(410,300);
glVertex2i(410,330);
glEnd();

glEnable(GL_LINE_SMOOTH);
glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (222,170,136);
glVertex2i(395,330);
glVertex2i(415,330);
glEnd();

///Right Wing

glBegin(GL_POLYGON);
glColor3ub (255,215,0);
glVertex2i(445,320);
glVertex2i(470,320);
glVertex2i(470,310);
glVertex2i(462,310);
glVertex2i(445,295);
glEnd();

///Right Wing Extension

glBegin(GL_QUADS);
glColor3ub (210,105,30);
glVertex2i(478,330);
glVertex2i(478,300);
glVertex2i(470,300);
glVertex2i(470,330);
glEnd();

glEnable(GL_LINE_SMOOTH);
glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (222,170,136);
glVertex2i(483,330);
glVertex2i(465,330);
glEnd();

///Tail

glBegin(GL_POLYGON);
glColor3ub (0,139,139);
glVertex2i(435,290);
glVertex2i(425,285);
glVertex2i(425,280);
glVertex2i(455,280);
glVertex2i(455,285);
glVertex2i(445,290);
glEnd();

glPopMatrix();



glPushMatrix();
glTranslatef(0, tri1, 0);
enemy1(270,500,137, 166, 199,50, 84, 182);
glPopMatrix();

glPushMatrix();
glTranslatef(0, tri2, 0);
enemy1(353,500,252,194,0,252,194,0);
glPopMatrix();

glPushMatrix();
glTranslatef(0, tri3, 0);
enemy1(436,500,0,139,139,0,139,139);
glPopMatrix();

glPushMatrix();
glTranslatef(0, tri4, 0);
enemy1(519,500,209, 11, 2,209, 11, 2);
glPopMatrix();

glPushMatrix();
glTranslatef(0, tri5, 0);
enemy1(602,500,153,50,204,153,50,204);
glPopMatrix();


}


void rain()
{
    if(raincondition){




    for(int i=1;i<=1768;i++)
    {
        int x=rand(),y=rand();
        x%=1768; y%=1024;
glLineWidth(1);
         glBegin(GL_LINES);

        glColor3ub (193,209,226);
        glVertex2i(x,y);
        glVertex2i(x+7,y+7);
        glEnd();

    }
}
}


void snow()
{
    if(snowcondition){




    for(int i=1;i<=250;i++)
    {
        int x=rand(),y=rand();
        x%=1768; y%=1024;
        glBegin(GL_POINTS);
        glColor3ub (232,239,248);
        glVertex2i(x,y);
        glEnd();

    }
}
}



void carleft(int value){

if(cleft){
if(carmove)
{
    clrshift -= 3;
}


    if (clrshift <= -900) {
		clrshift = 1200;
	}

	glutPostRedisplay();
	glutTimerFunc(25, carleft, 0);
}
}

void carright(int value){
if(cright){

if(carmove)
{
   clrshift += 3;
}


     if (clrshift > 1200) {
		clrshift = -900;
	}
	glutPostRedisplay();
	glutTimerFunc(25, carright, 0);
}
}

void rocleft(int value){

if(rleft){

    lrshift -= 10;

    if (lrshift <= -175) {
		lrshift = -175;
	}

	glutPostRedisplay();

}
}



void rocright(int value){
if(rright){

    lrshift += 10;

     if (lrshift > 175) {
		lrshift = 175;
	}
	glutPostRedisplay();

}
}



void bfire(int value){
if(fire){

    bshift += 20;

 if (bshift > 200) {

		bshift = 0;
glutPostRedisplay();
	}


else{

    glutTimerFunc(25, bfire, 0);
}



}
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{

		if(gamevisiblecondition)
        {
            fire = true;
	         PlaySound(TEXT("gun.wav"), NULL, SND_FILENAME | SND_ASYNC);

         bfire(bshift);
        }



		}
	}

	glutPostRedisplay();
}

void spe_key(int key, int x, int y){

    switch (key) {



        case GLUT_KEY_LEFT:
            rright = false;
	    rleft = true;
	    rocleft(lrshift);
            break;

        case GLUT_KEY_RIGHT:
           rleft = false;
	     rright = true;
         rocright(lrshift);
            break;

        default:
                break;
        }

}


void thankyou()
{

system("cls");

    system("color E");
int i=0;
int x=30;
while(i<10)
{

system("cls");
gotoXY(3,x);
cout<<"               ooooooooooooo ooooo   ooooo       .o.       ooooo      ooo oooo    oooo    oooooo   oooo   .oooooo.   ooooo     ooo"<<endl;
gotoXY(3,x+1);
cout<<"               8'   888   `8 `888'   `888'      .888.      `888b.     `8' `888   .8P'      `888.   .8'   d8P'  `Y8b  `888'     `8'"<<endl;
gotoXY(3,x+2);
cout<<"                    888       888     888      .8''88.      8 `88b.    8   888  88'         `888. .8'   888      888  888       8"<<endl;
gotoXY(3,x+3);
cout<<"                    888       888ooooo888     .8' `888.     8   `88b.  8   88888[            `888.8'    888      888  888       8"<<endl;
gotoXY(3,x+4);
cout<<"                    888       888     888    .88ooo8888.    8     `88b.8   888`88b.           `888'     888      888  888       8"<<endl;
gotoXY(3,x+5);
cout<<"                    888       888     888   .8'     `888.   8       `888   888  `88b.          888      `88b    d88'  `88.    .8'"<<endl;
gotoXY(3,x+6);
cout<<"                   o888o     o888o   o888o o88o     o8888o o8o        `8  o888o  o888o        o888o      `Y8bood8P'     `YbodP'"<<endl;

x--;
if(x<=0)
{


gotoXY(41,12);
cout<<"=================================================================";
gotoXY(57,13);
cout<<"ALL RIGHT RESERVED BY @ TEAM_HYDRA";
gotoXY(41,14);
cout<<"==================================================================";
gotoXY(59,15);
cout<<"Thank You For Being With Us:)";
gotoXY(40,16);
cout<<"-------------------------------------------------------------------";
gotoXY(61,17);
cout<<"STAY HOME |||| STAY SAFE:)";

cout<<"\a";



gotoXY(70,25);
cout<<"Press any key...";
getch();
cout<<endl<<endl<<endl<<endl;
SetColor(15);

 exit(0);

}

}
}


void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':
  cright = true;
	    cleft = false;
	    carmove=true;
	    carright(clrshift);
    break;

    case 'a':
  cright = false;
	    cleft = true;
	    carmove=true;
	    carleft(clrshift);
    break;

     case 'z':
	    carmove=false;

    break;

case '1':
   sunrisecondition=true;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;
 count1=0;
    break;

case '2':

   sunrisecondition=false;
 morningcondition=true;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;
count1=300;
    break;

case '3':
   sunrisecondition=false;
 morningcondition=false;
 nooncondition=true;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;
 count1=600;
break;

case '4':
   sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=true;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=false;
count1=900;
break;


case '5':
    sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=true;
 sunsetcondition=false;
 nightcondition=false;
 count1=1200;
    break;

case '6':
    sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=true;
 nightcondition=false;
 count1=1500;
    break;

case '7':
     sunrisecondition=false;
 morningcondition=false;
 nooncondition=false;
 afternooncondition=false;
 eveningcondition=false;
 sunsetcondition=false;
 nightcondition=true;
 count1=1800;
    break;

case 'r':
    raincondition=true;
    snowcondition=false;
    PlaySound(TEXT("rain.wav"), NULL, SND_FILENAME | SND_ASYNC);
    rain();

break;

case 's':
    snowcondition=true;
    raincondition=false;
    PlaySound(TEXT("snow.wav"), NULL, SND_FILENAME | SND_ASYNC);
    snow();

break;

case 'o':
     raincondition=false;
      snowcondition=false;
      sndPlaySound(NULL,SND_ASYNC);
break;

case 'h':

     horn++;
     if(horn%2==0)
     {
       sound=true;
       soundcondition=true;
     }

     else
        {
        sound=false;
        soundcondition=false;
        sndPlaySound(NULL,SND_ASYNC);
     }

break;

case 'p':
    if(!gamecondition && !gamevisiblecondition && !endcondition)
    {
        N=0;
    start=0;
    ending=0;
    point=0;
     bshift = 0;
 lrshift = 0;
 udshift = 0;
 tri1 = 15;
 tri2 = 10;
 tri3 = 12;
 tri4 = 5;
 tri5 = 14;
endcondition=false;
     gamecondition=true;
     lostcondition=false;
 PlaySound(TEXT("game_start.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
break;glLineWidth(1);

case 'e':
    if(gamevisiblecondition && !endcondition)
    {
        gamecondition=false;
     gamevisiblecondition=false;
     endcondition=true;
     start=0;
     ending=0;
    PlaySound(TEXT("game_end.wav"), NULL, SND_FILENAME | SND_ASYNC);

    }
break;




case 'f':
    if(gamevisiblecondition)
        {
            fire = true;
	         PlaySound(TEXT("gun.wav"), NULL, SND_FILENAME | SND_ASYNC);

         bfire(bshift);
        }
break;

case 'c':
    chorkicondition=true;
    PlaySound(TEXT("chorki.wav"), NULL, SND_FILENAME | SND_ASYNC);
break;

case 'v':
    chorkicondition=false;
    sndPlaySound(NULL,SND_ASYNC);
break;


    case 27:
        glutDestroyWindow(1);
        thankyou();


        break;

case 'b':
     ballooncondition=true;
         PlaySound(TEXT("party.wav"), NULL, SND_FILENAME | SND_ASYNC);
snowcondition=false;
raincondition=false;
 byBalloonMovex = 0;
 byBalloonMovey = -500;//12th
 dBalloonMovex = 0;
 dBalloonMovey = -630;//10th
 bmBalloonMovex = 0;
 bmBalloonMovey = -800;//3rd
 lcBalloonMovey = -500;//1st
 lcBalloonMovex = 0;
 stBalloonMovex = 0;
 stBalloonMovey = -530;//4th
 oBalloonMovex = 0;
 oBalloonMovey = -800;//8th
 bBalloonMovex = 0;
 bBalloonMovey = -500;//9th
 prBalloonMovex = 0;
 prBalloonMovey = -650;//5th
 pBalloonMovex = 0;
 pBalloonMovey = -600;//6th
 dbBalloonMovex = 0;
 dbBalloonMovey = -600;//2nd
 rcBalloonMovex = 0;
 rcBalloonMovey = -400;//11th
 bcBalloonMovey = -450;//13th
 bcBalloonMovex = 0;
 bbBalloonMovey = -350;//10th
 bbBalloonMovex= 0;
break;


glutPostRedisplay();


	}
}

void instructionpage()
{
    system("cls");
    SetColor(3);

    gotoXY(80,0);
    cout<<"------------------------------------------------";
    gotoXY(82,2);
    cout<<"--------------------------------------------";
    gotoXY(89,4);
    cout<<"*** Instruction or Key Binds ***";
    gotoXY(82,6);
    cout<<"--------------------------------------------";
    gotoXY(80,8);
    cout<<"------------------------------------------------";

///Change of natural view

    gotoXY(35,11);
    SetColor(10);
    cout<<" Change of Nature(Key Binds)";
    gotoXY(35,12);
    SetColor(10);
    cout<<"-----------------------------";
    gotoXY(35,14);
    SetColor(11);
    cout<<"| Press 1 =  For SUNRISE    |";
    gotoXY(35,15);
    cout<<"| Press 2 =  For MORNING    |";
    gotoXY(35,16);
    cout<<"| Press 3 =  For NOON       |";
    gotoXY(35,17);
    cout<<"| Press 4 =  For AFTERNOON  |";
    gotoXY(35,18);
    cout<<"| Press 5 =  For EVENING    |";
    gotoXY(35,19);
    cout<<"| Press 6 =  For SUNSET     |";
    gotoXY(35,20);
    cout<<"| Press 7 =  For NIGHT      |";
    gotoXY(35,22);
    SetColor(4);
    cout<<"Note: If you don't change the\n                                   nature, it will automatically\n                                     update after 15 seconds";

///Car control

    gotoXY(92,11);
    SetColor(10);
    cout<<" Car Control(Key Binds)";
    gotoXY(92,12);
    SetColor(10);
    cout<<"------------------------";
    gotoXY(82,14);
    SetColor(11);
    cout<<"| Press A =  Move the CART to LEFT          |";
    gotoXY(82,15);
    cout<<"| Hold A  =  To speed up the CART to LEFT   |";
    gotoXY(82,16);
    cout<<"| Press D =  Move the CART to RIGHT         |";
    gotoXY(82,17);
    cout<<"| Hold D  =  To speed up the CART to RIGHT  |";
    gotoXY(82,18);
    cout<<"| Press Z =  To STOP the Car                |";
    gotoXY(82,20);
    SetColor(4);
    cout<<"  Note: You can change only the first cart.";

///Wheel control

    gotoXY(85,29);
    SetColor(10);
    cout<<" Catherine Wheel Control(Key Binds)";
    gotoXY(85,30);
    SetColor(10);
    cout<<"------------------------------------";
    gotoXY(82,32);
    SetColor(11);
    cout<<"|  Press C =  To move the CATHERINE WHEEL   |";
    gotoXY(82,34);
    cout<<"|  Press V =  To stop the CATHERINE WHEEL   |";

///Climate Change

    gotoXY(35,29);
    SetColor(10);
    cout<<" Change of Climate(Key Binds)";
    gotoXY(35,30);
    SetColor(10);
    cout<<"------------------------------";
    gotoXY(27,32);
    SetColor(11);
    cout<<"| Press R = To Start RAIN                    |";
    gotoXY(27,33);
    cout<<"| Press S = To Start SNOW                    |";
    gotoXY(27,34);
    cout<<"| Press O = Turn Off Both RAIN and SNOW      |";
    gotoXY(27,35);
    cout<<"| Press H = For STARTING environmental sound |";
    gotoXY(27,36);
    cout<<"| Press H = Again press H to stop Sound      |";
    SetColor(4);
    gotoXY(27,38);
    cout<<"Note: You can't start both RAIN and SNOW at\n\t\t\t\t\t\ta time.";



///Game Control

    gotoXY(158,11);
    SetColor(10);
    cout<<" Game Control(Key Binds)";
    gotoXY(155,12);
    SetColor(10);
    cout<<"-------------------------------";
    gotoXY(145,14);
    SetColor(11);
    cout<<"| Press P = PLAY the GAME                              |";
    gotoXY(145,15);
    cout<<"| Press E = END the GAME                               |";
    gotoXY(145,16);
    cout<<"| Press F = For FIRE                                   |";
    gotoXY(145,17);
    cout<<"| Press LEFT BUTTON(Mouse) = For FIRE                  |";
    gotoXY(145,18);
    cout<<"| Press LEFT ARROW BUTTON  = To move the rocket LEFT   |";
    gotoXY(145,19);
    cout<<"| Press RIGHT ARROW BUTTON = To move the rocket RIGHT  |";
    gotoXY(145,21);
    SetColor(4);
    cout<<"Note: If you make 100 then you will win and if you make\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t-25 the game will be over.\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      The point will be deducted according to the enemy.";

///Balloon Control

    gotoXY(158,29);
    SetColor(10);
    cout<<" Balloon Control(Key Binds)";
    gotoXY(157,30);
    SetColor(10);
    cout<<"------------------------------";
    gotoXY(145,32);
    SetColor(11);
    cout<<"|            Press B = To FLY the BALLOON             |";



    gotoXY(88,45);
    SetColor(6);
    cout<<"=> Press any key to continue to the FOH"<<endl<<endl;
    gotoXY(90,47);
    SetColor(12);
    cout<<"=> Press ESC key to Exit from FOH"<<endl<<endl<<endl<<endl<<endl;
    SetColor(8);


    getch();

}

void coverpage()
{

    system("cls");
    SetColor(3);

    gotoXY(56,1);
    cout<<"------------------------------------------------";
    gotoXY(58,2);
    cout<<"--------------------------------------------";
    gotoXY(70,3);
    cout<<"*** WELCOME TO AIUB ***";
    gotoXY(58,4);
    cout<<"--------------------------------------------";
    gotoXY(56,5);
    cout<<"------------------------------------------------";
    gotoXY(56,7);
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::";
    SetColor(12);
    gotoXY(74,8);
    cout<<"* TEAM HYDRA *";
    SetColor(3);
    gotoXY(56,9);
    cout<<"::::::::::::::::::::::::::::::::::::::::::::::::";
    SetColor(14);
    gotoXY(63,11);
    cout<<" Project Name: Fest Of Harmony (FOH)";

    SetColor(3);
    gotoXY(72,13);
    cout<<"*****************";
    SetColor(12);
    gotoXY(75,14);
    cout<<"Prepared by       ";
    SetColor(3);
    gotoXY(72,15);
    cout<<"*****************";
    SetColor(11);
    gotoXY(65,17);
    cout<<"NILOY KANTI PAUL (20-41896-1)";
    gotoXY(66,19);
    cout<<"DIPANWITA SAHA (20-41854-1)";
    gotoXY(66,21);
    cout<<"KAUSHIK BISWAS (20-41864-1)";
    gotoXY(64,23);
    cout<<"NIGER SULTANA NISHI (19-40185-1)";
    gotoXY(65,25);
    cout<<"SHAMSUNNAHAR RIYA (19-41672-3)";
    SetColor(3);
    gotoXY(59,27);
    cout<<"------------------------------------------";
    SetColor(12);
    gotoXY(72,28);
    cout<<"* Project Details: *";
    SetColor(3);
    gotoXY(59,29);
    cout<<"------------------------------------------";


    gotoXY(40,31);
    cout<<"=> We tried to make a nature based graphics design which is representing a village fair.";
     gotoXY(40,33);
    cout<<"=> There is a screen where anyone can play a game named Galaxy Warriors.";
     gotoXY(40,34);
    cout<<"=> Used some nature sound along with the environmental sound in respect to the natural changes.";
     gotoXY(40,36);
    cout<<"=> Rain, snow, car, balloon, catherine wheel functionalities are attractively shown here";


SetColor(10);
    gotoXY(33,40);
    cout<<"***NOTE:YOU CAN CONTROL THE FUNCTIONALITY. TO KNOW ABOUT MORE PLEASE MOVE FORWARD TO INSTRUCTION PAGE:)***";
SetColor(3);
    gotoXY(63,45);
    cout<<"Please press any key to continue...";

    getch();

}


void designpage()
{

system("cls");

cout<<endl<<endl<<endl<<endl<<endl;
cout<<"                                        AAA                    IIIIIIIIII     UUUUUUUU     UUUUUUUU     BBBBBBBBBBBBBBBBB   "<<endl;
Sleep(15);
cout<<"                                       A:::A                   I::::::::I     U::::::U     U::::::U     B::::::::::::::::B  "<<endl;
Sleep(15);
cout<<"                                      A:::::A                  I::::::::I     U::::::U     U::::::U     B::::::BBBBBB:::::B "<<endl;
Sleep(15);
cout<<"                                     A:::::::A                 II::::::II     UU:::::U     U:::::UU     BB:::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                                    A:::::::::A                  I::::I        U:::::U     U:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                                   A:::::A:::::A                 I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                                  A:::::A A:::::A                I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(15);
cout<<"                                 A:::::A   A:::::A               I::::I        U:::::D     D:::::U        B:::::::::::::BB  "<<endl;
Sleep(15);
cout<<"                                A:::::A     A:::::A              I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(15);
cout<<"                               A:::::AAAAAAAAA:::::A             I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                              A:::::::::::::::::::::A            I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                             A:::::AAAAAAAAAAAAA:::::A           I::::I        U::::::U   U::::::U        B::::B     B:::::B"<<endl;
Sleep(15);
cout<<"                            A:::::A             A:::::A        II::::::II      U:::::::UUU:::::::U      BB:::::BBBBBB::::::B"<<endl;
Sleep(15);
cout<<"                           A:::::A               A:::::A       I::::::::I       UU:::::::::::::UU       B:::::::::::::::::B "<<endl;
Sleep(15);
cout<<"                          A:::::A                 A:::::A      I::::::::I         UU:::::::::UU         B::::::::::::::::B  "<<endl;
Sleep(15);
cout<<"                         AAAAAAA                   AAAAAAA     IIIIIIIIII           UUUUUUUUU           BBBBBBBBBBBBBBBBB   "<<endl<<endl;

int i=1;

while(i<=15)

{system("cls");

cout<<endl<<endl<<endl<<endl<<endl;

cout<<"                                        AAA                    IIIIIIIIII     UUUUUUUU     UUUUUUUU     BBBBBBBBBBBBBBBBB   "<<endl;
cout<<"                                       A:::A                   I::::::::I     U::::::U     U::::::U     B::::::::::::::::B  "<<endl;
cout<<"                                      A:::::A                  I::::::::I     U::::::U     U::::::U     B::::::BBBBBB:::::B "<<endl;
cout<<"                                     A:::::::A                 II::::::II     UU:::::U     U:::::UU     BB:::::B     B:::::B"<<endl;
cout<<"                                    A:::::::::A                  I::::I        U:::::U     U:::::U        B::::B     B:::::B"<<endl;
cout<<"                                   A:::::A:::::A                 I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
cout<<"                                  A:::::A A:::::A                I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
cout<<"                                 A:::::A   A:::::A               I::::I        U:::::D     D:::::U        B:::::::::::::BB  "<<endl;
cout<<"                                A:::::A     A:::::A              I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
cout<<"                               A:::::AAAAAAAAA:::::A             I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
cout<<"                              A:::::::::::::::::::::A            I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
cout<<"                             A:::::AAAAAAAAAAAAA:::::A           I::::I        U::::::U   U::::::U        B::::B     B:::::B"<<endl;
cout<<"                            A:::::A             A:::::A        II::::::II      U:::::::UUU:::::::U      BB:::::BBBBBB::::::B"<<endl;
cout<<"                           A:::::A               A:::::A       I::::::::I       UU:::::::::::::UU       B:::::::::::::::::B "<<endl;
cout<<"                          A:::::A                 A:::::A      I::::::::I         UU:::::::::UU         B::::::::::::::::B  "<<endl;
cout<<"                         AAAAAAA                   AAAAAAA     IIIIIIIIII           UUUUUUUUU           BBBBBBBBBBBBBBBBB   "<<endl<<endl;



SetColor(i);


Sleep(80);

i++;
}

system("cls");

SetColor(1);

cout<<endl<<endl<<endl<<endl<<endl;

cout<<"                                        AAA                    IIIIIIIIII     UUUUUUUU     UUUUUUUU     BBBBBBBBBBBBBBBBB   "<<endl;
Sleep(5);
cout<<"                                       A:::A                   I::::::::I     U::::::U     U::::::U     B::::::::::::::::B  "<<endl;
Sleep(5);
cout<<"                                      A:::::A                  I::::::::I     U::::::U     U::::::U     B::::::BBBBBB:::::B "<<endl;
Sleep(5);
cout<<"                                     A:::::::A                 II::::::II     UU:::::U     U:::::UU     BB:::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                                    A:::::::::A                  I::::I        U:::::U     U:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                                   A:::::A:::::A                 I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                                  A:::::A A:::::A                I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(5);
cout<<"                                 A:::::A   A:::::A               I::::I        U:::::D     D:::::U        B:::::::::::::BB  "<<endl;
Sleep(5);
cout<<"                                A:::::A     A:::::A              I::::I        U:::::D     D:::::U        B::::BBBBBB:::::B "<<endl;
Sleep(5);
cout<<"                               A:::::AAAAAAAAA:::::A             I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                              A:::::::::::::::::::::A            I::::I        U:::::D     D:::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                             A:::::AAAAAAAAAAAAA:::::A           I::::I        U::::::U   U::::::U        B::::B     B:::::B"<<endl;
Sleep(5);
cout<<"                            A:::::A             A:::::A        II::::::II      U:::::::UUU:::::::U      BB:::::BBBBBB::::::B"<<endl;
Sleep(5);
cout<<"                           A:::::A               A:::::A       I::::::::I       UU:::::::::::::UU       B:::::::::::::::::B "<<endl;
Sleep(5);
cout<<"                          A:::::A                 A:::::A      I::::::::I         UU:::::::::UU         B::::::::::::::::B  "<<endl;
Sleep(5);
cout<<"                         AAAAAAA                   AAAAAAA     IIIIIIIIII           UUUUUUUUU           BBBBBBBBBBBBBBBBB   "<<endl<<endl;
SetColor(9);
Sleep(15);
cout<<"                                      AMERICAN                INTERNATIONAL        UNIVERSITY              BANGLADESH       "<<endl;
cout<<"                                      --------                -------------        ----------              ----------       "<<endl;

SetColor(2);

string line1 = "Where";
int x1=0,y1=39;
while ( line1[x1] != '\0')
{
    gotoXY(y1,25);
	cout << line1[x1];
	Beep(7, 2);
	Sleep(25);

	x1++;
	y1++;
};


SetColor(4);
string line11 = "Leaders";
int x11=0,y11=65;
while ( line11[x11] != '\0')
{
    gotoXY(y11,25);
	cout << line11[x11];
	Beep(7, 2);
	Sleep(25);

	x11++;
	y11++;
};


SetColor(4);
string line111 = "Are";
int x111=0,y111=87;
while ( line111[x111] != '\0')
{
    gotoXY(y111,25);
	cout << line111[x111];
	Beep(7, 2);
	Sleep(25);

	x111++;
	y111++;
};


SetColor(2);
string line1111 = "Created";
int x1111=0,y1111=109;
while ( line1111[x1111] != '\0')
{
    gotoXY(y1111,25);
	cout << line1111[x1111];
	Beep(7, 2);
	Sleep(25);

	x1111++;
	y1111++;
};

SetColor(6);
string line111103 = "Press Any Key To Continue...";
int x111103=0,y111103=60;
while ( line111103[x111103] != '\0')
{
    gotoXY(y111103,34);
	cout << line111103[x111103];
	Beep(7, 2);
	Sleep(25);

	x111103++;
	y111103++;
};



getch();
system("cls");
SetColor(9);
gotoXY(0,2);
cout<<"                                                                               _.-."<<endl;
gotoXY(0,3);
cout<<"                                                                           .-.  `) |  .-. "<<endl;
gotoXY(0,4);
cout<<"                                                                       _.'`. .~./ * \\.~. .`'._"<<endl;
gotoXY(0,5);
cout<<"                                                                   .-'`.'-'.'.-: TH :-.'.'-'.`'-."<<endl;
gotoXY(0,6);
cout<<"                                                                    `'`'`'`'`   \\||/   `'`'`'`'`"<<endl;
gotoXY(0,7);
cout<<"                                                                                //\\\\"<<endl;
gotoXY(0,8);
cout<<"                                                                               //^^\\\\"<<endl;
gotoXY(0,9);
cout<<"                                                                               `'``'`"<<endl;


SetColor(4);
gotoXY(0,11);
cout<<"                                                                               Project";

gotoXY(0,12);
cout<<"                                                                           ==============="<<endl<<endl;


SetColor(10);

gotoXY(0,16);
cout<<"                                                               $$$$$$$$\\      $$$$$$\\        $$\\   $$\\"<<endl;
gotoXY(0,17);
cout<<"                                                               $$  _____|    $$  __$$\\       $$ |  $$ |"<<endl;
gotoXY(0,18);
cout<<"                                                               $$ |          $$ /  $$ |      $$ |  $$ |"<<endl;
gotoXY(0,19);
cout<<"                                                               $$$$$\\        $$ |  $$ |      $$$$$$$$ |"<<endl;
gotoXY(0,20);
cout<<"                                                               $$  __|       $$ |  $$ |      $$  __$$ |"<<endl;
gotoXY(0,21);
cout<<"                                                               $$ |          $$ |  $$ |      $$ |  $$ |"<<endl;
gotoXY(0,22);
cout<<"                                                               $$ |           $$$$$$  |      $$ |  $$ |"<<endl;
gotoXY(0,23);
cout<<"                                                               \\__|           \\______/       \\__|  \\__|"<<endl;

SetColor(3);
gotoXY(0,35);
cout<<"                                                                   Please press any key to continue";

getch();

}



void myDisplay(void)
{

glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0, 0);

if(sunrisecondition)
{
   glPushMatrix();
SunRiseSky();
glPopMatrix();

glPushMatrix();
sunrise(859,450,50);
 glPopMatrix();

glPushMatrix();
MorningSand();
 glPopMatrix();

 glPushMatrix();

if(!snowcondition && !raincondition)
{
    bird();
}

  glPopMatrix();
}

if(morningcondition)
{
glPushMatrix();
MorningSky();
glPopMatrix();


glPushMatrix();
MorningSand();
glPopMatrix();

glPushMatrix();

if(!snowcondition && !raincondition)
{
    bird();
}

  glPopMatrix();
}

if(nooncondition)
{
   glPushMatrix();
    NoonSky();
    glPopMatrix();


    glPushMatrix();
NoonSand();
glPopMatrix();
glPushMatrix();

if(!snowcondition && !raincondition)
{
    bird();
}

  glPopMatrix();

}

if(afternooncondition)
{
    glPushMatrix();
    AfternoonSky();
    glPopMatrix();

   glPushMatrix();
AfternoonSand();
glPopMatrix();
glPushMatrix();

if(!snowcondition && !raincondition)
{
    bird();
}

  glPopMatrix();

}

if(eveningcondition)
{
     glPushMatrix();
    EveningSky();
    glPopMatrix();


    glPushMatrix();
EveningSand();
glPopMatrix();
glPushMatrix();

if(!snowcondition && !raincondition)
{
    bird();
}

  glPopMatrix();
}

if(sunsetcondition)
{
   glPushMatrix();
    SunSetSky();
    glPopMatrix();


    glPushMatrix();
sunset(859,450,50);
glPopMatrix();


glPushMatrix();
EveningSand();
   glPopMatrix();
glPushMatrix();

if(!snowcondition && !raincondition)
{
    bird();
}


  glPopMatrix();
}

if(nightcondition)
{
    glPushMatrix();
   NightSky();
   glPopMatrix();

 glPushMatrix();
   Moon(1500,850,50);
   glPopMatrix();

  glPushMatrix();
NightSand();
glPopMatrix();
}


glPushMatrix();
glTranslatef(cloudshift1, 0.0, 0.0);
cloud1();
glPopMatrix();

glPushMatrix();
glTranslatef(cloudshift2, 0.0, 0.0);
cloud2();
glPopMatrix();

glPushMatrix();
glTranslatef(cloudshift3, 0.0, 0.0);
cloud3();
glPopMatrix();

glPushMatrix();
glTranslatef(cloudshift4, 0.0, 0.0);
cloud4();
glPopMatrix();

glPushMatrix();
glTranslatef(cloudshift5, 0.0, 0.0);
cloud5();
glPopMatrix();


/////////////////store1//////////////////////

////balloon//////////

storeBalloon(1490,585,8,130,174,135,210,249);
storeBalloon(1545,585,243, 107, 153,255,192,203);
storeBalloon(1600,585,112, 38, 146, 181,126,220);

///////////////saad//////////////////////

Store1(1490,510,10,248, 123, 161);
Store1(1510,510,10,254, 240, 235);
Store1(1530,510,10,248, 123, 161);
Store1(1550,510,10,254, 240, 235);
Store1(1570,510,10,248, 123, 161);
Store1(1590,510,10,254, 240, 235);
Store1(1610,510,10,248, 123, 161);

///////////////////// ice cream text////////////////

glPushMatrix();
glTranslatef(1512,552, 0);
Sprint(1.0,0,text5);
glPopMatrix();

//////////////ice-cream////////////////

ice(1512,475,7,255, 229, 188);
ice(1516,482,8,218,144,161);
ice(1510,486,8,139, 84, 62);

////////////head//////////////

ice(1570,485,7,0,0,0);



Store2();
dolna();

///////////////////////tent///////////////

glPushMatrix();
graytant();
glPopMatrix();



glPushMatrix();
glTranslatef(shiftcar4, 0.0, 0.0);
car4();
wheelcar2(354,425,15,11,7,3);
wheelcar2(405,425,15,11,7,3);
glPopMatrix();




glPushMatrix();
glTranslatef(shiftcar3, 0.0, 0.0);
car3();
wheelcar2(990,410,15,11,7,3);
wheelcar2(1040,410,15,11,7,3);
glPopMatrix();

Store3();
tree(1075,265);

///////////////////////coffee shop text///////////////

glPushMatrix();
glTranslatef(808,230, 0);
Sprint(1.0,0,text2);
glPopMatrix();

 //////////////////////car///////////////

glPushMatrix();
cornergraytant();
glPopMatrix();


///////////////////// popcorn store/////////////////
Popcorn();
glPushMatrix();
glTranslatef(200,150, 0);
glPopMatrix();

/////////////////////////

glPushMatrix();
glTranslatef(160, 325,0);
Sprint(1.0,0,pop);
glPopMatrix();



glPushMatrix();
glTranslatef(shiftcar1, 0.0, 0.0);
car1();
wheelcar1(35,200,25,20,8,5);
wheelcar1(125,200,25,20,8,5);
glPopMatrix();




glPushMatrix();
chorki2();
glPopMatrix();

tob();

glPushMatrix();
bluetant();
glPopMatrix();

glPushMatrix();
yellowtant();
glPopMatrix();


///////////////game //////////////////

glPushMatrix();
scorebar();
glPopMatrix();

///////////////////////game bar text///////////////
glPushMatrix();
glTranslatef(320, 556, 0);
Sprint(1.0,0,text);
glPopMatrix();

//////////////////////game bar ///////////////////
gamebar1();
gamebar2();
gamebar3();
gamebar4();
gamebar5();
gamebar6();
gamebar7();
gamebar8();
gamebar9();
gamebar10();
gamebar11();
gamebar12();


if(gamecondition)
{

glPushMatrix();
glTranslatef(barshift1, 0.0, 0.0);
gamebar1();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift2, 0.0, 0.0);
gamebar2();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift3, 0.0, 0.0);
gamebar3();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift4, 0.0, 0.0);
gamebar4();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift5, 0.0, 0.0);
gamebar5();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift6, 0.0, 0.0);
gamebar6();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift7, 0.0, 0.0);
gamebar7();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift8, 0.0, 0.0);
gamebar8();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift9, 0.0, 0.0);
gamebar9();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift10, 0.0, 0.0);
gamebar10();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift11, 0.0, 0.0);
gamebar11();
glPopMatrix();

glPushMatrix();
glTranslatef(barshift12, 0.0, 0.0);
gamebar12();
glPopMatrix();
}

glPushMatrix();
game();
glPopMatrix();

if(endcondition)
{

//////////////// game start text //////////////////
glPushMatrix();
glTranslatef(335, 380, 0);
glColor3ub(224,255,255);
          if(!wincondition)
          {
           renderBitmapString(30,50,(void *)font1," GAME OVER");
          }
            if(wincondition)
          {
           renderBitmapString(60,50,(void *)font1,"YOU WIN");
          }
            glColor3ub(224,255,255);
            sprintf (buffer2, "  Your Score : %d", point);
             renderBitmapString(20,0,(void *)font1,buffer2);
glPopMatrix();

}


if(gamecondition)
{

//////////////// game start text //////////////////
glPushMatrix();
glTranslatef(355, 390, 0);
Sprint1(1.0,0,text3);
glPopMatrix();


if(gamevisiblecondition)
{
glPushMatrix();
game();
glPopMatrix();

glPushMatrix();
rocket();
glPopMatrix();

scorebar();

glPushMatrix();
glTranslatef(360, 500, 0);
 glColor3ub(10,126,140);
    sprintf (buffer, "SCORE: %d", point);
    renderBitmapString(45,54,(void *)font2,buffer);
glPopMatrix();
}
}

////////////////////car/////////////////

glPushMatrix();
glTranslatef(clrshift, 0.0, 0.0);
car2();
wheelcar1(730,80,25,20,8,5);
wheelcar1(820,80,25,20,8,5);
glPopMatrix();
/////////////////////////////////////////////////

if(ballooncondition)
{

//big maroon balloon
glPushMatrix();
glTranslatef(bmBalloonMovex,bmBalloonMovey,0.0);
Balloon1(490,240, 184,30,67, 250,128,114);///x, y, solid color, gradient color//maroon
glPopMatrix();

//left corner balloon
glPushMatrix();
glTranslatef(lcBalloonMovex,lcBalloonMovey,0.0);
Balloon1(110,200, 184,30,67, 250,128,114);//maroon
Balloon6(190,200,8,130,174,135,210,249);//blue
Balloon7(150,240,255,216,0,252,255,164);//yellow
glPopMatrix();

glPushMatrix();
glTranslatef(dbBalloonMovex,dbBalloonMovey,0.0);
Balloon7(320,350,8,0,128,15,82,186);//dark blue
glPopMatrix();

glPushMatrix();
glTranslatef(stBalloonMovex,stBalloonMovey,0.0);
Balloon2(600,300,8,130,174,135,210,249);//small blue
glPopMatrix();


glPushMatrix();
glTranslatef(oBalloonMovex,oBalloonMovey,0.0);
Balloon2(900,320, 8,0,128,15,82,186);//dark blue
glPopMatrix();



glPushMatrix();
glTranslatef(bBalloonMovex,bBalloonMovey,0.0);
Balloon4(1000,260, 0,128,128,102,205,170);//teal
glPopMatrix();

glPushMatrix();
glTranslatef(prBalloonMovex,prBalloonMovey,0.0);
Balloon5(700,320,112, 38, 146, 181,126,220);//purple
glPopMatrix();

glPushMatrix();
glTranslatef(pBalloonMovex,pBalloonMovey,0.0);
Balloon6(800,200,255,105,180,253,188,180);//pink
glPopMatrix();

glPushMatrix();
glTranslatef(dBalloonMovex,dBalloonMovey,0.0);
Balloon7(1120,300,217,112,0, 255,179,71);//orange
glPopMatrix();

//right corner balloon
glPushMatrix();
glTranslatef(rcBalloonMovex,rcBalloonMovey,0.0);
Balloon1(1220,160, 184,30,67, 250,128,114);//maroon
Balloon6 (1300,160,112, 38, 146, 181,126,220);//purple
Balloon7(1260,200, 8,130,174,135,210,249);//blue
glPopMatrix();

glPushMatrix();
glTranslatef(byBalloonMovex,byBalloonMovey,0.0);
Balloon5(1557,282,8,0,128,15,82,186);//dark blue
Balloon4(1520,320,255,216,0,252,255,164);//yellow

glPopMatrix();

glPushMatrix();
glTranslatef(bbBalloonMovex,bbBalloonMovey,0.0);
Balloon4(800,150,255,216,0,252,255,164);//yellow
glPopMatrix();

glPushMatrix();
glTranslatef(bcBalloonMovex,bcBalloonMovey,0.0);
Balloon1(1650,100,255,105,180,253,188,180);//pink
glPopMatrix();
}
if(raincondition)
{
    rain();
}

if(snowcondition)
{
    snow();
}

glutSwapBuffers();

}

void myInit (void)
{

glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 1768, 0, 1024);

}

int main(int argc, char** argv)
{

coverpage();
designpage();
instructionpage();


glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize (1768, 1024);
glutInitWindowPosition (40, 40);
glutCreateWindow ("Fest Of Harmony");
glutDisplayFunc(myDisplay);

  glutKeyboardFunc(handleKeypress);
 glutSpecialFunc(spe_key);
   glutMouseFunc(handleMouse);

glutTimerFunc(25, update, 0);

myInit();
glutMainLoop();
}
