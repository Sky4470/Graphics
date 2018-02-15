#include<windows.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>

void drawCircle(int x,int y)
{
		glBegin(GL_POINTS);
		glColor3f(0,1,1);
		double h=50,k=50;
		double pk=1-y;
		while(x<=y)
		{
			if(pk<0)
			{
				
				glVertex2d(h+x,k+y);
				glVertex2d(h+y,k+x);
				glVertex2d(h+y,k-x);
				glVertex2d(h+x,k-y);
				glVertex2d(h-x,k-y);
				glVertex2d(h-y,k-x);
				glVertex2d(h-y,k+x);
				glVertex2d(h-x,k+y);
				y=y;
				x=x+1;
				pk=pk+2*x+3;
			}
			else
			{
				glVertex2d(h+x,k+y);
				glVertex2d(h+y,k+x);
				glVertex2d(h+y,k-x);
				glVertex2d(h+x,k-y);
				glVertex2d(h-x,k-y);
				glVertex2d(h-y,k-x);
				glVertex2d(h-y,k+x);
				glVertex2d(h-x,k+y);
				x=x+1;
				y=y-1;
				pk=pk+2*x-2*y+5;
			}
			
		}
glEnd();
glFlush();
}

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0,500.0,0.0,500.0,0.0,500.0);
	
}
 void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawCircle(0,40);
	glutSwapBuffers();
}
int main(int argc,char** argv)
{
	
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("DDA LINE DRAWING");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
