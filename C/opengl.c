#include <stdio.h>
#include <glut.h>

void display(void)
{
 glClear( GL_COLOR_BUFFER_BIT);
 glColor3f(1.0, 0.0, 0.0);
 glBegin(GL_POLYGON);
  glVertex3f(2.0, 4.0, 0.0);
  glVertex3f(8.0, 4.0, 0.0);
  glVertex3f(8.0, 6.0, 0.0);
  glVertex3f(2.0, 6.0, 0.0);
 glEnd();
 glFlush();
}

int main(int argc, char **argv)
{

 glutInit(&argc, argv);
 glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

 glutInitWindowPosition(100,100);
 glutInitWindowSize(300,300);
 glutCreateWindow ("Square");

 glClearColor(0.0, 0.0, 0.0, 0.0);         // black background
 glMatrixMode(GL_PROJECTION);              // setup viewing projection
 glLoadIdentity();                           // start with identity matrix
 glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);   // setup a 10x10x2 viewing world

 glutDisplayFunc(display);
 glutMainLoop();

 return 0;
}
