#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>

void init(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,50,0,50,0,10);
}
char str[16]="CHILDREN'S PARK";
char name[5]="NAME";
char usn[4]="USN";
char adi[15]="ADITYA KASHYAP";
char adv[12]="ADVIKA BHAT";
char adiusn[11]="4NM20CS014";
char advusn[11]="4NM20CS018";
char next[5]="NEXT";
char prev[5]="PREV";
char ugf[24]="UNDER THE GUIDANCE OF:-";
char sir[18]="DR.PRADEEP KANCHAN";
char sir2[15]="MR.PUNEETH R P";

void displayNewWin(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(20,5);
        glVertex2i(20,8);
        glVertex2i(26,8);
        glVertex2i(26,5);
    glEnd();
    glFlush();

    for(int i=0;i<strlen(next);i++){
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(21+i,6);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,prev[i]);
    }
     glEnd();
    glFlush();
}

void OnMouseClickNew    (int button, int state, int x, int y)
{
  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
  {
     //printf("%d %d\n",x,y);
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
     printf("%d %d\n",x,y);
     if(x>=615 && x<=800 && y>=710 && y<=760){
        playground();
     }

  }
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    //making button

    for(int i=0;i<15;i++){
    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(15+i,45);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
    }


     for(int i=0;i<4;i++){
    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(6+i,35);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,name[i]);
    }

    for(int i=0;i<3;i++){
    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(36+i,35);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,usn[i]);
    }
    for(int i=0;i<15;i++){
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glRasterPos2i(5+i,30);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,adi[i]);
    }
    for(int i=0;i<10;i++){
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glRasterPos2i(35+i,30);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,adiusn[i]);
    }
       for(int i=0;i<11;i++){
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(5+i,25);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,adv[i]);
    }
    for(int i=0;i<10;i++){
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(35+i,25);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,advusn[i]);
    }
     for(int i=0;i<24;i++){
    glColor3f(0.5,0.8,0.4);
    glRasterPos2i(5+i,20);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ugf[i]);
    }
      for(int i=0;i<18;i++){
    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(29+i,20);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,sir[i]);
    }


      for(int i=0;i<15;i++){
    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(29+i,15);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,sir2[i]);
    }



    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2i(20,5);
        glVertex2i(20,8);
        glVertex2i(26,8);
        glVertex2i(26,5);
    glEnd();
    glFlush();

    for(int i=0;i<strlen(next);i++){
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
    glRasterPos2i(21+i,6);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,next[i]);
    }

    glLineWidth(10);
    glColor3f(0.2,0.5,0.8);

    glBegin(GL_LINES);
    glVertex2i(13,43);
    glVertex2i(31,43);

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

