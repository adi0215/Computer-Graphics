#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include <GL/freeglut.h>
#define PI 3.14
//insideView start


void circle(float x, float y, float radius){
    glColor3f(1.0,0.8,0.4);
	int i;
	int triangleAmount = 500;


	float twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y +1.5*(radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();
}

void treeCrown(float x, float y, float radius){
    glColor3f(0.0,1,0.2);
	int i;
	int triangleAmount = 500;


	float twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y +1.5*(radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();
}

void sun(float x, float y, float radius){
    glColor3f(1.0f, 0.5f, 0.0f);//Orange
	int i;
	int triangleAmount = 500;


	float twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y +1.5* (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();
}


//bush one part
void bush(float x, float y, float radius){
    glColor3f(0.0f, 0.9f, 0.2);
	int i;
	int triangleAmount = 500;

	float twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y +2.5* (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();
}

//bush
void drawBush(float x, float y, float radius,int yMax){
    for(int i=0;i<=yMax;i+=410){
            bush(x,y+i,radius);
    }
}


//cloud one part
void cloud(float x, float y, float radius){
    glColor3f(1.0f, 1.0f, 1.0);
	int i;
	int triangleAmount = 50;


	float twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + 2.5*(radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();
}


//cloud
void drawCloud(float x, float y, float radius){
    cloud(x,y,radius);
    cloud(x+180,y+50,radius);
    cloud(x+360,y,radius);
    cloud(x+180,y-50,radius);
}



void initInside(){
    glClearColor(0.6,0.9,0.9,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,5000,0,5000,0,10);
}



void bench(){
    glColor3f(0.0,0.2,0.9);
    glBegin(GL_POLYGON);
    glVertex2i(2000,1900);
    glVertex2i(2100,2200);
    glVertex2i(2700,2200);
    glVertex2i(2600,1900);
    glEnd();
        glFlush();

    glBegin(GL_LINES);
    glVertex2i(2000,1870);
    glVertex2i(2600,1870);
    glVertex2i(2050,1875);
    glVertex2i(2050,1785);
    glVertex2i(2550,1875);
    glVertex2i(2550,1785);

    glEnd();

    glFlush();
    }
void slide(){
    glColor3f(0.7,0.6,0.8);
        glLineWidth(6);

    //stairs
    glBegin(GL_LINES);

    glVertex2i(3200,700);
    glVertex2i(3200,1500);

    glVertex2i(3350,700);
    glVertex2i(3350,1300);

    glVertex2i(3200,900);
    glVertex2i(3350,900);

    glVertex2i(3200,1000);
    glVertex2i(3350,1000);

    glVertex2i(3200,1100);
    glVertex2i(3350,1100);

    glVertex2i(3200,800);
    glVertex2i(3350,800);
    glEnd();
    glFlush();

    //slide
    glBegin(GL_POLYGON);


    glVertex2i(3200,1500);
    glVertex2i(3400,1500);
    glVertex2i(3700,700);
    glVertex2i(3550,600);




    glEnd();
    glFlush();


}
void path(){
     glColor3f(0.4, 0.4, 0.4);
    glBegin(GL_POLYGON);
        glVertex2f(150,0);
        glVertex2f(150,2650);
        glVertex2f(300,2650);
        glVertex2f(300,0);
    glEnd();
    glFlush();
        glBegin(GL_POLYGON);
         glVertex2i(150,2650);
         glVertex2f(150,2500);
        glVertex2f(4850,2500);
        glVertex2f(4850,2650);

    glEnd();
    glFlush();
       glBegin(GL_POLYGON);
         glVertex2i(4850,2650);
         glVertex2f(4700,2650);
        glVertex2f(4700,0);
        glVertex2f(4850,0);

    glEnd();
    glFlush();
    }
void seesaw(){
    glColor3f(1.0,0.8,0.4);
    glLineWidth(10);

    //horizontal line
    glBegin(GL_LINES);
    glVertex2i(600,1600);
    glVertex2i(1500,1400);

    //vertical line

    glVertex2i(1050,1500);
    glVertex2i(1050,1300);


    //holders

    glVertex2i(700,1600);
    glVertex2i(700,1645);

    glVertex2i(1400,1400);
    glVertex2i(1400,1500);

    glEnd();
    glFlush();


}

//tree crown

void drawCrown(float x, float y, float radius){
    treeCrown(x,y,radius);
    treeCrown(x+15,y+45,radius);
    treeCrown(x+30,y,radius);

}
void tree(float x,float y){
    drawCrown(x,y,20);
    //trunk
    glFlush();
    glColor3f(0.67, 0.3, 0.19);
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glVertex2f(x+30,y);
    glVertex2f(x+30,y-190);
    glVertex2f(x,y-190);
    glEnd();
    glFlush();

    }
void personinside(float x,float y){
    glColor3f(1.0,0.8,0.4);


   //head
    circle(x,y+5,25);

   //body
   glBegin(GL_LINES);
   glLineWidth(5);
   glColor3f(1,0,0);
   glVertex2f(x,y);
   glVertex2f(x,y-200);
   //legs
       glColor3f(0.4,0.2,0.4);

   glVertex2f(x,y-200);
   glVertex2f(x-50,y-400);

   glVertex2f(x,y-200);
   glVertex2f(x+50,y-400);

   //hands
       glColor3f(1.0,0.8,0.4);
   glVertex2f(x,y-50);
   glVertex2f(x-40,y-110);

   glVertex2f(x,y-50);
   glVertex2f(x+40,y-110);

   glEnd();
   glFlush();

}

void lawn(){
        glColor3f(0.0,0.7,0.0);
        glBegin(GL_POLYGON);
        glVertex2i(0,0);
        glVertex2i(0,3000);
        glVertex2i(5000,3000);
        glVertex2i(5000,0);
        glEnd();
        glFlush();
        }

void displayInside(){

    lawn();
    slide();
    seesaw();
    path();
    bench();
    personinside(220,900);
    personinside(3720,2200);
    personinside(1520,1000);
    sun(4900,5000,150);
    drawCloud(3500,4700,60);
    drawCloud(2300,4900,60);
    drawCloud(850,4800,60);
    drawBush(0,170,90,2780);
    drawBush(5000,170,90,2780);
    tree(90,1800);
    tree(90,800);
    tree(4870,2600);
    tree(4870,800);

    glFlush();

    }

int insideMain(){
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(2000,1000);

    glutCreateWindow("Inside View");
    initInside();
    glutDisplayFunc(displayInside);


    glutMainLoop();
    return 0;
}

//insideView ends















//BOOTH START
int custCount=0;
int tcCount=0;
char welcome[20]="welcome sir";
char ticketPrice[50]="How much for a ticket?";
char price[50]="50 rupees sir";
char convo[50]="Here is 50 rupees";
char thankyou[20]="Thankyou";
char ticketCounter[20]="Ticket Counter";


//timer



void custBubble(){
    int x=790,y=510;

        glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+10,y+10);
        glVertex2f(x,y+10);
    glEnd();
        glFlush();

    //square
     glBegin(GL_POLYGON);
        glVertex2f(x,y+10);
        glVertex2f(x+310,y+10);
        glVertex2f(x+310,y+100);
        glVertex2f(x,y+100);
    glEnd();
  glColor4f(1.0f, 0.0f, 1.0f, 0.0f);



     if(custCount==1){
        glRasterPos2i(x+10,y+50);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,ticketPrice);
        glEnd();
    }

     if(custCount==2){
        glRasterPos2i(x+10,y+50);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,convo);
        glEnd();
    }
        glFlush();


}
void tcBubble(){

    int x=560,y=510;

 glColor3f(0.5,0.6,0.1);
     glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x-10,y+20);
        glVertex2f(x,y+20);
    glEnd();
        glFlush();

    //square
     glBegin(GL_POLYGON);
        glVertex2f(x,y+20);
        glVertex2f(x-200,y+20);
        glVertex2f(x-200,y+120);
        glVertex2f(x,y+120);
    glEnd();

      glColor4f(1.0f, 1.0f, 0.0f, 0.0f);



     if(tcCount==1){
        glRasterPos2i(x-170,y+50);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,welcome);
        glEnd();
    }

    if(tcCount==2){
        glRasterPos2i(x-170,y+50);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,price);    }

    if(tcCount==3){
        glRasterPos2i(x-170,y+50);
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,thankyou);    }

        glFlush();
}



void onKeyBooth(unsigned char key,int x,int y){
    if(key=='c'||key=='C'){
       glutDisplayFunc(custBubble);
       custCount++;
    }
    else if(key=='t'||key=='T'){
       glutDisplayFunc(tcBubble);
       tcCount++;
    }

    else if(key=='n'||key=='N'){
        insideMain();
    }
    glutPostRedisplay();
}


void OnMouseClickBooth (int button, int state, int x, int y)//WINDOW 2
{printf("%d %d\n",x,y);
}



void initBooth(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,2000,0,1000,-1,1);
}


void pathBooth(){
    glColor3f(0.67, 0.3, 0.19);
    glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(2000,0);
        glVertex2f(1100,500);
        glVertex2f(900,500);
    glEnd();
    glFlush();
}


void booth(){
    glColor3f(0.73, 0.38, 0.97);
    glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(900,500);
        glVertex2f(900,700);
        glVertex2f(0,500);
    glEnd();

        glFlush();



}


void window(){
    glColor3f(0.11, 0.96, 1);
    glBegin(GL_POLYGON);
        glVertex2f(300,300);
        glVertex2f(600,425);
        glVertex2f(600,570);
        glVertex2f(300,500);
    glEnd();
    glColor3f(0.1,0.4,0.70);
    for(int i=0;i<15;i++){
        glRasterPos2i(300+i*20,530+i*4);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ticketCounter[i]);
    }
        glFlush();

}


void person(float x, float y){
    glColor3f(0.97, 0.63, 0.38);
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+50,y);
        glVertex2f(x+50,y-50);
        glVertex2f(x,y-50);
    glEnd();
        glFlush();

    //body
     glBegin(GL_POLYGON);
        glVertex2f(x-20,y-60);
        glVertex2f(x-20,y-260);
        glVertex2f(x+70,y-260);
        glVertex2f(x+70,y-60);
    glEnd();

    //hand
    glBegin(GL_POLYGON);
    glVertex2f(x-20,y-100);
    glVertex2f(x-80,y-210);
    glVertex2f(x-60,y-200);
    glVertex2f(x-10,y-100);
    glEnd();
    //money
    glBegin(GL_POLYGON);

    glColor3f(0,.9,0);
    glVertex2f(x-60,y-200);
    glVertex2f(x-60,y-210);
    glVertex2f(x-90,y-210);
    glVertex2f(x-90,y-200);
    glEnd();

    //legs
    glColor3f(0.97, 0.63, 0.38);
    glBegin(GL_POLYGON);
    glVertex2f(x-15,y-260);
    glVertex2f(x,y-260);
    glVertex2f(x,y-300);
    glVertex2f(x-15,y-300);
    glEnd();

    glColor3f(0.97, 0.63, 0.38);
    glBegin(GL_POLYGON);
    glVertex2f(x+45,y-260);
    glVertex2f(x+61,y-260);
    glVertex2f(x+61,y-300);
    glVertex2f(x+45,y-300);
    glEnd();

    glFlush();

}
void ticketer(float x, float y){
    glColor3f(0.97, 0.63, 0.38);
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+50,y);
        glVertex2f(x+50,y-50);
        glVertex2f(x,y-50);
    glEnd();
        glFlush();

    //body
     glBegin(GL_POLYGON);
        glVertex2f(x-20,y-60);
        glVertex2f(x-20,y-159);
        glVertex2f(x+70,y-120);
        glVertex2f(x+70,y-60);
    glEnd();

    //face
    glColor3f(0,0,0);

    glBegin(GL_LINES);
    glVertex2f(x+10,y-10);
    glVertex2f(x+20,y-12);
    glVertex2f(x+30,y-10);
    glVertex2f(x+40,y-12);
    glVertex2f(x+15,y-40);
    glVertex2f(x+40,y-40);
    glEnd();

        glFlush();

}

void displayBooth(){
    glClear(GL_COLOR_BUFFER_BIT);
    pathBooth();
    booth();
    window();
    person(700,500);
    ticketer(450,510);
    //bubble(760,510);

    glFlush();
}


int boothMain()
{

    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(2000,1000);

    glutCreateWindow("Booth");
    //glutFullScreen();
    initBooth();
    glutMouseFunc(OnMouseClickBooth);
    glutKeyboardFunc(onKeyBooth);
    glutDisplayFunc(displayBooth);

    glutMainLoop();
    return 0;
}
//BOOTH END











//DESC START
void init(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,50,0,50,0,10);
}


char str[18]="CHILDREN'S  PARK";
char name[5]="NAME";
char usn[4]="USN";
char adi[16]="ADITYA  KASHYAP";
char adv[13]="ADVIKA  BHAT";
char adiusn[11]="4NM20CS014";
char advusn[11]="4NM20CS018";
char next[5]="NEXT";
char prev[5]="PREV";
char ugf[28]="UNDER  THE  GUIDANCE  OF";
char sir[21]="DR. PRADEEP  KANCHAN";
char cred1[50]="ASSISTANT PROFESSOR GD-III";
char cred2[50]="ASSISTANT PROFESSOR GD-II";
char sir2[19]="MR. PUNEETH  R  P";
char desc[100][100]={"A simulation of a kids park that contains a see saw, slide, swing, a bench and a Ferris wheel.","The people in the park move with key inputs.","Before the people enter the park they will go through a payment booth."};



void slideDesc(){//WINDOW 2
    glColor3f(0.7,0.6,0.8);
        glLineWidth(10);

    glBegin(GL_LINES);
    glVertex2i(32,25);
    glVertex2i(32,10);
    glVertex2i(35,21);
    glVertex2i(35,10);


    glVertex2i(32,20);
    glVertex2i(35,20);

    glVertex2i(32,17);
    glVertex2i(35,17);

    glVertex2i(32,14);
    glVertex2i(35,14);

    glEnd();




    glBegin(GL_POLYGON);
    glVertex2i(32,25);
    glVertex2i(37,25);
    glVertex2i(42,10);
    glVertex2i(47,10);
    glVertex2i(32,25);
    glVertex2i(42,10);
    glVertex2i(47,10);
    glVertex2i(37,25);

    glEnd();
    glFlush();


}

void seesawDesc(){//WINDOW 2
    glColor3f(1.0,0.8,0.4);
    glLineWidth(20);
    glBegin(GL_LINES);
    glVertex2i(31,43);
    glVertex2i(47,39);
    glVertex2i(39,41);
    glVertex2i(39,38);
    glEnd();
    glBegin(GL_LINES);
    glLineWidth(10);
    glVertex2i(33,43);
    glVertex2i(33,44);
    glVertex2i(45,41);
    glVertex2i(45,40);


    glFlush();




}
void displayNewWin(){//WINDOW 2
    glClear(GL_COLOR_BUFFER_BIT);


    seesawDesc();
    glEnd();
    glFlush();


    slideDesc();
    glEnd();
    glFlush();


    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(20,5);
        glVertex2i(20,8);
        glVertex2i(26,8);
        glVertex2i(26,5);
    glEnd();
    glFlush();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
        glVertex2i(30,5);
        glVertex2i(30,8);
        glVertex2i(36,8);
        glVertex2i(36,5);
    glEnd();
    glFlush();


    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(22,6);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,prev);
     glEnd();

     glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(32,6);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,next);
     glEnd();
    glFlush();

    int i=4;
    int x=2;
    int y=40;
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(x,y);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,"DESCRIPTION:");

    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

    for(int j=1;j<=3;j++){
        glRasterPos2i(x,y-1-(i*j));
        glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,desc[j-1]);
    }

     glEnd();
    glFlush();




}

void OnMouseClickNew    (int button, int state, int x, int y)//WINDOW 2
{
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
     printf("%d %d\n",x,y);
     if(x>=615 && x<=800 && y>=710 && y<=760){
        glutDestroyWindow(glutGetWindow());
     }

  }
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
     printf("%d %d\n",x,y);
     if(x>=925 && x<=1110 && y>=710 && y<=760){
        boothMain();
     }

  }
}

void description(){//WINDOW 2
    //glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(2000,1000);

    glutCreateWindow("DESCRIPTION");
    //glutFullScreen();
    init();
    glutMouseFunc(OnMouseClickNew);
    glutDisplayFunc(displayNewWin);

    glutMainLoop();

}



void OnMouseClick(int button, int state, int x, int y)
{
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
    // printf("%d %d\n",x,y);
     if(x>=615 && x<=800 && y>=710 && y<=760){
        description();
     }

  }
}

void displayDesc(){
    glClear(GL_COLOR_BUFFER_BIT);

    //making button
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(20,45);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,str);



    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(7,35);
    //glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,name);


    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(36,35);
    //glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,usn);

     glColor3f(0.5,0.8,0.3);
    glRasterPos2i(5,30);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,adi);


     glColor3f(0.5,0.8,0.3);
    glRasterPos2i(35,30);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,adiusn);

     glColor3f(0.0,1.0,1.0);
    glRasterPos2i(5,25);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,adv);

    glColor3f(0.0,1.0,1.0);
    glRasterPos2i(35,25);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,advusn);




     glColor3f(0.4,0.5,0.8);
    glRasterPos2i(18,20);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,ugf);


    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(5,15);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,sir);

    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(4.5,13);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,cred1);



    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(35,15);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,sir2);


    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(33.5,13);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,cred2);

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2i(20,5);
        glVertex2i(20,8);
        glVertex2i(26,8);
        glVertex2i(26,5);
    glEnd();
    glFlush();



    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glRasterPos2i(22,6);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,next);

    glLineWidth(10);
    glColor3f(0.2,0.5,0.8);

    glBegin(GL_LINES);
    glVertex2i(17,43);
    glVertex2i(30,43);

    glEnd();
    glFlush();
}

int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(2000,1000);

    glutCreateWindow("Computer Graphics Project");
    //glutFullScreen();
    init();
    glutMouseFunc(OnMouseClick);
    glutDisplayFunc(displayDesc);

    glutMainLoop();
    return 0;
}
//DESC END
