#ifndef SCENE4_H
#define SCENE4_H

#include <GL/glut.h>

class Scene4 {
public:
    Scene4();
    void initGL();
    void draw();
    void update();
    void keyDown(unsigned char key);
    void specialDown(int key);
    float MoonX, MoonY;
    float SkyT;         
    int   MoonSetting;

private:
      void setColor(float r, float g, float b);
    void drawRectangle(float x1, float y1, float x2, float y2, float r, float g, float b);
    void drawEllipse(float cx, float cy, float rx, float ry, float r, float g, float b);
    void drawSky();
    void drawSkyline();
    void drawStreet();
    void drawManSitting();
    float StarTimer;
    float ManBreatheT;
    int   LetterLook;      
    float LetterOffset;

    int   ShootingStarActive;
    float ShootingStarX;
    float ShootingStarY;
};

#endif
