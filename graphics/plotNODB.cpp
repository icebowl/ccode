// plotNODB.cpp   cwc
//apt install libglfw3 libglfw3-dev
// 181225
// g++ plotNODB.cpp   -lglut -lGL -o pno.o
#include <iostream>
#include <cmath>
#include <stdio.h>
#include "GL/glut.h"
#include "GL/gl.h"
using namespace std;
void plot2Dpoint(float x,float y, float red, float green, float blue){
  glColor3f(red, green, blue);
  glPointSize(1.0);// change this
  glBegin(GL_POINTS);
    glVertex2f(x, y);
  glEnd();
}

void drawPoints()
{
    int i,j;
    float h,k;
    float red = 1.0,green = 0 ,blue = 0.0;
    glClearColor(0.4, 0.4, 0.4, 0.4);//background(r,g,b,?)
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
  //  glOrtho(xstart, xend, ystart, yend, zstart, zend);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    h = -1.0; k = -1.0;
    for (i = 0; i < 800; i++){
      h = (float)(i - 400)/400;
      for( j = 0; j < 800; j++){glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
        k = (float)(400 - j)/400;
        //printf("drawpoints  %f %f \n",h,k);
        cout<<"points"<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,red,green,blue);
        glFlush();
      }
      green = green + (1.0/800.0);
      if (green > 1)green = 0;

    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL -800x800");
    glutDisplayFunc(drawPoints);glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glutMainLoop();// this just keeps the window open
    return 0;
}
