#include <GL/glut.h>
#include <cstdlib>

#include "Scene1.h"
#include "Scene2.h"
#include "Scene3.h"
#include "Scene4.h"

static Scene1 scene1;
static Scene2 scene2;
static Scene3 scene3;
static Scene4 scene4;

static int currentScene = 1;
static int lastTime     = 0;


static void startScene(int n)
{
    if (n < 1) n = 4;
    if (n > 4) n = 1;
    currentScene = n;

    switch (currentScene)
    {
        case 1: scene1.initGL(); break;
        case 2: scene2.initGL(); break;
        case 3: scene3.initGL(); break;
    }

    glutPostRedisplay();
}


static void display()
{
    switch (currentScene)
    {
        case 1: scene1.draw(); break;
        case 2: scene2.draw(); break;
        case 3: scene3.draw(); break;
        case 4: scene4.draw(); break;
    }

    glutSwapBuffers();
}

static void timer(int)
{
    int now = glutGet(GLUT_ELAPSED_TIME);
    float dt = (now - lastTime) / 1000.0f;
    lastTime = now;

    if (dt > 0.1f) dt = 0.1f;

    switch (currentScene)
    {
        case 1: scene1.update();   break;
        case 2: scene2.update();   break;
        case 3: scene3.update(dt); break;
        case 4: scene4.update();   break;
    }

    glutPostRedisplay();
    glutTimerFunc(16, timer, 0);
}

static void keyboard(unsigned char key, int, int)
{
    if (key == 27)
    {
        std::exit(0);
    }

    if (key >= '1' && key <= '4')
    {
        startScene(key - '0');
        return;
    }
    if (key == 'n' || key == 'N' || key == 9)
    {
        startScene(currentScene + 1);
        return;
    }
    if (key == 'b' || key == 'B')
    {
        startScene(currentScene - 1);
        return;
    }

    switch (currentScene)
    {
        case 1: scene1.keyDown(key); break;
        case 2: scene2.keyDown(key); break;
        case 3: scene3.keyDown(key); break;
        case 4: scene4.keyDown(key); break;
    }
}

static void specialKeys(int key, int, int)
{
    switch (currentScene)
    {
        case 1: scene1.specialDown(key); break;
        case 2: scene2.specialDown(key); break;
        case 3: break;
        case 4: scene4.specialDown(key); break;
    }
}

static void reshape(int w, int h)
{
    if (h == 0) h = 1;
    glViewport(0, 0, w, h);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 700);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("Love Story - Computer Graphics Project");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);

    startScene(1);

    lastTime = glutGet(GLUT_ELAPSED_TIME);
    glutTimerFunc(16, timer, 0);

    glutMainLoop();
    return 0;
}
