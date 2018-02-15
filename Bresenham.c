#include <windows.h>
#include <gl/glut.h>
#include <math.h>
#include <stdio.h>
void drawline(int x0, int y0, int x1, int y1)
{
     int dx, dy, p, x, y;
     glBegin(GL_POINTS);
    glColor3f(1.0,1.0,1.0);
    double m=(double)(y1-y0)/(x1-x0);        
    if(m<1) 
{
    
 
    dx=x1-x0;
    dy=y1-y0;
 
    x=x0;
    y=y0;
 
    p=2*dy-dx;
 
    while(x<x1)
    {
        if(p<0)
        {
               glVertex2d(x,y);
            printf("%f %f\n",y,x);
            x=x+1;
            p=p+(2*dy);
        }
        else
        {
             glVertex2d(x,y);
            printf("%f %f\n",y,x);
            x=x+1;
            y=y+1;
            p=p+(2*dy)-(2*dx);
        }
        
    }
    
}
glEnd();
glFlush();
}
void init(void){    
    glClearColor(0.0,0.0,0.0,0.0);    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,100.0,0.0,100,0.0,100.0);
}
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    drawline(2,3,90,80);    
    glutSwapBuffers();
}

int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Bresenham Line Drawing!");
    init();
    glutDisplayFunc(display);    
    glutMainLoop();
    return 0;
}
