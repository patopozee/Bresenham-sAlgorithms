#include <GL/freeglut.h>
#include <GL/gl.h>
#include <stdio.h>


void myInit() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 500, 0, 500);
    glColor3f(0.0, 0.0, 0.0);
}
int x, y;
void draw_pixel(int x, int y) {
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
}
int x1, y1, x2, y2, p, dx, dy;
void draw_line(int x1, int x2, int y1, int y2, int dx, int dy, int p){
  dx=x2-x1; 
  dy=y2-y1;
  p=2*dx-dy;
while(x<=x2)
{
   draw_pixel(x,y);
   x++;
if(p<0)
      {
    p=p+2*(y1-y);
      }
      else{
   p=p+2*(y1-y)-2*(x1-x);
     y++;
      }
  }
}

void myDisplay() {
	draw_line(x1, y1, x2, y2, p, dx, dy);
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

