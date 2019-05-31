// https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glOrtho.xml
// g++ plotDB.cpp -lglut -lGL -o plotDB.o
#include <iostream>
#include <cmath>
#include <stdio.h>
#include "GL/glut.h"
#include "GL/gl.h"
using namespace std;

 void plot2Dpoint(float x,float y, float red, float green, float blue){
  glColor3f(red, green, blue);
    glVertex2f(x, y);
}

void plotXY()
  {
    float x,y,h,k;
    for (x = -10; x <= 10; x = x + 0.05){
      h = x;  k = 0; plot2Dpoint(h,k,0,0,0);
    }//end x
    //plot y
    for (y = -10; y <= 10; y =y + 0.05){
      h = 0;  k = y; plot2Dpoint(h,k,0,0,0);
        h = 3.151592;  k = y; plot2Dpoint(h,k,0,0,0);
          h = -3.151592;  k = y; plot2Dpoint(h,k,0,0,0);
            h = 2*3.151592;  k = y; plot2Dpoint(h,k,0,0,0);
              h = -2*3.151592;  k = y; plot2Dpoint(h,k,0,0,0);
    }//end x
  }

void CosSinTan(float x,float s){
  float y;
  glColor3f(1,0,0);
    y = cos(x)*s;
    glVertex2f(x, y);

    glColor3f(0,1,0);
      y = sin(x)*s;
      glVertex2f(x, y);

      glColor3f(0,0,1);
        y = tan(x)*s;
        glVertex2f(x, y);
}


void drawPoints()
{
    float x,y;
    float h,k;
    float red = 1.0,green = 0 ,blue = 0.0;
    //glClearColor(red,green,blue,alpha);
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    //void glOrtho(GLdouble left,  GLdouble right,
    //GLdouble bottom,  GLdouble top,
    //GLdouble nearVal,  GLdouble farVal);
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
    h = -1.0; k = -1.0;
    glPointSize(1.0);
    glBegin(GL_POINTS);// points
    plotXY();
      for (x = -10; x <= 10; x=x + (1.0/800.0)){
          //cout<<"points "<<h<<" "<<k<<endl;
          CosSinTan(x,1);
          for (int p = 0; p <100000;p++);
          //if (green > 1)green = 0;
      }//end j
    glEnd();//end points
    glutSwapBuffers();

}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL -800x800");
    glutDisplayFunc(drawPoints);
    glutMainLoop();
    return 0;
}
