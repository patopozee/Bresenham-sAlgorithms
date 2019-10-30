#include <GL/freeglut.h>
#include <GL/gl.h>

void init(void) {

glViewport(0.0, 0.0, 500.0, 500.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glClearColor(0.0, 1.0, 0.0, 0.0);
gluOrtho2D(0.0, 300.0, 0.0, 300.0);
glOrtho(0.0, 500.0, 0.0, 500.0, 1.0, -1.0);

glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
void drawLines(void) {
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(2.5);
glClearColor(0.0, 1.0, 0.0, 0.0);
glColor3f(0.0, 1.0, 0.0);
glPointSize(3.0);

glBegin(GL_LINES);
     glVertex2f(10, 10);
     glVertex2f(20, 20);
glEnd();
glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL - First window demo");
    glutDisplayFunc(drawLines);
    glutMainLoop();    
    return 0;
}