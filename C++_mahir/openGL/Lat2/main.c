#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.0,0.2);
    glVertex2f(-0.2,0.0);
    glVertex2f(0.0,-0.2);
    glVertex2f(0.2,0.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,1.0);
    glVertex2f(-0.2,0.4);
    glVertex2f(-0.4,0.2);
    glVertex2f(-0.2,0.0);
    glVertex2f(0.0,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.2,0.0);
    glVertex2f(0.0,0.2);
    glVertex2f(0.2,0.4);
    glVertex2f(0.4,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-0.2,0.0);
    glVertex2f(0.0,-0.2);
    glVertex2f(-0.2,-0.4);
    glVertex2f(-0.4,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(0.0,-0.2);
    glVertex2f(0.2,0.0);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.2,-0.4);
    glEnd();
    glFlush();

}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("openGL");
    glClearColor(1.0,1.0,1.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

