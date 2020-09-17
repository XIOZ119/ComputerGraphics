#include <gl/glut.h>

void MyDisplay()
{
	glClearColor(0.259, 0.259, 0.453, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINES);
		glVertex2f(-1.0, 0.0);
		glVertex2f(0.0, 0.0);
	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(500, 500);
	glutCreateWindow("My First OpenGL Code"); //윈도우 생성 (윈도우 이름)
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}