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

void drawPoints()
{
    float x,y; // x,y where orginally integers
    float h,k;
    float red = 1.0,green = 0 ,blue = 0.0;
    // background
    //glClearColor(red,green,blue,alpha);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    //void glOrtho(GLdouble left,  GLdouble right,
    //GLdouble bottom,  GLdouble top,
    //GLdouble nearVal,  GLdouble farVal);
    //glOrtho(-400.0, 400.0, -400.0, 400.0, -400.0, 400.0);
     // >>> 3* 3.141592 = 9.424776000000001
     glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
    h = -1.0; k = -1.0;
    glPointSize(3.0);
    glBegin(GL_POINTS);// points
    //plot x
    for (x = -10; x <= 10; x=x + 0.1){
      h = x;  k = 5.0; 
      plot2Dpoint(h,k,0,0,1.0);
    }//end x ( y = 5)
    
    //plot y
    for (y = -10; y <= 10; y= y+ 0.1){
      h = 0;  k = y; plot2Dpoint(h,k,0,0,1.0);
    }//end x

    //plot
    // create the equation y = 5   y = 0x + 5
    //plot x
    for (x = -10; x <= 10; x=x + 0.1){
      h = x;  k = 5.0; 
      plot2Dpoint(h,k,1,0.5,0);
      //plot2Dpoint(h,k,red,green,blue);
    }//end x ( y = 5)
    // create a third degree polynomial
    for (x = -10; x <= 10; x = x + 0.1){
      h = x;
      k = (float)((x*x*x)-(x*x) + (4*x) + 5);
        plot2Dpoint(h,k,0,1,0);
    }//end x

    glEnd();//end points

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL -800x800");
    glutDisplayFunc(drawPoints);
    glutMainLoop();
    return 0;
}
