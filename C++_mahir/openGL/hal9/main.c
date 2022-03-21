#include<windows.h>
#include <gl/gl.h>
#include<gl/glut.h>
#include<stdlib.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0,0.5);
    glVertex2f(-0.2,0.2);
    glVertex2f(0.2,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.2,0.2);
    glVertex2f(0.2,0.2);
    glVertex2f(0.2,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5,-0.2);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.0,-0.5);
    glEnd();
    glFlush();
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("Welcome to OpenGL");
    glClearColor(1.0,1.0,0.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}



