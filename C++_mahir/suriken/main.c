#include <windows.h>
#include <gl/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-3.0,3.0);
    glColor3ub(255,218,185);
    glVertex2f(3.0,3.0);
    glColor3ub(175,238,238);
    glVertex2f(-3.0,-3.0);
    glColor3ub(255,231,186);
    glVertex2f(3.0,-3.0);
    glColor3ub(201,201,201);glPopMatrix();
    glVertex2f(3.0,3.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,228,181);
    glVertex2f(0.5,-0.5);
    glColor3ub(105,105,105);
    glVertex2f(-0.5,0.5);
    glColor3ub(0,0,205);
    glVertex2f(0.0,2.0);
    glColor3ub(124,252,0);
    glVertex2f(0.5,0.5);
    glColor3ub(165,42,42);
    glVertex2f(2.0,0.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(211,211,211);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,2.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(211,211,211);
    glVertex2f(0.0,0.0);
    glVertex2f(0.5,0.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(211,211,211);
    glVertex2f(0.0,0.0);
    glVertex2f(2.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.0,0.0);
    glColor3ub(222,222,222);
    glVertex2f(0.5,-0.5);
    glColor3ub(168,168,168);
    glVertex2f(0.0,-2.0);
    glColor3ub(77,77,77);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.0,0.0);
    glColor3ub(240,255,255);
    glVertex2f(-0.5,0.5);
    glColor3ub(255,248,220);
    glVertex2f(-2.0,0.0);
    glColor3ub(255,250,250);
    glVertex2f(0.0,0.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.0,0.0);
    glColor3ub(255,165,0);
    glVertex2f(-2.0,0.0);
    glColor3ub(255,0,255);
    glVertex2f(-0.5,-0.5);
    glColor3ub(238,223,204);
    glVertex2f(0.0,-2.0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(211,211,211);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.5,-0.5);
    glEnd();

    glColor3f(0.5,1.0,1.0);
    glutSolidSphere(0.2,10,10);
    glFlush();
    glPopMatrix();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(300,300);
    glutInitWindowPosition(500,100);
    glutCreateWindow("Suriken");
    gluOrtho2D(-3.0,3.0,-3.0,3.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
