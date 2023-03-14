#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <GL/glut.h>
#include <GL/freeglut.h>

void init(){
    glClearColor(0.6,0.9,0.9,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,5000,0,5000,0,10);
}

void fence(){

    glColor3f(0.67, 0.3, 0.19);
    glBegin(GL_POLYGON);
        glVertex2f(100,0);
        glVertex2f(0,0);
        glVertex2f(50,20);
        glVertex2f(0,40);
        glVertex2f(100,40);
    glEnd();
        glFlush();
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

void display(){
    //fence();
    lawn();
    slide();
   seesaw();
    path();
    bench();

    glFlush();

    }

int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(2000,1000);

    glutCreateWindow("Inside View");
    init();
    glutDisplayFunc(display);


    glutMainLoop();
    return 0;
}
