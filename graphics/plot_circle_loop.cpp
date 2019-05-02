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
    glPointSize(3.0);
    glBegin(GL_POINTS);// points
    //plot x
    for (x = -10; x <= 10; x++){
      h = x;  k = 0; plot2Dpoint(h,k,0,0,1);
    }//end x
    //plot y
    for (y = -10; y <= 10; y++){
      h = 0;  k = y; plot2Dpoint(h,k,0,0,1);
    }//end x
    glPointSize(1.0);
    double r = 10;
    while(r > 0){
      for (x = -10; x <= 10; x=x + (1.0/800.0)){
        h = x;
        y = pow(-1*pow(h,2)+pow(r,2),0.5);
          //cout<<"points "<<h<<" "<<k<<endl;
          plot2Dpoint(x,y,1,0.5,0);
          //if (green > 1)green = 0;
      }//end j

      for (x = -10; x <= 10; x=x + (1.0/800.0)){
        h = x;
        y = pow(-1*pow(h,2)+pow(r,2),0.5);
          //cout<<"points "<<h<<" "<<k<<endl;
          plot2Dpoint(x,-y,1,0.5,0);
          //if (green > 1)green = 0;
      }//end j
      r = r - 1;
       ;
    }
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
