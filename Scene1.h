#ifndef SCENE1_H
#define SCENE1_H
#include <GL/glut.h>

class Scene1
{
public:
    Scene1();

    void initGL();
    void draw();
    void update();

    void keyDown(unsigned char key);
    void specialDown(int key);

private:

    float clamp01(float v);
    float absf(float v);

    void setColor(float r, float g, float b);
    void drawRectangle(float x1, float y1, float x2, float y2, float r, float g, float b);
    void drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, float r, float g, float b);
    void drawQuad(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float r, float g, float b);
    void drawEllipse(float cx, float cy, float rx, float ry, float r, float g, float b);

    void drawScreenTint(float r, float g, float b, float a);

    void drawBird(float x, float y, float s);
    void drawBench(float x, float y, float s);
    void drawTree(float x, float y, float s);

    void drawHumanBoy(float x, float y, float s);
    void drawHumanGirl(float x, float y, float s);

    void drawHeart(float x, float y, float s);

    void drawGradientSky(float t);
    void drawSun(float x, float y, float t);

    void drawGround();
    void drawHorizonMask();
    void drawPanel1();

    void checkMeetCollision();

private:

    float BoyX;
    float GirlX;
    float BoyY;
    float GirlY;

    float MoveStep;

    int   MeetDone;
    int   SunGoingDown;

    float SunX;
    float SunY;
    float SkyT;

    int   HeartActive;
    float HeartScale;
    float HeartT;

    float Bird1X, Bird1Y;
    float Bird2X, Bird2Y;
    float Bird3X, Bird3Y;
    float Bird4X, Bird4Y;
    float Bird5X, Bird5Y;

    float BirdSpeed;
    float BirdWaveT;
};


#endif

