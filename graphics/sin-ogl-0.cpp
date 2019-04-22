// cwc 190412
// g++ sin-ogl-0.cpp -lglut -lGL -o sin-ogl-0.o
// apt install gcc g++  libglfw3 libglfw3-dev  freeglut3 freeglut3-dev
#include "GL/glut.h"
#include "GL/gl.h"

#include <iostream>
#include <cmath>
using namespace std;


void plot2Dpoint(float x,float y, float red, float green, float blue){
  glColor3f(red, green, blue);
    glVertex2f(x, y);
}

void drawPoints()
{
    int i,j;
    float h,k;
    float t;
    float red = 1.0,green = 0 ,blue = 0.0;
    glClearColor(0.4, 0.4, 0.5, 0.4);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    h = -1.0; k = -1.0;
    glPointSize(10.0);
    glBegin(GL_POINTS);// points
    for (i = 0; i < 800; i++){
      h = (float)(400 -i)/400;
          t = 2*(3.141592) * h;
          k = sin(t);
          // output points (h,k,t)
          cout <<h<<" "<<k<<" "<<t<<"\n";
        plot2Dpoint(h,k,red,green,blue);
        //glFlush();

      green = green + (1.0/800.0);
      if (green > 1)green = 0;
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
    glutCreateWindow("sin (t) OpenGL -800x800");
    glutDisplayFunc(drawPoints);
    glutMainLoop();
    return 0;
}
