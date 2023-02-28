#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>
#include <GL/freeglut.h>

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
char ugf[28]="UNDER  THE  GUIDANCE  OF:-";
char sir[21]="DR. PRADEEP  KANCHAN";
char sir2[19]="MR. PUNEETH  R  P";
char desc[100][100]={"A simulation of a kids park that contains a see saw, slide, swing, a bench and a Ferris wheel.","The people in the park move with key inputs.","Before the people enter the park they will go through a payment booth."};



void slide(){
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

void seesaw(){
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
void displayNewWin(){
    glClear(GL_COLOR_BUFFER_BIT);


      seesaw();
    glEnd();
    glFlush();


    slide();
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


    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(22,6);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,prev);
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

void OnMouseClickNew    (int button, int state, int x, int y)
{
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
     printf("%d %d\n",x,y);
     if(x>=615 && x<=800 && y>=710 && y<=760){
        glutDestroyWindow(glutGetWindow());
     }

  }
}

void playground(){
    //glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(2000,1000);

    glutCreateWindow("Playground");
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
        playground();
     }

  }
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    //making button
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(20,45);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,str);



    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(7,35);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,name);


    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(36,35);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,usn);

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
    glRasterPos2i(35,15);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24,sir2);




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
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
