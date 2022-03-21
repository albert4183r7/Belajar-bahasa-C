#include <windows.h>
#include <gl/gl.h>
#include <gl/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.9,0.9);
    glVertex2f(0.9,0.9);
    glVertex2f(0.9,-0.9);
    glVertex2f(-0.9,-0.9);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.8,0.8);
    glVertex2f(0.8,0.8);
    glVertex2f(0.8,-0.8);
    glVertex2f(-0.8,-0.8);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.7,0.7);
    glVertex2f(0.7,0.7);
    glVertex2f(0.7,-0.7);
    glVertex2f(-0.7,-0.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.6,0.6);
    glVertex2f(0.6,0.6);
    glVertex2f(0.6,-0.6);
    glVertex2f(-0.6,-0.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.5,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,-0.5);
    glVertex2f(-0.5,-0.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.4,0.4);
    glVertex2f(0.4,0.4);
    glVertex2f(0.4,-0.4);
    glVertex2f(-0.4,-0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.3,0.3);
    glVertex2f(0.3,0.3);
    glVertex2f(0.3,-0.3);
    glVertex2f(-0.3,-0.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.2,0.2);
    glVertex2f(0.2,0.2);
    glVertex2f(0.2,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.1,0.1);
    glVertex2f(0.1,0.1);
    glVertex2f(0.1,-0.1);
    glVertex2f(-0.1,-0.1);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.04,0.05);
    glVertex2f(0.04,0.05);
    glVertex2f(0.04,0.03);
    glVertex2f(-0.04,0.03);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.04,0.01);
    glVertex2f(0.04,0.01);
    glVertex2f(0.04,-0.01);
    glVertex2f(-0.04,-0.01);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.04,-0.03);
    glVertex2f(0.04,-0.03);
    glVertex2f(0.04,-0.05);
    glVertex2f(-0.04,-0.05);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-0.01,0.05);
    glVertex2f(0.01,0.05);
    glVertex2f(0.01,-0.05);
    glVertex2f(-0.01,-0.05);
    glEnd();

    glFlush();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("UNO");
    glClearColor(0.0,0.0,0.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
}