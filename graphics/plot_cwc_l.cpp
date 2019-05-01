// https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/xhtml/glOrtho.xml
// g++ plot_cwc_l.cpp -lglut -lGL -o p.o
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
    float x,y;
    float h,k;
    float red = 1.0,green = 0 ,blue = 0.0;
    //glClearColor(red,green,blue,alpha);
    glClearColor(1, 1, 1, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    //void glOrtho(GLdouble left,  GLdouble right,
    //GLdouble bottom,  GLdouble top,
    //GLdouble nearVal,  GLdouble farVal);
    glOrtho(-400.0, 400.0, -400.0, 400.0, -400.0, 400.0);
    h = -1.0; k = -1.0;
    glPointSize(2.0);
    glBegin(GL_POINTS);// points
    float m = (-64/5); float b = 30;
    //plot x
    for (x = -400; x <= 400; x++){
      h = x;  k = 0; plot2Dpoint(h,k,0,0,(255/255));
    }//end x
    //plot y
    for (y = -400; y <= 400; y++){
      h = 0;  k = y; plot2Dpoint(h,k,0,0,(255/255));
    }//end x
    glPointSize(5.0);
    //plot y = x
    for (x = -400; x <= 400; x++){
      h = x;
      k = x;
        //cout<<"points "<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,1,0,0);
      if (green > 1)green = 0;
    }//end j
    // y = mx + b
    for (x = -400; x <= 400; x = x + 0.25){
      h = x;
      k = m * x + b;
        //cout<<"points "<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,0,1,0);
    }//end j

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
