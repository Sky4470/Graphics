
#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0,1,1);
	glBegin(GL_POLYGON);
	glVertex2f(0.1,0.1);
	glVertex2f(-0.2,0.2);
	glVertex2f(-0.3,-0.3);
	glVertex2f(-0.4,0.4);

	
	glEnd();
	glFlush();
}
int main(int arge, char** argv)
{
	glutInit(&arge,argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Simple");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
