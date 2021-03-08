#include <GL/glut.h>///使用glut外掛

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);///實心茶壺
    glutSwapBuffers();///交換兩倍的buffers
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///glut初始設定
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///顯示模式
    glutCreateWindow("08161071 蕭承瑋");///開窗
    glutDisplayFunc(display);///等一下要顯示的函式
    glutMainLoop();///主要迴圈
}
