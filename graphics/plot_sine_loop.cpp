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

void CosSinTan(float x, float s){
    float y;
    glPointSize(3.0);
    y = cos(x) * s;
    cout<<x<<" "<<y<<endl;
    glColor3f(1, 0, 0);
    glVertex2f(x, y);


}
void drawPoints()
{
    float x,y,s;
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
    for (x = -10; x <= 10; x++){
      h = x;  k = 0; plot2Dpoint(h,k,0,0,1);
    }//end x
    //plot y
    for (y = -10; y <= 10; y++){
      h = 0;  k = y; plot2Dpoint(h,k,0,0,1);
    }//end x
    //glPointSize(3.0);
    glBegin(GL_POINTS);// points
      s = 5;
      for (x = -10; x <= 10; x++){
          CosSinTan(x,s);
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
