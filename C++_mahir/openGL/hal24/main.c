#include <windows.h>
#include<GL/glut.h>
#include<stdlib.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,480);
    glutCreateWindow("Welcome to OpenGL");
    glClearColor(1.0,1.0,0.0,0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

