#include <GL/glut.h>///�ϥ�glut�~��

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);///��߯���
    glutSwapBuffers();///�洫�⭿��buffers
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///glut��l�]�w
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///��ܼҦ�
    glutCreateWindow("08161071 ����޳");///�}��
    glutDisplayFunc(display);///���@�U�n��ܪ��禡
    glutMainLoop();///�D�n�j��
}
