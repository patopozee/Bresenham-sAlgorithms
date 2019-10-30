#include <GL/freeglut.h>
#include <GL/gl.h>
#include <stdio.h>


void myInit() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 500, 0, 500);
    glColor3f(1.0, 1.0, 1.0);
}
void draw_pixel(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}
int x1, x2, y1, y2,  p, dx, dy;
void draw_line(int x1, int x2, int y1, int y2, int dx, int dy, int p){
  dx=x2-x1; 
  dy=y2-y1;
  p=2*dx-dy;
while(x1<=x2)
{
   draw_pixel(x1,y1);
   x1++;
if(p<0)
      {
    p=p+2*(y2-y1);
      }
      else{
   p=p+2*(y2-y1)-2*(x2-x1);
     y1++;
      }
  }
}
void myDisplay() {
	draw_line(x1, x2, y1, y2, dx, dy, p);
	glFlush();
}

int main(int argc, char **argv){

	printf( "Enter (x1, y1, x2, y2)\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham's Line Drawing");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
    return 0;
}
