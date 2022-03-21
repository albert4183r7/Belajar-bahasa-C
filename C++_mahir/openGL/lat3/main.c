#include <windows.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-1.0,0.1);
    glVertex2f(-1.0,-0.1);
    glVertex2f(1.0,-0.25);
    glVertex2f(1.0,0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.9,-0.2);
    glVertex2f(-0.1,-0.2);
    glVertex2f(0.4,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(-0.1,-0.2);
    glVertex2f(0.9,-0.2);
    glVertex2f(0.9,-1.0);
    glVertex2f(-0.1,-1.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.0,-0.3);
    glVertex2f(0.2,-0.3);
    glVertex2f(0.2,-0.5);
    glVertex2f(0.0,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.8,-0.3);
    glVertex2f(0.6,-0.3);
    glVertex2f(0.6,-0.5);
    glVertex2f(0.8,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(0.28,-1.0);
    glVertex2f(0.28,-0.6);
    glVertex2f(0.52,-0.6);
    glVertex2f(0.52,-1.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-0.5,-1.0);
    glVertex2f(-0.4,-1.0);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.5,-0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-0.62,-0.7);
    glVertex2f(-0.28,-0.7);
    glVertex2f(-0.4,-0.5);
    glVertex2f(-0.5,-0.5);
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
