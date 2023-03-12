#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
void onKey(){}
void OnMouseClick (int button, int state, int x, int y)//WINDOW 2
{printf("%d %d\n",x,y);
}
void init(){
    glClearColor(0,0,0,0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0,2000,0,1000,-1,1);
}
void path(){
    glColor3f(0.67, 0.3, 0.19);
    glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(2000,0);
        glVertex2f(1100,500);
        glVertex2f(900,500);
    glEnd();
}
void booth(){
    glColor3f(0.73, 0.38, 0.97);
    glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(900,500);
        glVertex2f(900,700);
        glVertex2f(0,500);
    glEnd();
}
void window(){
    glColor3f(0.11, 0.96, 1);
    glBegin(GL_POLYGON);
        glVertex2f(300,300);
        glVertex2f(600,425);
        glVertex2f(600,570);
        glVertex2f(300,500);
    glEnd();
}
void person(float x, float y){
    glColor3f(0.97, 0.63, 0.38);
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+50,y);
        glVertex2f(x+50,y-50);
        glVertex2f(x,y-50);
    glEnd();
    //body
     glBegin(GL_POLYGON);
        glVertex2f(x-20,y-60);
        glVertex2f(x-20,y-260);
        glVertex2f(x+70,y-260);
        glVertex2f(x+70,y-60);
    glEnd();
}
void ticketer(float x, float y){
    glColor3f(0.97, 0.63, 0.38);
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+50,y);
        glVertex2f(x+50,y-50);
        glVertex2f(x,y-50);
    glEnd();
    //body
     glBegin(GL_POLYGON);
        glVertex2f(x-20,y-60);
        glVertex2f(x-20,y-159);
        glVertex2f(x+70,y-120);
        glVertex2f(x+70,y-60);
    glEnd();
}
void bubble(int x, int y){
        glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+10,y+10);
        glVertex2f(x,y+10);
    glEnd();
    //square
     glBegin(GL_POLYGON);
        glVertex2f(x,y+10);
        glVertex2f(x+200,y+10);
        glVertex2f(x+200,y+100);
        glVertex2f(x,y+100);
    glEnd();
}
void displayBooth(){
    glClear(GL_COLOR_BUFFER_BIT);
    path();
    booth();
    window();
    person(700,500);
    ticketer(450,510);
    bubble(760,510);
    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(-1,-1);
    glutInitWindowSize(2000,1000);

    glutCreateWindow("Booth");
    //glutFullScreen();
    init();
    glutMouseFunc(OnMouseClick);
    glutKeyboardFunc(onKey);
    glutDisplayFunc(displayBooth);

    glutMainLoop();
    return 0;
}
