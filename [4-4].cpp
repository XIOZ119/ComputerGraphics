#include <gl/glut.h>
#include <gl/glu.h>

GLfloat MyVertices[8][3] = { {-0.25, -0.25, 0.25}, {-0.25,0.25, 0.25}, {0.25, 0.25, 0.25}, {0.25, -0.25, 0.25}, {-0.25, -0.25, -0.25}, {-0.25, 0.25, -0.25}, {0.25, 0.25, -0.25}, {0.25, -0.25, -0.25} };

GLfloat MyColors[8][3] = { {0.2, 0.2, 0.2}, {1.0, 0.0, 0.0}, {1.0, 1.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 1.0}, {1.0, 0.0, 1.0}, {1.0, 1.0, 1.0}, {0.0, 1.0, 1.0} };

GLubyte MyVertexList[24] = { 0,3,2,1, 3,7,6,2,  0,4,7,3,  1,2,6,5,  4,5,6,7,  0,1,5,4 }; //¾Õ¸é, ¿À¸¥ÂÊ¸é, ¾Æ·¡¸é, À­¸é, µÞ¸é, ¿ÞÂÊ¸é

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFrontFace(GL_CCW);
	glEnable(GL_CULL_FACE);
	glEnableClientState(GL_COLOR_ARRAY);
	glEnableClientState(GL_VERTEX_ARRAY);
	glColorPointer(3, GL_FLOAT, 0, MyColors);
	glVertexPointer(3, GL_FLOAT, 0, MyVertices);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRotatef(30.0, 1.0, 1.0, 1.0);
	for (GLint i = 0; i < 6; i++)
		glDrawElements(GL_POLYGON, 4, GL_UNSIGNED_BYTE, &MyVertexList[4*i]);
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("[4-2] code");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}