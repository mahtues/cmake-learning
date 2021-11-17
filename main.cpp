#include <iostream>
#include <GL/glut.h>

#include <foo.h>

int main(int argc, char** argv) {
    std::cout << "hello world!\n";
    Foo().run();

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(800,450);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("hello window");

    glutMainLoop();

    return 0;
}
