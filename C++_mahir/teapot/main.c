#include <windows.h>
#include <gl/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glColor3ub(211,211,211);
    glutWireTeapot(0.5);
    glPopMatrix();
    glFlush();
}
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(15.0,1.0,1.0,0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0,10.0,10.0,0.0,0.0,0.0,0.0,1.0,0.0);
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(400,400);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Wired Teapot Model");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

