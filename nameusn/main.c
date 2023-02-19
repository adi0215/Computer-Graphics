#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<GL/glut.h>

void init(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,50,0,50,0,10);
}
char str[15]="CHILDREN'S PARK";
char name[5]="NAME";
char usn[4]="USN";
char adi[14]="ADITYA KASHYAP";
char adv[11]="ADVIKA BHAT";
char adiusn[10]="4NM20CS014";
char advusn[10]="4NM20CS018";


void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    for(int i=0;i<15;i++){
    glColor3f(1.0,1.0,1.0);
    glRasterPos2i(15+i,45);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[i]);
    }


     for(int i=0;i<4;i++){
    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(6+i,35);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name[i]);
    }

    for(int i=0;i<3;i++){
    glColor3f(1.0,0.0,0.0);
    glRasterPos2i(36+i,35);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,usn[i]);
    }
    for(int i=0;i<15;i++){
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glRasterPos2i(5+i,30);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,adi[i]);
    }
    for(int i=0;i<10;i++){
    glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
    glRasterPos2i(35+i,30);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,adiusn[i]);
    }
       for(int i=0;i<11;i++){
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(5+i,25);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,adv[i]);
    }
    for(int i=0;i<10;i++){
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glRasterPos2i(35+i,25);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,advusn[i]);
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
    glutInitWindowPosition(10,10);
    glutInitWindowSize(900,500);
    glutCreateWindow("Computer Graphics Project");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

