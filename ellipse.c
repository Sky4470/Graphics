#include<windows.h>
#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>

void drawEllipse(int rx,int ry)
{
		glBegin(GL_POINTS);
		glColor3f(0,1,1);
		double h=50,k=50;
		double x=0;
		double y=ry;
		double x0=x;
		double y0=y;
		double a=rx*rx;
		double b=ry*ry;
		double p1=b-rx*b-(1/4)*a;
		double p2=b*((x0+1/2)*(x0+1/2))+a*((y0-1)*(y0-1))-a*b;
		while(2*b*x<=2*a*y)
		{
			if(p1<0)
			{
				
				glVertex2d(h+x,k+y);
				glVertex2d(h+x,k-y);
				glVertex2d(h-x,k-y);
				glVertex2d(h-x,k+y);
				y=y;
				x=x+1;
				p1=p1+2*b*x+b;
			}
			else
			{
				
				glVertex2d(h+x,k+y);
				glVertex2d(h+x,k-y);
				glVertex2d(h-x,k-y);
				glVertex2d(h-x,k+y);
				x=x+1;
				y=y-1;
				p1=p1+2*b*x-2*a*y+b;
			}
		
			
		}
		
		while(y!=0)
		{
			if(p2<0)
			{
				
				glVertex2d(h+x,k+y);
				glVertex2d(h+x,k-y);
				glVertex2d(h-x,k-y);
				glVertex2d(h-x,k+y);
				y=y-1;
				x=x+1;
				p2=p2+2*b*x-2*a*y+a;
			}
			else
			{
				
				glVertex2d(h+x,k+y);
				glVertex2d(h+x,k-y);
				glVertex2d(h-x,k-y);
				glVertex2d(h-x,k+y);
				x=x;
				y=y-1;
				p2=p2-2*a*y+a;
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
	glOrtho(-500.0,500.0,-500.0,500.0,-500.0,500.0);
	
}
 void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawEllipse(200,400);
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
