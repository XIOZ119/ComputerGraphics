/* Points 확장 구현*/

/*#include <gl/glut.h>
#include <math.h>

#define Pi 3.1415

void MyDisplay()
{
	GLfloat Size[2], Angle;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	glGetFloatv(GL_POINT_SIZE_RANGE, Size);
	glPointSize(Size[0] * 5 );
	glBegin(GL_POINTS);
	for (Angle = 0.0; Angle <= 2.0 * Pi; Angle += Pi / 30.0)
		glVertex3f(0.5 * cos(Angle), 0.5 * sin(Angle), 0.0);
	glEnd();
	glFlush();
}*/

/*Lines 확장구현*/

/*#include <gl/glut.h>

void MyDisplay()
{
	glClearColor(0.259, 0.259, 0.453, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(0.2, 0.0);
	glVertex2f(0.8, 0.0);
	glEnd();
	glFlush();

}*/

/*LineStrip 확장구현*/


/*#include <gl/glut.h>

void MyDisplay()
{
	glClearColor(0.259, 0.259, 0.453, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_LINE_STRIP);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.5, 0.0);
	glVertex2f(0.3, 0.5);
	glEnd();
	glFlush();
}*/

/*LineLoop 확장구현*/

/*#include <gl/glut.h>

void MyDisplay() {
	glClearColor(0.259, 0.259, 0.453, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.5, 0.0);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.0, 0.5);
	glEnd();
	glFlush();
}*/

/*TrangleFan 확장구현*/

/*#include <gl/glut.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 0.3);
	glVertex2f(0.2, 0.3);
	glVertex2f(0.3, 0.2);
	glEnd();
	glFlush();
}*/

/*Triangles 확장구현*/

/*#include <gl/glut.h>

void MyDisplay()
{
	glClearColor(0.259, 0.259, 0.453, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.4);
	glVertex2f(0.0, 0.7);
	glVertex2f(0.7, 0.7);
	glEnd();
	glFlush();
}*/

/*TriangleStrip 확장구현*/

/*#include <gl/glut.h>

void MyDisplay()
{
	glClearColor(0.259, 0.259, 0.453, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_TRIANGLE_STRIP);
		glVertex2f(0.0, 0.0);
		glVertex2f(0.2, 0.2);
		glVertex2f(0.3, 0.1);
		glVertex2f(0.4, 0.3);
		glVertex2f(0.5, 0.3);
	glEnd();
	glFlush();

}*/

/*Polygons 확장구현*/

/*#include <gl/glut.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.5, 0.4, 0.3);
	glBegin(GL_POLYGON);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(1.0, 0.0, 0.0); 
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(0.3, 0.5, 0.0);
	glEnd();
	glFlush();
}*/

/*Quads 확장구현*/

/*#include <gl/glut.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3, 0.5, 0.1);
	glBegin(GL_QUADS);
	glVertex3f(0.0, 0.4, 0.0);
	glVertex3f(0.5, 0.4, 0.0);
	glVertex3f(0.5, 0.2, 0.0);
	glVertex3f(0.0, 0.3, 0.0);
	glEnd();
	glFlush();
}*/

/*QuadStrip 확장구현*/

/*#include <gl/glut.h>

void MyDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.1, 0.4, 0.8);
	glBegin(GL_QUAD_STRIP);
	glVertex3f(0.0, 0.0, 0.0);
	glVertex3f(0.1, 0.1, 0.0);
	glVertex3f(0.3, 0.0, 0.0);
	glVertex3f(0.4, 0.1, 0.0);
	glVertex3f(0.5, 0.0, 0.0);
	glVertex3f(0.6, 0.1, 0.0);
	glEnd();
	glFlush();
}*/

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutCreateWindow("GL_Modeling");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}
