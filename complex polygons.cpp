#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,0,1);
	glBegin(GL_POLYGON);
	 glVertex2f(0,0);
	 glVertex2f(0,0.4);
	 glVertex2f(0.4,0.4);
	 glVertex2f(0.4,0);
	glEnd();
	glColor3f(1,0,1);
	glBegin(GL_POLYGON);
	 glVertex2f(0,0.2);
	 glVertex2f(0.2,0.4);
	 glVertex2f(0.4,0.2);
	 glVertex2f(0.2,0);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	 glVertex2f(0,0.2);
	 glVertex2f(0.4,0.2);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	 glVertex2f(0.3,0.3);
	 glVertex2f(0.1,0.1);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	 glVertex2f(0.3,0.1);
	 glVertex2f(0.1,0.3);
	glEnd();
	glFlush();
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(750,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("COMPLEX POLYGONS");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
