#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
	 glVertex2f(0.1,0.6);
	 glVertex2f(0,0.4);
	 glVertex2f(0.2,0.4);
	glEnd();
	glColor3f(1,0.5,1);
	glBegin(GL_POLYGON);
	 glVertex2f(0,0.4);
	 glVertex2f(0.2,0.4);
	 glVertex2f(0.2,0);
	 glVertex2f(0,0);
	glEnd();
	glColor3f(0,0.5,1);
	glBegin(GL_POLYGON);
	 glVertex2f(0.1,0.6);
	 glVe