#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.0,0.5);
    glVertex2f(-0.5,0.0);
    glVertex2f(0.0,-0.5);
    glVertex2f(0.5,0.0);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-0.25,0.25);
    glVertex2f(0.25,0.25);
    glVertex2f(0.25,-0.25);
    glVertex2f(-0.25,-0.25);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.0,0.25);
    glVertex2f(-0.25,0.0);
    glVertex2f(0.0,-0.25);
    glVertex2f(0.25,0.0);
    glEnd();
    glFlush();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL");
    glClearColor(1.0,1.0,1.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

