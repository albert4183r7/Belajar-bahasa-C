#include <windows.h>
#include <gl/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1.0f,1.0f,1.0f);//Defining color
    glutWireTorus(0.4,1.0,15,15);//Creates a wire torus//
    glColor3f(1.0,1.0,0.5);
    glutWireTorus(0.3,0.9,15,15);
    glColor3f(1.0,0.5,1.0);
    glutWireTorus(0.2,0.8,15,15);
    glColor3f(0.5,1.0,1.0);
    glutWireTorus(0.1,0.7,15,15);
    glColor3f(0.0,0.0,1.0);
    glutWireTorus(0.1,0.6,15,15);
    glColor3f(0.5,0.5,0.0);
    glutWireTorus(0.1,0.5,15,15);
    glColor3f(0.5,0.0,0.5);
    glutWireTorus(0.1,0.4,15,15);
    glColor3f(0.5,0.5,0.0);
    glutWireTorus(0.1,0.3,15,15);
    glColor3f(0.5,0.0,0.0);
    glutWireTorus(0.1,0.2,15,15);
    glColor3f(0.0,0.0,0.5);
    glutWireTorus(0.1,0.1,15,15);
    glFlush();
}
void init (void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);//mengaktifkan depth buffer
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(10.0,1.0,1.0,100.0);
    glMatrixMode(GL_MODELVIEW);//digunakan untukmemberikan inisialisasi matriks.
    glLoadIdentity();//digunakan untuk memanggil matriks identitas dan dijadikan status matriks(proyeksi) saat ini.
    gluLookAt(10.0,0.0,10.0,0.0,0.0,0.0,0.0,0.0,1.0);
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//digunakan untuk menentukan apakah object akan menggunakan model pewarnaan RGB atau indeks warna.
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Wired Model");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
