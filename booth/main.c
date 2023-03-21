#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <time.h>
int custCount=0;
int tcCount=0;
char welcome[20]="welcome sir";
char ticketPrice[50]="How much for a ticket?";
char price[50]="50 rupees sir";
char convo[50]="Here is 50 rupees";
char thankyou[20]="Thankyou";
char ticketCounter[20]="Ticket Counter";

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

     if(custCount>=2){
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

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;


    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
void chatDisplay(){
            delay(1);
        for(int i=0;i<4;i++){
            delay(2);
            tcBubble();
            tcCount++;
            delay(2);
            custBubble();
            custCount++;
        }


}


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
    path();
    booth();
    window();
    person(700,500);
    ticketer(450,510);
    //bubble(760,510);
    chatDisplay();

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
//    glutKeyboardFunc(onKey);
    glutDisplayFunc(displayBooth);

    glutMainLoop();
    return 0;
}
