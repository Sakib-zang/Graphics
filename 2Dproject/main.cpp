#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<bits/stdc++.h>
#define PI 3.1416

static float	sunx	=  5.0;
static float	suny    =  0.0;

void circle(float radius_x, float radius_y,float x, float y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x+x, sin(angle) * radius_y+y, 0);
		}

	glEnd();
}
void Man1(float radius_x, float radius_y,float x, float y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);//head

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x+x, sin(angle) * radius_y+y, 0);
		}

	glEnd();

    glBegin(GL_QUADS); // BODY
        glVertex2d(-7.8, -1.3);
        glVertex2d(-8.2, -1.3);

        glVertex2d(-8.2, -2.5);
        glVertex2d(-7.8, -2.5);

    glEnd();
    glBegin(GL_QUADS); // LEG
        glVertex2d(-7.8, -2.5);
        glVertex2d(-7.9, -2.5);

        glVertex2d(-7.9, -3.1);
        glVertex2d(-7.8, -3.1);

    glEnd();
    glBegin(GL_QUADS); // LEG
        glVertex2d(-8.1, -2.5);
        glVertex2d(-8.2, -2.5);

        glVertex2d(-8.2, -3.1);
        glVertex2d(-8.1, -3.1);

    glEnd();
    glBegin(GL_QUADS); // HANDS
        glVertex2d(-7.8, -1.3);
        glVertex2d(-7.9, -1.3);

        glVertex2d(-7.6, -2.0);
        glVertex2d(-7.5, -2.0);

    glEnd();
    glBegin(GL_QUADS); // HANDS
        glVertex2d(-8.1, -1.3);
        glVertex2d(-8.2, -1.3);

        glVertex2d(-8.4, -2.0);
        glVertex2d(-8.3, -2.0);

    glEnd();

}
void init()
{
    glClearColor(0.9f, 0.9f, 0.9f, 0.9f);  //sets the color value to clear buffer
    glOrtho(-5,5,-5,5,-5,5); //left,right,bottom,top, near, far
}
void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT); //clear buffer, buffer_bit indicates the buffers currently enabled for color writing

    //sun
    glPushMatrix();
    glColor3f(1.0, 5.0, 0.0);
	glTranslatef(sunx,suny,0);
	circle(1,1,0,3);
	glPopMatrix();
    //bldg1
    glColor3f(0.0f, 0.0f, 1.0f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-4.8, 4.8);
        glVertex2d(-5.0, 5.0);

        glVertex2d(-5.0, -5.0);
        glVertex2d(-4.8, -5.0);

    glEnd();
    //bldg2
    glColor3f(0.0f, 0.0f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-4.5, 4.0);
        glVertex2d(-4.8, 4.2);
        glVertex2d(-4.8, 3.0);
        glVertex2d(-4.5, 3.0);
    glEnd();
    //bldg3
    glColor3f(0.0f, 0.5f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-4.0, 3.0);
        glVertex2d(-4.8, 3.0);
        glVertex2d(-4.8, -5.0);
        glVertex2d(-4.0, -5.0);
    glEnd();
    //bldg3 shadow
    glColor3f(0.1f, 0.7f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-3.8, 2.9);
        glVertex2d(-4.0, 3.0);
        glVertex2d(-4.0, -5.0);
        glVertex2d(-3.8, -5.0);
    glEnd();
    //bldg4
    glColor3f(0.5f, 0.5f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-2.0, 4.8);
        glVertex2d(-3.5, 4.8);
        glVertex2d(-3.5, -5.0);
        glVertex2d(-2.0, -5.0);
    glEnd();
    //bldg4 shadow
    glColor3f(0.7f, 0.5f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-1.9, 4.7);
        glVertex2d(-2.0, 4.8);
        glVertex2d(-2.0, -5.0);
        glVertex2d(-1.9, -5.0);
    glEnd();
//bldg5
    glColor3f(0.1f, 0.5f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-0.5, 2.0);
        glVertex2d(-1.95, 2.0);
        glVertex2d(-1.95, -5.0);
        glVertex2d(-0.5, -5.0);
    glEnd();
    //bldg6
    glColor3f(0.1f, 0.1f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(0.8, 3.0);
        glVertex2d(-0.5, 3.0);
        glVertex2d(-0.5, -5.0);
        glVertex2d(0.8, -5.0);
    glEnd();
    //bldg7
    glColor3f(0.1f, 0.1f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(3.8, 4.6);
        glVertex2d(2.5, 4.6);
        glVertex2d(2.5, -5.0);
        glVertex2d(3.8, -5.0);
    glEnd();
        //bldg7 shadow
    glColor3f(0.1f, 0.4f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(2.5, 4.6);
        glVertex2d(2.3, 4.5);
        glVertex2d(2.3, -5.0);
        glVertex2d(2.5, -5.0);
    glEnd();
    //bldg8
    glColor3f(0.1f, 0.1f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(5.3, 4.0);
        glVertex2d(4.0, 4.0);
        glVertex2d(4.0, -5.0);
        glVertex2d(5.3, -5.0);
    glEnd();
    //bldg8 shadow
    glColor3f(0.1f, 0.3f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(4.0, 4.0);
        glVertex2d(3.7, 3.9);
        glVertex2d(3.7, -5.0);
        glVertex2d(4.0, -5.0);
    glEnd();
//bldg9
    glColor3f(0.7f, 0.7f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(2.4, 2.5);
        glVertex2d(0.9, 2.5);
        glVertex2d(0.9, -5.0);
        glVertex2d(2.4, -5.0);
    glEnd();
    //bldg9 shadow
    glColor3f(0.6f, 0.6f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(0.9, 2.5);
        glVertex2d(0.8, 2.4);
        glVertex2d(0.8, -5.0);
        glVertex2d(0.9, -5.0);
    glEnd();

    //bldg10
    glColor3f(0.6f, 0.6f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-2.3, 1.7);
        glVertex2d(-3.3, 1.7);
        glVertex2d(-3.3, -5.0);
        glVertex2d(-2.3, -5.0);
    glEnd();
      //bldg10 shadow
    glColor3f(0.6f, 0.6f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-2.2, 1.6);
        glVertex2d(-2.3, 1.7);
        glVertex2d(-2.3, -5.0);
        glVertex2d(-2.2, -5.0);
    glEnd();
     //bldg11
    glColor3f(0.9f, 0.0f, 0.1f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-1.2, 1.0);
        glVertex2d(-2.2, 1.0);
        glVertex2d(-2.2, -5.0);
        glVertex2d(-1.2, -5.0);
    glEnd();
      //bldg11 shadow
    glColor3f(0.9f, 0.4f, 0.1f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-1.1, 0.9);
        glVertex2d(-1.2, 1.0);
        glVertex2d(-1.2, -5.0);
        glVertex2d(-1.1, -5.0);
    glEnd();
      //bldg12
    glColor3f(0.9f, 0.4f, 0.1f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(0.5, 0.0);
        glVertex2d(-0.5, 0.0);
        glVertex2d(-0.5, -5.0);
        glVertex2d(0.5, -5.0);
    glEnd();
      //bldg13
    glColor3f(0.1f, 0.4f, 0.1f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(1.7, -0.5);
        glVertex2d(0.5, -0.5);
        glVertex2d(0.5, -5.0);
        glVertex2d(1.7, -5.0);
    glEnd();

 //bldg14
    glColor3f(0.1f, 0.4f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(4.3, 2.75);
        glVertex2d(3.3, 2.75);
        glVertex2d(3.3, -5.0);
        glVertex2d(4.3, -5.0);
    glEnd();
//bldg14 shadow
    glColor3f(0.1f, 0.2f, 0.5f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(3.3, 2.75);
        glVertex2d(3.1, 2.6);
        glVertex2d(3.1, -5.0);
        glVertex2d(3.3, -5.0);
    glEnd();

    //floor
    glColor3f(0.1f, 0.1f, 0.2f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(5.0, -3.0);
        glVertex2d(-5.0, -3.0);
        glVertex2d(-5.0, -5.0);
        glVertex2d(5.0, -5.0);
    glEnd();

    //railing
    glColor3f(0.2f, 0.1f, 0.1f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(5.0, -2.0);
        glVertex2d(-5.0, -2.0);
        glVertex2d(-5.0, -2.3);
        glVertex2d(5.0, -2.3);
    glEnd();
     //bars
    glColor3f(0.2f, 0.1f, 0.1f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-4.0, -2.3);
        glVertex2d(-4.2, -2.3);
        glVertex2d(-4.2, -3.0);
        glVertex2d(-4.0, -3.0);
    glEnd();
     glColor3f(0.2f, 0.1f, 0.1f); //RGB Color
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-3.0, -2.3);
        glVertex2d(-3.2, -2.3);
        glVertex2d(-3.2, -3.0);
        glVertex2d(-3.0, -3.0);
    glEnd();
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-2.0, -2.3);
        glVertex2d(-2.2, -2.3);
        glVertex2d(-2.2, -3.0);
        glVertex2d(-2.0, -3.0);
    glEnd();
     glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(-1.0, -2.3);
        glVertex2d(-1.2, -2.3);
        glVertex2d(-1.2, -3.0);
        glVertex2d(-1.0, -3.0);
    glEnd();
     glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(0.0, -2.3);
        glVertex2d(0.2, -2.3);
        glVertex2d(0.2, -3.0);
        glVertex2d(0.0, -3.0);
    glEnd();
     glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(1.0, -2.3);
        glVertex2d(1.2, -2.3);
        glVertex2d(1.2, -3.0);
        glVertex2d(1.0, -3.0);
    glEnd();
    glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(2.0, -2.3);
        glVertex2d(2.2, -2.3);
        glVertex2d(2.2, -3.0);
        glVertex2d(2.0, -3.0);
    glEnd();
       glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(3.0, -2.3);
        glVertex2d(3.2, -2.3);
        glVertex2d(3.2, -3.0);
        glVertex2d(3.0, -3.0);
    glEnd();
       glBegin(GL_QUADS); // It can be any type Gl_POINT,_LINE
        glVertex2d(4.0, -2.3);
        glVertex2d(4.2, -2.3);
        glVertex2d(4.2, -3.0);
        glVertex2d(4.0, -3.0);
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
        glVertex2d(-6.0, -3.0);
        glVertex2d(6.0, -3.0);
	glEnd();


	//man
    glPushMatrix();
    glColor3f(1.0, 5.0, 0.0);
	glTranslatef(sunx,suny,0);
	Man1(.3,.3,-8,-1);
	glPopMatrix();

    glFlush(); //force execution of Gl commands
}

void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:
				sunx -=1;
				glutPostRedisplay();
				break;

		case GLUT_KEY_RIGHT:
				sunx +=1;
				glutPostRedisplay();
				break;

        case GLUT_KEY_DOWN:
				suny -=1;
				glutPostRedisplay();
				break;

		case GLUT_KEY_UP:
				suny +=1;
				glutPostRedisplay();
				break;
	  default:
			break;
	}
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 1000); // Size of the window
    glutInitWindowPosition(300,0); // location of the window
    glutCreateWindow("Demo Application"); // Create window with this name
    init(); // call initialize function
    glutDisplayFunc(myDisplay); // call display function
    glutSpecialFunc(spe_key);
    glutMainLoop();
    return 0;
}

