
//Semestre 2019-2
//Ramirez verduzco lizet//
//grup 02//
//visual studio 2017//
//practica 2//

#include "Main.h"
void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo a dibujar

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(0.0f, 20.0f, 1.0f);
	glVertex3f(1.0f, 20.0f, 1.0f);
	glVertex3f(1.0f, 19.0f, 1.0f);
	glVertex3f(0.0f, 19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-1.0f, 19.0f, 1.0f);
	glVertex3f(0.0f, 19.0f, 1.0f);
	glVertex3f(0.0f, 17.0f, 1.0f);
	glVertex3f(-1.0f, 17.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(1.0f, 19.0f, 1.0f);
	glVertex3f(2.0f, 19.0f, 1.0f);
	glVertex3f(2.0f, 18.0f, 1.0f);
	glVertex3f(1.0f, 18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(2.0f, 18.0f, 1.0f);
	glVertex3f(3.0f, 18.0f, 1.0f);
	glVertex3f(3.0f, 17.0f, 1.0f);
	glVertex3f(2.0f, 17.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(2.0f, 17.0f, 1.0f);
	glVertex3f(3.0f, 17.0f, 1.0f);
	glVertex3f(3.0f, 16.0f, 1.0f);
	glVertex3f(2.0f, 16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-4.0f, 16.0f, 1.0f);
	glVertex3f(-2.0f, 16.0f, 1.0f);
	glVertex3f(-2.0f, 15.0f, 1.0f);
	glVertex3f(-4.0f, 15.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-2.0f, 17.0f, 1.0f);
	glVertex3f(-1.0f, 17.0f, 1.0f);
	glVertex3f(-1.0f, 16.0f, 1.0f);
	glVertex3f(-2.0f, 16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-5.0f, 10.0f, 1.0f);
	glVertex3f(3.0f, 10.0f, 1.0f);
	glVertex3f(3.0f, 8.0f, 1.0f);
	glVertex3f(-5.0f, 8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-5.0f, 12.0f, 1.0f);
	glVertex3f(-2.0f, 12.0f, 1.0f);
	glVertex3f(-2.0f, 10.0f, 1.0f);
	glVertex3f(-5.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-7.0f, 13.0f, 1.0f);
	glVertex3f(-5.0f, 13.0f, 1.0f);
	glVertex3f(-5.0f, 10.0f, 1.0f);
	glVertex3f(-7.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-5.0f, 13.0f, 1.0f);
	glVertex3f(-3.0f, 13.0f, 1.0f);
	glVertex3f(-3.0f, 12.0f, 1.0f);
	glVertex3f(-5.0f, 12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-3.0f, 8.0f, 1.0f);
	glVertex3f(0.0f, 8.0f, 1.0f);
	glVertex3f(0.0f, 7.0f, 1.0f);
	glVertex3f(-3.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-2.0f, 11.0f, 1.0f);
	glVertex3f(2.0f, 11.0f, 1.0f);
	glVertex3f(2.0f, 10.0f, 1.0f);
	glVertex3f(-2.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(0.0f, 12.0f, 1.0f);
	glVertex3f(1.0f, 12.0f, 1.0f);
	glVertex3f(1.0f, 11.0f, 1.0f);
	glVertex3f(0.0f, 11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-6.0f, 14.0f, 1.0f);
	glVertex3f(-5.0f, 14.0f, 1.0f);
	glVertex3f(-5.0f, 13.0f, 1.0f);
	glVertex3f(-6.0f, 13.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-16.0f, 9.0f, 1.0f);
	glVertex3f(-13.0f, 9.0f, 1.0f);
	glVertex3f(-13.0f, 8.0f, 1.0f);
	glVertex3f(-16.0f, 8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-16.0f, 8.0f, 1.0f);
	glVertex3f(-15.0f, 8.0f, 1.0f);
	glVertex3f(-15.0f, 7.0f, 1.0f);
	glVertex3f(-16.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-13.0f, 8.0f, 1.0f);
	glVertex3f(-11.0f, 8.0f, 1.0f);
	glVertex3f(-11.0f, 7.0f, 1.0f);
	glVertex3f(-13.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-12.0f, 7.0f, 1.0f);
	glVertex3f(-10.0f, 7.0f, 1.0f);
	glVertex3f(-10.0f, 6.0f, 1.0f);
	glVertex3f(-12.0f, 6.0f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-8.0f, -8.0f, 1.0f);
	glVertex3f(-6.0f, -8.0f, 1.0f);
	glVertex3f(-6.0f, -9.0f, 1.0f);
	glVertex3f(-8.0f, -9.0f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-11.0f, 6.0f, 1.0f);
	glVertex3f(-9.0f, 6.0f, 1.0f);
	glVertex3f(-9.0f, 5.0f, 1.0f);
	glVertex3f(-11.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-10.0f, 5.0f, 1.0f);
	glVertex3f(-9.0f, 5.0f, 1.0f);
	glVertex3f(-9.0f, 4.0f, 1.0f);
	glVertex3f(-10.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-9.0f, 4.0f, 1.0f);
	glVertex3f(-8.0f, 4.0f, 1.0f);
	glVertex3f(-8.0f, 2.0f, 1.0f);
	glVertex3f(-9.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-13.0f, -1.0f, 1.0f);
	glVertex3f(-11.0f, -1.0f, 1.0f);
	glVertex3f(-11.0f, -2.0f, 1.0f);
	glVertex3f(-13.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-13.0f, -2.0f, 1.0f);
	glVertex3f(-12.0f, -2.0f, 1.0f);
	glVertex3f(-12.0f, -3.0f, 1.0f);
	glVertex3f(-13.0f, -3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-16.0f, -11.0f, 1.0f);
	glVertex3f(-15.0f, -11.0f, 1.0f);
	glVertex3f(-15.0f, -12.0f, 1.0f);
	glVertex3f(-16.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-14.0f, -11.0f, 1.0f);
	glVertex3f(-13.0f, -11.0f, 1.0f);
	glVertex3f(-13.0f, -12.0f, 1.0f);
	glVertex3f(-14.0f, -12.0f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-11.0f, -16.0f, 1.0f);
	glVertex3f(-8.0f, -16.0f, 1.0f);
	glVertex3f(-8.0f, -17.0f, 1.0f);
	glVertex3f(-11.0f, -17.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(1.0f, -21.0f, 1.0f);
	glVertex3f(3.0f, -21.0f, 1.0f);
	glVertex3f(3.0f, -22.0f, 1.0f);
	glVertex3f(1.0f, -22.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-6.0f, 10.0f, 1.0f);
	glVertex3f(-5.0f, 10.0f, 1.0f);
	glVertex3f(-5.0f, 9.0f, 1.0f);
	glVertex3f(-6.0f, 9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(10.0f, 6.0f, 1.0f);
	glVertex3f(14.0f, 6.0f, 1.0f);
	glVertex3f(14.0f, 5.0f, 1.0f);
	glVertex3f(10.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(8.0f, 5.0f, 1.0f);
	glVertex3f(10.0f, 5.0f, 1.0f);
	glVertex3f(10.0f, 4.0f, 1.0f);
	glVertex3f(8.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(6.0f, 4.0f, 1.0f);
	glVertex3f(8.0f, 4.0f, 1.0f);
	glVertex3f(8.0f, 3.0f, 1.0f);
	glVertex3f(6.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(5.0f, 3.0f, 1.0f);
	glVertex3f(6.0f, 3.0f, 1.0f);
	glVertex3f(6.0f, 2.0f, 1.0f);
	glVertex3f(5.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(4.0f, 2.0f, 1.0f);
	glVertex3f(5.0f, 2.0f, 1.0f);
	glVertex3f(5.0f, 1.0f, 1.0f);
	glVertex3f(4.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(3.0f, 1.0f, 1.0f);
	glVertex3f(4.0f, 1.0f, 1.0f);
	glVertex3f(4.0f, 0.0f, 1.0f);
	glVertex3f(3.0f, 0.0f, 1.0f);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-7.0f, 1.0f, 1.0f);
	glVertex3f(-2.0f, 1.0f, 1.0f);
	glVertex3f(-2.0f, -6.0f, 1.0f);
	glVertex3f(-7.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-2.0f, 2.0f, 1.0f);
	glVertex3f(0.0f, 2.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-2.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-4.0f, 3.0f, 1.0f);
	glVertex3f(-2.0f, 3.0f, 1.0f);
	glVertex3f(-2.0f, 1.0f, 1.0f);
	glVertex3f(-4.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-2.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, -2.0f, 1.0f);
	glVertex3f(-2.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-5.0f, 4.0f, 1.0f);
	glVertex3f(-4.0f, 4.0f, 1.0f);
	glVertex3f(-4.0f, 2.0f, 1.0f);
	glVertex3f(-5.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-2.0f, 3.0f, 1.0f);
	glVertex3f(-1.0f, 3.0f, 1.0f);
	glVertex3f(-1.0f, 2.0f, 1.0f);
	glVertex3f(-2.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-3.0f, 4.0f, 1.0f);
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glVertex3f(-2.0f, 3.0f, 1.0f);
	glVertex3f(-3.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-7.0f, 2.0f, 1.0f);
	glVertex3f(-5.0f, 2.0f, 1.0f);
	glVertex3f(-5.0f, 1.0f, 1.0f);
	glVertex3f(-7.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-8.0f, 1.0f, 1.0f);
	glVertex3f(-7.0f, 1.0f, 1.0f);
	glVertex3f(-7.0f, -1.0f, 1.0f);
	glVertex3f(-8.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-9.0f, -1.0f, 1.0f);
	glVertex3f(-8.0f, -1.0f, 1.0f);
	glVertex3f(-8.0f, -2.0f, 1.0f);
	glVertex3f(-9.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-10.0f, -4.0f, 1.0f);
	glVertex3f(-9.0f, -4.0f, 1.0f);
	glVertex3f(-9.0f, -6.0f, 1.0f);
	glVertex3f(-10.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-2.0f, -2.0f, 1.0f);
	glVertex3f(-1.0f, -2.0f, 1.0f);
	glVertex3f(-1.0f, -3.0f, 1.0f);
	glVertex3f(-2.0f, -3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -3.0f, 1.0f);
	glVertex3f(0.0f, -3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(1.0f, -2.0f, 1.0f);
	glVertex3f(2.0f, -2.0f, 1.0f);
	glVertex3f(2.0f, -7.0f, 1.0f);
	glVertex3f(1.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(0.0f, -6.0f, 1.0f);
	glVertex3f(1.0f, -6.0f, 1.0f);
	glVertex3f(1.0f, -8.0f, 1.0f);
	glVertex3f(0.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-1.0f, -7.0f, 1.0f);
	glVertex3f(0.0f, -7.0f, 1.0f);
	glVertex3f(0.0f, -10.0f, 1.0f);
	glVertex3f(-1.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-6.0f, -9.0f, 1.0f);
	glVertex3f(-1.0f, -9.0f, 1.0f);
	glVertex3f(-1.0f, -10.0f, 1.0f);
	glVertex3f(-6.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-5.0f, -6.0f, 1.0f);
	glVertex3f(-1.0f, -6.0f, 1.0f);
	glVertex3f(-1.0f, -8.0f, 1.0f);
	glVertex3f(-5.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-6.0f, -7.0f, 1.0f);
	glVertex3f(-5.0f, -7.0f, 1.0f);
	glVertex3f(-5.0f, -8.0f, 1.0f);
	glVertex3f(-6.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-9.0f, -6.0f, 1.0f);
	glVertex3f(-7.0f, -6.0f, 1.0f);
	glVertex3f(-7.0f, -8.0f, 1.0f);
	glVertex3f(-9.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-7.0f, -6.0f, 1.0f);
	glVertex3f(-6.0f, -6.0f, 1.0f);
	glVertex3f(-6.0f, -7.0f, 1.0f);
	glVertex3f(-7.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.9f, 0.8f, 0.6f);//cafe claro
	glVertex3f(-8.0f, -8.0f, 1.0f);
	glVertex3f(-6.0f, -8.0f, 1.0f);
	glVertex3f(-6.0f, -7.0f, 1.0f);
	glVertex3f(-8.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(0.0f, -19.0f, 1.0f);
	glVertex3f(1.0f, -19.0f, 1.0f);
	glVertex3f(1.0f, -23.0f, 1.0f);
	glVertex3f(0.0f, -23.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(1.0f, -17.0f, 1.0f);
	glVertex3f(2.0f, -17.0f, 1.0f);
	glVertex3f(2.0f, -21.0f, 1.0f);
	glVertex3f(1.0f, -21.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(2.0f, -16.0f, 1.0f);
	glVertex3f(3.0f, -16.0f, 1.0f);
	glVertex3f(3.0f, -21.0f, 1.0f);
	glVertex3f(2.0f, -21.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(2.0f, -22.0f, 1.0f);
	glVertex3f(3.0f, -22.0f, 1.0f);
	glVertex3f(3.0f, -23.0f, 1.0f);
	glVertex3f(2.0f, -23.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(3.0f, -17.0f, 1.0f);
	glVertex3f(4.0f, -17.0f, 1.0f);
	glVertex3f(4.0f, -19.0f, 1.0f);
	glVertex3f(3.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(3.0f, -21.0f, 1.0f);
	glVertex3f(4.0f, -21.0f, 1.0f);
	glVertex3f(4.0f, -22.0f, 1.0f);
	glVertex3f(3.0f, -22.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-10.0f, -6.0f, 1.0f);
	glVertex3f(-9.0f, -6.0f, 1.0f);
	glVertex3f(-9.0f, -8.0f, 1.0f);
	glVertex3f(-10.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-9.0f, -8.0f, 1.0f);
	glVertex3f(-8.0f, -8.0f, 1.0f);
	glVertex3f(-8.0f, -9.0f, 1.0f);
	glVertex3f(-9.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-8.0f, -9.0f, 1.0f);
	glVertex3f(-6.0f, -9.0f, 1.0f);
	glVertex3f(-6.0f, -10.0f, 1.0f);
	glVertex3f(-8.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-6.0f, -10.0f, 1.0f);
	glVertex3f(0.0f, -10.0f, 1.0f);
	glVertex3f(0.0f, -11.0f, 1.0f);
	glVertex3f(-6.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(0.0f, -8.0f, 1.0f);
	glVertex3f(1.0f, -8.0f, 1.0f);
	glVertex3f(1.0f, -10.0f, 1.0f);
	glVertex3f(0.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(0.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(1.0f, -7.0f, 1.0f);
	glVertex3f(2.0f, -7.0f, 1.0f);
	glVertex3f(2.0f, -10.0f, 1.0f);
	glVertex3f(1.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(1.0f, 1.0f, 1.0f);
	glVertex3f(2.0f, 1.0f, 1.0f);
	glVertex3f(2.0f, -2.0f, 1.0f);
	glVertex3f(1.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(2.0f, 0.0f, 1.0f);
	glVertex3f(3.0f, 0.0f, 1.0f);
	glVertex3f(3.0f, -9.0f, 1.0f);
	glVertex3f(2.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(3.0f, 0.0f, 1.0f);
	glVertex3f(4.0f, 0.0f, 1.0f);
	glVertex3f(4.0f, -2.0f, 1.0f);
	glVertex3f(3.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(3.0f, -3.0f, 1.0f);
	glVertex3f(4.0f, -3.0f, 1.0f);
	glVertex3f(4.0f, -8.0f, 1.0f);
	glVertex3f(3.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(3.0f, 2.0f, 1.0f);
	glVertex3f(4.0f, 2.0f, 1.0f);
	glVertex3f(4.0f, 1.0f, 1.0f);
	glVertex3f(3.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(4.0f, 3.0f, 1.0f);
	glVertex3f(5.0f, 3.0f, 1.0f);
	glVertex3f(5.0f, 2.0f, 1.0f);
	glVertex3f(4.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(5.0f, 4.0f, 1.0f);
	glVertex3f(6.0f, 4.0f, 1.0f);
	glVertex3f(6.0f, 3.0f, 1.0f);
	glVertex3f(5.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(7.0f, 5.0f, 1.0f);
	glVertex3f(8.0f, 5.0f, 1.0f);
	glVertex3f(8.0f, 4.0f, 1.0f);
	glVertex3f(7.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(9.0f, 6.0f, 1.0f);
	glVertex3f(10.0f, 6.0f, 1.0f);
	glVertex3f(10.0f, 5.0f, 1.0f);
	glVertex3f(9.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(4.0f, -1.0f, 1.0f);
	glVertex3f(7.0f, -1.0f, 1.0f);
	glVertex3f(7.0f, -2.0f, 1.0f);
	glVertex3f(4.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(7.0f, 0.0f, 1.0f);
	glVertex3f(9.0f, 0.0f, 1.0f);
	glVertex3f(9.0f, -1.0f, 1.0f);
	glVertex3f(7.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(9.0f, 1.0f, 1.0f);
	glVertex3f(11.0f, 1.0f, 1.0f);
	glVertex3f(11.0f, 0.0f, 1.0f);
	glVertex3f(9.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(11.0f, 2.0f, 1.0f);
	glVertex3f(12.0f, 2.0f, 1.0f);
	glVertex3f(12.0f, 1.0f, 1.0f);
	glVertex3f(11.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(12.0f, 4.0f, 1.0f);
	glVertex3f(13.0f, 4.0f, 1.0f);
	glVertex3f(13.0f, 3.0f, 1.0f);
	glVertex3f(12.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(13.0f, 5.0f, 1.0f);
	glVertex3f(14.0f, 5.0f, 1.0f);
	glVertex3f(14.0f, 4.0f, 1.0f);
	glVertex3f(13.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(14.0f, 6.0f, 1.0f);
	glVertex3f(15.0f, 6.0f, 1.0f);
	glVertex3f(15.0f, 5.0f, 1.0f);
	glVertex3f(14.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-16.0f, -10.0f, 1.0f);
	glVertex3f(-15.0f, -10.0f, 1.0f);
	glVertex3f(-15.0f, -11.0f, 1.0f);
	glVertex3f(-16.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-15.0f, -8.0f, 1.0f);
	glVertex3f(-14.0f, -8.0f, 1.0f);
	glVertex3f(-14.0f, -11.0f, 1.0f);
	glVertex3f(-15.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-15.0f, 7.0f, 1.0f);
	glVertex3f(-14.0f, 7.0f, 1.0f);
	glVertex3f(-14.0f, 4.0f, 1.0f);
	glVertex3f(-15.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-14.0f, 4.0f, 1.0f);
	glVertex3f(-13.0f, 4.0f, 1.0f);
	glVertex3f(-13.0f, 2.0f, 1.0f);
	glVertex3f(-14.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-14.0f, -7.0f, 1.0f);
	glVertex3f(-13.0f, -7.0f, 1.0f);
	glVertex3f(-13.0f, -11.0f, 1.0f);
	glVertex3f(-14.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-14.0f, -3.0f, 1.0f);
	glVertex3f(-13.0f, -3.0f, 1.0f);
	glVertex3f(-13.0f, -5.0f, 1.0f);
	glVertex3f(-14.0f, -5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-13.0f, -3.0f, 1.0f);
	glVertex3f(-12.0f, -3.0f, 1.0f);
	glVertex3f(-12.0f, -7.0f, 1.0f);
	glVertex3f(-13.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-13.0f, 2.0f, 1.0f);
	glVertex3f(-12.0f, 2.0f, 1.0f);
	glVertex3f(-12.0f, 1.0f, 1.0f);
	glVertex3f(-13.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-12.0f, 0.0f, 1.0f);
	glVertex3f(-11.0f, 0.0f, 1.0f);
	glVertex3f(-11.0f, -1.0f, 1.0f);
	glVertex3f(-12.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-12.0f, -2.0f, 1.0f);
	glVertex3f(-11.0f, -2.0f, 1.0f);
	glVertex3f(-11.0f, -6.0f, 1.0f);
	glVertex3f(-12.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-11.0f, -1.0f, 1.0f);
	glVertex3f(-10.0f, -1.0f, 1.0f);
	glVertex3f(-10.0f, -4.0f, 1.0f);
	glVertex3f(-11.0f, -4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-8.0f, -5.0f, 1.0f);
	glVertex3f(-7.0f, -5.0f, 1.0f);
	glVertex3f(-7.0f, -6.0f, 1.0f);
	glVertex3f(-8.0f, -6.0f, 1.0f);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-8.0f, -16.0f, 1.0f);
	glVertex3f(-7.0f, -16.0f, 1.0f);
	glVertex3f(-7.0f, -18.0f, 1.0f);
	glVertex3f(-8.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-9.0f, -15.0f, 1.0f);
	glVertex3f(-8.0f, -15.0f, 1.0f);
	glVertex3f(-8.0f, -16.0f, 1.0f);
	glVertex3f(-9.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-9.0f, -17.0f, 1.0f);
	glVertex3f(-8.0f, -17.0f, 1.0f);
	glVertex3f(-8.0f, -18.0f, 1.0f);
	glVertex3f(-9.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-10.0f, -15.0f, 1.0f);
	glVertex3f(-9.0f, -15.0f, 1.0f);
	glVertex3f(-9.0f, -16.0f, 1.0f);
	glVertex3f(-10.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-11.0f, -14.0f, 1.0f);
	glVertex3f(-10.0f, -14.0f, 1.0f);
	glVertex3f(-10.0f, -16.0f, 1.0f);
	glVertex3f(-11.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-11.0f, -17.0f, 1.0f);
	glVertex3f(-10.0f, -17.0f, 1.0f);
	glVertex3f(-10.0f, -18.0f, 1.0f);
	glVertex3f(-11.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-12.0f, -15.0f, 1.0f);
	glVertex3f(-11.0f, -15.0f, 1.0f);
	glVertex3f(-11.0f, -17.0f, 1.0f);
	glVertex3f(-12.0f, -17.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-8.0f, 5.0f, 1.0f);
	glVertex3f(-7.0f, 5.0f, 1.0f);
	glVertex3f(-7.0f, 4.0f, 1.0f);
	glVertex3f(-8.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-7.0f, 5.0f, 1.0f);
	glVertex3f(-6.0f, 5.0f, 1.0f);
	glVertex3f(-6.0f, 3.0f, 1.0f);
	glVertex3f(-7.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-4.0f, 5.0f, 1.0f);
	glVertex3f(-3.0f, 5.0f, 1.0f);
	glVertex3f(-3.0f, 4.0f, 1.0f);
	glVertex3f(-4.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-3.0f, 4.0f, 1.0f);
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glVertex3f(-2.0f, 3.0f, 1.0f);
	glVertex3f(-3.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-2.0f, 5.0f, 1.0f);
	glVertex3f(1.0f, 5.0f, 1.0f);
	glVertex3f(1.0f, 4.0f, 1.0f);
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-1.0f, 4.0f, 1.0f);
	glVertex3f(0.0f, 4.0f, 1.0f);
	glVertex3f(0.0f, 3.0f, 1.0f);
	glVertex3f(-1.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-8.0f, -5.0f, 1.0f);
	glVertex3f(-7.0f, -5.0f, 1.0f);
	glVertex3f(-7.0f, -6.0f, 1.0f);
	glVertex3f(-8.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-6.0f, 3.0f, 1.0f);
	glVertex3f(-5.0f, 3.0f, 1.0f);
	glVertex3f(-5.0f, 2.0f, 1.0f);
	glVertex3f(-6.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-5.0f, 2.0f, 1.0f);
	glVertex3f(-4.0f, 2.0f, 1.0f);
	glVertex3f(-4.0f, 1.0f, 1.0f);
	glVertex3f(-5.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-16.0f, 10.0f, 1.0f);
	glVertex3f(-13.0f, 10.0f, 1.0f);
	glVertex3f(-13.0f, 9.0f, 1.0f);
	glVertex3f(-16.0f, 9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-13.0f, 9.0f, 1.0f);
	glVertex3f(-11.0f, 9.0f, 1.0f);
	glVertex3f(-11.0f, 8.0f, 1.0f);
	glVertex3f(-13.0f, 8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(3.0f, 16.0f, 1.0f);
	glVertex3f(4.0f, 16.0f, 1.0f);
	glVertex3f(4.0f, 14.0f, 1.0f);
	glVertex3f(3.0f, 14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-6.0f, -6.0f, 1.0f);
	glVertex3f(-5.0f, -6.0f, 1.0f);
	glVertex3f(-5.0f, -7.0f, 1.0f);
	glVertex3f(-6.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(4.0f, 14.0f, 1.0f);
	glVertex3f(5.0f, 14.0f, 1.0f);
	glVertex3f(5.0f, 10.0f, 1.0f);
	glVertex3f(4.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(3.0f, 10.0f, 1.0f);
	glVertex3f(4.0f, 10.0f, 1.0f);
	glVertex3f(4.0f, 7.0f, 1.0f);
	glVertex3f(3.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(2.0f, 7.0f, 1.0f);
	glVertex3f(3.0f, 7.0f, 1.0f);
	glVertex3f(3.0f, 5.0f, 1.0f);
	glVertex3f(2.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(1.0f, 5.0f, 1.0f);
	glVertex3f(2.0f, 5.0f, 1.0f);
	glVertex3f(2.0f, 4.0f, 1.0f);
	glVertex3f(1.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(0.0f, 4.0f, 1.0f);
	glVertex3f(1.0f, 4.0f, 1.0f);
	glVertex3f(1.0f, 3.0f, 1.0f);
	glVertex3f(0.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-10.0f, 7.0f, 1.0f);
	glVertex3f(-9.0f, 7.0f, 1.0f);
	glVertex3f(-9.0f, 6.0f, 1.0f);
	glVertex3f(-10.0f, 6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-9.0f, 6.0f, 1.0f);
	glVertex3f(-8.0f, 6.0f, 1.0f);
	glVertex3f(-8.0f, 5.0f, 1.0f);
	glVertex3f(-9.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-8.0f, 4.0f, 1.0f);
	glVertex3f(-7.0f, 4.0f, 1.0f);
	glVertex3f(-7.0f, 2.0f, 1.0f);
	glVertex3f(-8.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-14.0f, 7.0f, 1.0f);
	glVertex3f(-12.0f, 7.0f, 1.0f);
	glVertex3f(-12.0f, 5.0f, 1.0f);
	glVertex3f(-14.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-13.0f, 5.0f, 1.0f);
	glVertex3f(-10.0f, 5.0f, 1.0f);
	glVertex3f(-10.0f, 3.0f, 1.0f);
	glVertex3f(-13.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-12.0f, 3.0f, 1.0f);
	glVertex3f(-9.0f, 3.0f, 1.0f);
	glVertex3f(-9.0f, 2.0f, 1.0f);
	glVertex3f(-12.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-11.0f, 2.0f, 1.0f);
	glVertex3f(-8.0f, 2.0f, 1.0f);
	glVertex3f(-8.0f, 1.0f, 1.0f);
	glVertex3f(-11.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-13.0f, 1.0f, 1.0f);
	glVertex3f(-11.0f, 1.0f, 1.0f);
	glVertex3f(-11.0f, 0.0f, 1.0f);
	glVertex3f(-13.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-10.0f, 1.0f, 1.0f);
	glVertex3f(-9.0f, 1.0f, 1.0f);
	glVertex3f(-9.0f, 0.0f, 1.0f);
	glVertex3f(-10.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-15.0f, -3.0f, 1.0f);
	glVertex3f(-14.0f, -3.0f, 1.0f);
	glVertex3f(-14.0f, -5.0f, 1.0f);
	glVertex3f(-15.0f, -5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-11.0f, 0.0f, 1.0f);
	glVertex3f(-9.0f, 0.0f, 1.0f);
	glVertex3f(-9.0f, -1.0f, 1.0f);
	glVertex3f(-11.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-14.0f, -6.0f, 1.0f);
	glVertex3f(-13.0f, -6.0f, 1.0f);
	glVertex3f(-13.0f, -7.0f, 1.0f);
	glVertex3f(-14.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-16.0f, -12.0f, 1.0f);
	glVertex3f(-13.0f, -12.0f, 1.0f);
	glVertex3f(-13.0f, -13.0f, 1.0f);
	glVertex3f(-16.0f, -13.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-13.0f, -10.0f, 1.0f);
	glVertex3f(-12.0f, -10.0f, 1.0f);
	glVertex3f(-12.0f, -12.0f, 1.0f);
	glVertex3f(-13.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-10.0f, -18.0f, 1.0f);
	glVertex3f(-8.0f, -18.0f, 1.0f);
	glVertex3f(-8.0f, -19.0f, 1.0f);
	glVertex3f(-10.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-6.0f, -18.0f, 1.0f);
	glVertex3f(-5.0f, -18.0f, 1.0f);
	glVertex3f(-5.0f, -19.0f, 1.0f);
	glVertex3f(-6.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-5.0f, -19.0f, 1.0f);
	glVertex3f(-4.0f, -19.0f, 1.0f);
	glVertex3f(-4.0f, -20.0f, 1.0f);
	glVertex3f(-5.0f, -20.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-4.0f, -18.0f, 1.0f);
	glVertex3f(-3.0f, -18.0f, 1.0f);
	glVertex3f(-3.0f, -19.0f, 1.0f);
	glVertex3f(-4.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-3.0f, -19.0f, 1.0f);
	glVertex3f(-2.0f, -19.0f, 1.0f);
	glVertex3f(-2.0f, -20.0f, 1.0f);
	glVertex3f(-3.0f, -20.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-2.0f, -18.0f, 1.0f);
	glVertex3f(-0.0f, -18.0f, 1.0f);
	glVertex3f(-0.0f, -19.0f, 1.0f);
	glVertex3f(-2.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(0.0f, -17.0f, 1.0f);
	glVertex3f(1.0f, -17.0f, 1.0f);
	glVertex3f(1.0f, -18.0f, 1.0f);
	glVertex3f(0.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(1.0f, -16.0f, 1.0f);
	glVertex3f(2.0f, -16.0f, 1.0f);
	glVertex3f(2.0f, -17.0f, 1.0f);
	glVertex3f(1.0f, -17.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(2.0f, -15.0f, 1.0f);
	glVertex3f(3.0f, -15.0f, 1.0f);
	glVertex3f(3.0f, -16.0f, 1.0f);
	glVertex3f(2.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-1.0f, -21.0f, 1.0f);
	glVertex3f(0.0f, -21.0f, 1.0f);
	glVertex3f(0.0f, -23.0f, 1.0f);
	glVertex3f(-1.0f, -23.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(1.0f, -23.0f, 1.0f);
	glVertex3f(4.0f, -23.0f, 1.0f);
	glVertex3f(4.0f, -24.0f, 1.0f);
	glVertex3f(1.0f, -24.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(4.0f, -22.0f, 1.0f);
	glVertex3f(5.0f, -22.0f, 1.0f);
	glVertex3f(5.0f, -23.0f, 1.0f);
	glVertex3f(4.0f, -23.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(3.0f, -19.0f, 1.0f);
	glVertex3f(4.0f, -19.0f, 1.0f);
	glVertex3f(4.0f, -21.0f, 1.0f);
	glVertex3f(3.0f, -21.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(4.0f, -16.0f, 1.0f);
	glVertex3f(5.0f, -16.0f, 1.0f);
	glVertex3f(5.0f, -19.0f, 1.0f);
	glVertex3f(4.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(6.0f, -13.0f, 1.0f);
	glVertex3f(7.0f, -13.0f, 1.0f);
	glVertex3f(7.0f, -14.0f, 1.0f);
	glVertex3f(6.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(7.0f, -9.0f, 1.0f);
	glVertex3f(8.0f, -9.0f, 1.0f);
	glVertex3f(8.0f, -11.0f, 1.0f);
	glVertex3f(7.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(8.0f, -8.0f, 1.0f);
	glVertex3f(9.0f, -8.0f, 1.0f);
	glVertex3f(9.0f, -9.0f, 1.0f);
	glVertex3f(8.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-4.0f, -11.0f, 1.0f);
	glVertex3f(-1.0f, -11.0f, 1.0f);
	glVertex3f(-1.0f, -12.0f, 1.0f);
	glVertex3f(-4.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(1.0f, -10.0f, 1.0f);
	glVertex3f(2.0f, -10.0f, 1.0f);
	glVertex3f(2.0f, -11.0f, 1.0f);
	glVertex3f(1.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(2.0f, -9.0f, 1.0f);
	glVertex3f(3.0f, -9.0f, 1.0f);
	glVertex3f(3.0f, -10.0f, 1.0f);
	glVertex3f(2.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(3.0f, -8.0f, 1.0f);
	glVertex3f(4.0f, -8.0f, 1.0f);
	glVertex3f(4.0f, -9.0f, 1.0f);
	glVertex3f(3.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-5.0f, -8.0f, 1.0f);
	glVertex3f(-2.0f, -8.0f, 1.0f);
	glVertex3f(-2.0f, -9.0f, 1.0f);
	glVertex3f(-5.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-9.0f, -2.0f, 1.0f);
	glVertex3f(-8.0f, -2.0f, 1.0f);
	glVertex3f(-8.0f, -6.0f, 1.0f);
	glVertex3f(-9.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-8.0f, -1.0f, 1.0f);
	glVertex3f(-7.0f, -1.0f, 1.0f);
	glVertex3f(-7.0f, -2.0f, 1.0f);
	glVertex3f(-8.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-8.0f, -3.0f, 1.0f);
	glVertex3f(-7.0f, -3.0f, 1.0f);
	glVertex3f(-7.0f, -4.0f, 1.0f);
	glVertex3f(-8.0f, -4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-2.0f, -3.0f, 1.0f);
	glVertex3f(-1.0f, -3.0f, 1.0f);
	glVertex3f(-1.0f, -6.0f, 1.0f);
	glVertex3f(-2.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(0.0f, -3.0f, 1.0f);
	glVertex3f(1.0f, -3.0f, 1.0f);
	glVertex3f(1.0f, -6.0f, 1.0f);
	glVertex3f(0.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-1.0f, -2.0f, 1.0f);
	glVertex3f(0.0f, -2.0f, 1.0f);
	glVertex3f(0.0f, -3.0f, 1.0f);
	glVertex3f(-1.0f, -3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-1.0f, -4.0f, 1.0f);
	glVertex3f(0.0f, -4.0f, 1.0f);
	glVertex3f(0.0f, -5.0f, 1.0f);
	glVertex3f(-1.0f, -5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(-1.0f, -6.0f, 1.0f);
	glVertex3f(0.0f, -6.0f, 1.0f);
	glVertex3f(0.0f, -7.0f, 1.0f);
	glVertex3f(-1.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(4.0f, -4.0f, 1.0f);
	glVertex3f(5.0f, -4.0f, 1.0f);
	glVertex3f(5.0f, -7.0f, 1.0f);
	glVertex3f(4.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(5.0f, -4.0f, 1.0f);
	glVertex3f(6.0f, -4.0f, 1.0f);
	glVertex3f(6.0f, -5.0f, 1.0f);
	glVertex3f(5.0f, -5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(6.0f, -5.0f, 1.0f);
	glVertex3f(7.0f, -5.0f, 1.0f);
	glVertex3f(7.0f, -6.0f, 1.0f);
	glVertex3f(6.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(5.0f, -2.0f, 1.0f);
	glVertex3f(7.0f, -2.0f, 1.0f);
	glVertex3f(7.0f, -3.0f, 1.0f);
	glVertex3f(5.0f, -3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(7.0f, -1.0f, 1.0f);
	glVertex3f(9.0f, -1.0f, 1.0f);
	glVertex3f(9.0f, -2.0f, 1.0f);
	glVertex3f(7.0f, -2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(9.0f, 0.0f, 1.0f);
	glVertex3f(11.0f, 0.0f, 1.0f);
	glVertex3f(11.0f, -1.0f, 1.0f);
	glVertex3f(9.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(11.0f, 0.0f, 1.0f);
	glVertex3f(12.0f, 0.0f, 1.0f);
	glVertex3f(12.0f, 1.0f, 1.0f);
	glVertex3f(11.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(12.0f, 1.0f, 1.0f);
	glVertex3f(13.0f, 1.0f, 1.0f);
	glVertex3f(13.0f, 2.0f, 1.0f);
	glVertex3f(12.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(13.0f, 4.0f, 1.0f);
	glVertex3f(14.0f, 4.0f, 1.0f);
	glVertex3f(14.0f, 3.0f, 1.0f);
	glVertex3f(13.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(14.0f, 5.0f, 1.0f);
	glVertex3f(15.0f, 5.0f, 1.0f);
	glVertex3f(15.0f, 4.0f, 1.0f);
	glVertex3f(14.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(15.0f, 6.0f, 1.0f);
	glVertex3f(16.0f, 6.0f, 1.0f);
	glVertex3f(16.0f, 5.0f, 1.0f);
	glVertex3f(15.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(14.0f, 7.0f, 1.0f);
	glVertex3f(15.0f, 7.0f, 1.0f);
	glVertex3f(15.0f, 6.0f, 1.0f);
	glVertex3f(14.0f, 6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(4.0f, 1.0f, 1.0f);
	glVertex3f(6.0f, 1.0f, 1.0f);
	glVertex3f(6.0f, -1.0f, 1.0f);
	glVertex3f(4.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(6.0f, 2.0f, 1.0f);
	glVertex3f(8.0f, 2.0f, 1.0f);
	glVertex3f(8.0f, 0.0f, 1.0f);
	glVertex3f(6.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(7.0f, 3.0f, 1.0f);
	glVertex3f(10.0f, 3.0f, 1.0f);
	glVertex3f(10.0f, 1.0f, 1.0f);
	glVertex3f(7.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(9.0f, 4.0f, 1.0f);
	glVertex3f(11.0f, 4.0f, 1.0f);
	glVertex3f(11.0f, 2.0f, 1.0f);
	glVertex3f(9.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(11.0f, 5.0f, 1.0f);
	glVertex3f(12.0f, 5.0f, 1.0f);
	glVertex3f(12.0f, 3.0f, 1.0f);
	glVertex3f(11.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);//negro
	glVertex3f(12.0f, 5.0f, 1.0f);
	glVertex3f(13.0f, 5.0f, 1.0f);
	glVertex3f(13.0f, 4.0f, 1.0f);
	glVertex3f(12.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-5.0f, 14.0f, 1.0f);
	glVertex3f(-4.0f, 14.0f, 1.0f);
	glVertex3f(-4.0f, 13.0f, 1.0f);
	glVertex3f(-5.0f, 13.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-3.0f, 13.0f, 1.0f);
	glVertex3f(-2.0f, 13.0f, 1.0f);
	glVertex3f(-2.0f, 12.0f, 1.0f);
	glVertex3f(-3.0f, 12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-1.0f, 12.0f, 1.0f);
	glVertex3f(0.0f, 12.0f, 1.0f);
	glVertex3f(0.0f, 11.0f, 1.0f);
	glVertex3f(-1.0f, 11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(2.0f, 12.0f, 1.0f);
	glVertex3f(3.0f, 12.0f, 1.0f);
	glVertex3f(3.0f, 10.0f, 1.0f);
	glVertex3f(2.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(3.0f, 14.0f, 1.0f);
	glVertex3f(4.0f, 14.0f, 1.0f);
	glVertex3f(4.0f, 11.0f, 1.0f);
	glVertex3f(3.0f, 11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-12.0f, -8.0f, 1.0f);
	glVertex3f(-11.0f, -8.0f, 1.0f);
	glVertex3f(-11.0f, -9.0f, 1.0f);
	glVertex3f(-12.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-12.0f, -11.0f, 1.0f);
	glVertex3f(-11.0f, -11.0f, 1.0f);
	glVertex3f(-11.0f, -12.0f, 1.0f);
	glVertex3f(-12.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-11.0f, -13.0f, 1.0f);
	glVertex3f(-10.0f, -13.0f, 1.0f);
	glVertex3f(-10.0f, -14.0f, 1.0f);
	glVertex3f(-11.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-5.0f, -17.0f, 1.0f);
	glVertex3f(-4.0f, -17.0f, 1.0f);
	glVertex3f(-4.0f, -19.0f, 1.0f);
	glVertex3f(-5.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-3.0f, -18.0f, 1.0f);
	glVertex3f(-2.0f, -18.0f, 1.0f);
	glVertex3f(-2.0f, -19.0f, 1.0f);
	glVertex3f(-3.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-2.0f, -17.0f, 1.0f);
	glVertex3f(-1.0f, -17.0f, 1.0f);
	glVertex3f(-1.0f, -18.0f, 1.0f);
	glVertex3f(-2.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-1.0f, -16.0f, 1.0f);
	glVertex3f(0.0f, -16.0f, 1.0f);
	glVertex3f(0.0f, -18.0f, 1.0f);
	glVertex3f(-1.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(0.0f, -11.0f, 1.0f);
	glVertex3f(1.0f, -11.0f, 1.0f);
	glVertex3f(1.0f, -17.0f, 1.0f);
	glVertex3f(0.0f, -17.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(1.0f, -11.0f, 1.0f);
	glVertex3f(2.0f, -11.0f, 1.0f);
	glVertex3f(2.0f, -16.0f, 1.0f);
	glVertex3f(1.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(2.0f, -12.0f, 1.0f);
	glVertex3f(3.0f, -12.0f, 1.0f);
	glVertex3f(3.0f, -14.0f, 1.0f);
	glVertex3f(2.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(0.0f, -11.0f, 1.0f);
	glVertex3f(-1.0f, -11.0f, 1.0f);
	glVertex3f(-1.0f, -15.0f, 1.0f);
	glVertex3f(0.0f, -15.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-2.0f, -12.0f, 1.0f);
	glVertex3f(-1.0f, -12.0f, 1.0f);
	glVertex3f(-1.0f, -15.0f, 1.0f);
	glVertex3f(-2.0f, -15.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-3.0f, -12.0f, 1.0f);
	glVertex3f(-2.0f, -12.0f, 1.0f);
	glVertex3f(-2.0f, -14.0f, 1.0f);
	glVertex3f(-3.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(-4.0f, -12.0f, 1.0f);
	glVertex3f(-3.0f, -12.0f, 1.0f);
	glVertex3f(-3.0f, -13.0f, 1.0f);
	glVertex3f(-4.0f, -13.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(3.0f, -9.0f, 1.0f);
	glVertex3f(4.0f, -9.0f, 1.0f);
	glVertex3f(4.0f, -12.0f, 1.0f);
	glVertex3f(3.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(3.0f, -14.0f, 1.0f);
	glVertex3f(4.0f, -14.0f, 1.0f);
	glVertex3f(4.0f, -16.0f, 1.0f);
	glVertex3f(3.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(4.0f, -7.0f, 1.0f);
	glVertex3f(5.0f, -7.0f, 1.0f);
	glVertex3f(5.0f, -15.0f, 1.0f);
	glVertex3f(4.0f, -15.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(5.0f, -5.0f, 1.0f);
	glVertex3f(6.0f, -5.0f, 1.0f);
	glVertex3f(6.0f, -14.0f, 1.0f);
	glVertex3f(5.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8f, 0.8f, 0.8f);//gris claro
	glVertex3f(6.0f, -8.0f, 1.0f);
	glVertex3f(7.0f, -8.0f, 1.0f);
	glVertex3f(7.0f, -12.0f, 1.0f);
	glVertex3f(6.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.6f, 0.6f);//gris oscuro
	glVertex3f(2.0f, -10.0f, 1.0f);
	glVertex3f(3.0f, -10.0f, 1.0f);
	glVertex3f(3.0f, -12.0f, 1.0f);
	glVertex3f(2.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.6f, 0.6f);//gris oscuro
	glVertex3f(2.0f, -14.0f, 1.0f);
	glVertex3f(3.0f, -14.0f, 1.0f);
	glVertex3f(3.0f, -15.0f, 1.0f);
	glVertex3f(2.0f, -15.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.6f, 0.6f);//gris oscuro
	glVertex3f(3.0f, -12.0f, 1.0f);
	glVertex3f(4.0f, -12.0f, 1.0f);
	glVertex3f(4.0f, -14.0f, 1.0f);
	glVertex3f(3.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.6f, 0.6f);//gris oscuro
	glVertex3f(-9.0f, -11.0f, 1.0f);
	glVertex3f(-8.0f, -11.0f, 1.0f);
	glVertex3f(-8.0f, -13.0f, 1.0f);
	glVertex3f(-9.0f, -13.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.6f, 0.6f);//gris oscuro
	glVertex3f(-10.0f, -13.0f, 1.0f);
	glVertex3f(-9.0f, -13.0f, 1.0f);
	glVertex3f(-9.0f, -14.0f, 1.0f);
	glVertex3f(-10.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-5.0f, 15.0f, 1.0f);
	glVertex3f(-4.0f, 15.0f, 1.0f);
	glVertex3f(-4.0f, 14.0f, 1.0f);
	glVertex3f(-5.0f, 14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-8.0f, 6.0f, 1.0f);
	glVertex3f(2.0f, 6.0f, 1.0f);
	glVertex3f(2.0f, 5.0f, 1.0f);
	glVertex3f(-8.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-9.0f, 8.0f, 1.0f);
	glVertex3f(-3.0f, 8.0f, 1.0f);
	glVertex3f(-3.0f, 7.0f, 1.0f);
	glVertex3f(-9.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(0.0f, 8.0f, 1.0f);
	glVertex3f(3.0f, 8.0f, 1.0f);
	glVertex3f(3.0f, 7.0f, 1.0f);
	glVertex3f(0.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-9.0f, 7.0f, 1.0f);
	glVertex3f(2.0f, 7.0f, 1.0f);
	glVertex3f(2.0f, 6.0f, 1.0f);
	glVertex3f(-9.0f, 6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-9.0f, 9.0f, 1.0f);
	glVertex3f(-5.0f, 9.0f, 1.0f);
	glVertex3f(-5.0f, 8.0f, 1.0f);
	glVertex3f(-9.0f, 8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.6f, 0.4f, 0.f);//cafe medium
	glVertex3f(-9.0f, 10.0f, 1.0f);
	glVertex3f(-6.0f, 10.0f, 1.0f);
	glVertex3f(-6.0f, 9.0f, 1.0f);
	glVertex3f(-9.0f, 9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-8.0f, 12.0f, 1.0f);
	glVertex3f(-7.0f, 12.0f, 1.0f);
	glVertex3f(-7.0f, 10.0f, 1.0f);
	glVertex3f(-8.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(3.0f, 11.0f, 1.0f);
	glVertex3f(4.0f, 11.0f, 1.0f);
	glVertex3f(4.0f, 10.0f, 1.0f);
	glVertex3f(3.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-7.0f, 14.0f, 1.0f);
	glVertex3f(-6.0f, 14.0f, 1.0f);
	glVertex3f(-6.0f, 13.0f, 1.0f);
	glVertex3f(-7.0f, 13.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-8.0f, 13.0f, 1.0f);
	glVertex3f(-7.0f, 13.0f, 1.0f);
	glVertex3f(-7.0f, 12.0f, 1.0f);
	glVertex3f(-8.0f, 12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-9.0f, 12.0f, 1.0f);
	glVertex3f(-8.0f, 12.0f, 1.0f);
	glVertex3f(-8.0f, 10.0f, 1.0f);
	glVertex3f(-9.0f, 10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-10.0f, 10.0f, 1.0f);
	glVertex3f(-9.0f, 10.0f, 1.0f);
	glVertex3f(-9.0f, 7.0f, 1.0f);
	glVertex3f(-10.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-11.0f, 8.0f, 1.0f);
	glVertex3f(-10.0f, 8.0f, 1.0f);
	glVertex3f(-10.0f, 7.0f, 1.0f);
	glVertex3f(-11.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-15.0f, 8.0f, 1.0f);
	glVertex3f(-13.0f, 8.0f, 1.0f);
	glVertex3f(-13.0f, 7.0f, 1.0f);
	glVertex3f(-15.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-17.0f, 9.0f, 1.0f);
	glVertex3f(-16.0f, 9.0f, 1.0f);
	glVertex3f(-16.0f, 7.0f, 1.0f);
	glVertex3f(-17.0f, 7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-16.0f, 7.0f, 1.0f);
	glVertex3f(-15.0f, 7.0f, 1.0f);
	glVertex3f(-15.0f, 4.0f, 1.0f);
	glVertex3f(-16.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-15.0f, 4.0f, 1.0f);
	glVertex3f(-14.0f, 4.0f, 1.0f);
	glVertex3f(-14.0f, 2.0f, 1.0f);
	glVertex3f(-15.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-14.0f, 2.0f, 1.0f);
	glVertex3f(-13.0f, 2.0f, 1.0f);
	glVertex3f(-13.0f, 1.0f, 1.0f);
	glVertex3f(-14.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-13.0f, 0.0f, 1.0f);
	glVertex3f(-12.0f, 0.0f, 1.0f);
	glVertex3f(-12.0f, -1.0f, 1.0f);
	glVertex3f(-13.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-14.0f, -1.0f, 1.0f);
	glVertex3f(-13.0f, -1.0f, 1.0f);
	glVertex3f(-13.0f, -3.0f, 1.0f);
	glVertex3f(-14.0f, -3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-14.0f, -5.0f, 1.0f);
	glVertex3f(-13.0f, -5.0f, 1.0f);
	glVertex3f(-13.0f, -6.0f, 1.0f);
	glVertex3f(-14.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-15.0f, -7.0f, 1.0f);
	glVertex3f(-14.0f, -7.0f, 1.0f);
	glVertex3f(-14.0f, -8.0f, 1.0f);
	glVertex3f(-15.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-16.0f, -8.0f, 1.0f);
	glVertex3f(-15.0f, -8.0f, 1.0f);
	glVertex3f(-15.0f, -10.0f, 1.0f);
	glVertex3f(-16.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-17.0f, -10.0f, 1.0f);
	glVertex3f(-16.0f, -10.0f, 1.0f);
	glVertex3f(-16.0f, -12.0f, 1.0f);
	glVertex3f(-17.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-15.0f, -11.0f, 1.0f);
	glVertex3f(-14.0f, -11.0f, 1.0f);
	glVertex3f(-14.0f, -12.0f, 1.0f);
	glVertex3f(-15.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-12.0f, -12.0f, 1.0f);
	glVertex3f(-11.0f, -12.0f, 1.0f);
	glVertex3f(-11.0f, -14.0f, 1.0f);
	glVertex3f(-12.0f, -14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-12.0f, -17.0f, 1.0f);
	glVertex3f(-11.0f, -17.0f, 1.0f);
	glVertex3f(-11.0f, -18.0f, 1.0f);
	glVertex3f(-12.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-11.0f, -18.0f, 1.0f);
	glVertex3f(-10.0f, -18.0f, 1.0f);
	glVertex3f(-10.0f, -19.0f, 1.0f);
	glVertex3f(-11.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-10.0f, -17.0f, 1.0f);
	glVertex3f(-9.0f, -17.0f, 1.0f);
	glVertex3f(-9.0f, -18.0f, 1.0f);
	glVertex3f(-10.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-8.0f, -18.0f, 1.0f);
	glVertex3f(-7.0f, -18.0f, 1.0f);
	glVertex3f(-7.0f, -19.0f, 1.0f);
	glVertex3f(-8.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-7.0f, -16.0f, 1.0f);
	glVertex3f(-6.0f, -16.0f, 1.0f);
	glVertex3f(-6.0f, -18.0f, 1.0f);
	glVertex3f(-7.0f, -18.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-8.0f, -15.0f, 1.0f);
	glVertex3f(-7.0f, -15.0f, 1.0f);
	glVertex3f(-7.0f, -16.0f, 1.0f);
	glVertex3f(-8.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-10.0f, -14.0f, 1.0f);
	glVertex3f(-8.0f, -14.0f, 1.0f);
	glVertex3f(-8.0f, -15.0f, 1.0f);
	glVertex3f(-10.0f, -15.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-13.0f, -7.0f, 1.0f);
	glVertex3f(-12.0f, -7.0f, 1.0f);
	glVertex3f(-12.0f, -9.0f, 1.0f);
	glVertex3f(-13.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-12.0f, -6.0f, 1.0f);
	glVertex3f(-11.0f, -6.0f, 1.0f);
	glVertex3f(-11.0f, -7.0f, 1.0f);
	glVertex3f(-12.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-11.0f, -4.0f, 1.0f);
	glVertex3f(-10.0f, -4.0f, 1.0f);
	glVertex3f(-10.0f, -7.0f, 1.0f);
	glVertex3f(-11.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-10.0f, -1.0f, 1.0f);
	glVertex3f(-9.0f, -1.0f, 1.0f);
	glVertex3f(-9.0f, -4.0f, 1.0f);
	glVertex3f(-10.0f, -4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-11.0f, 1.0f, 1.0f);
	glVertex3f(-10.0f, 1.0f, 1.0f);
	glVertex3f(-10.0f, 0.0f, 1.0f);
	glVertex3f(-11.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-12.0f, 2.0f, 1.0f);
	glVertex3f(-11.0f, 2.0f, 1.0f);
	glVertex3f(-11.0f, 1.0f, 1.0f);
	glVertex3f(-12.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-13.0f, 3.0f, 1.0f);
	glVertex3f(-12.0f, 3.0f, 1.0f);
	glVertex3f(-12.0f, 2.0f, 1.0f);
	glVertex3f(-13.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-14.0f, 4.0f, 1.0f);
	glVertex3f(-13.0f, 4.0f, 1.0f);
	glVertex3f(-13.0f, 3.0f, 1.0f);
	glVertex3f(-14.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-12.0f, 6.0f, 1.0f);
	glVertex3f(-11.0f, 6.0f, 1.0f);
	glVertex3f(-11.0f, 5.0f, 1.0f);
	glVertex3f(-12.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-10.0f, 4.0f, 1.0f);
	glVertex3f(-9.0f, 4.0f, 1.0f);
	glVertex3f(-9.0f, 3.0f, 1.0f);
	glVertex3f(-10.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-9.0f, 5.0f, 1.0f);
	glVertex3f(-8.0f, 5.0f, 1.0f);
	glVertex3f(-8.0f, 4.0f, 1.0f);
	glVertex3f(-9.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-9.0f, 1.0f, 1.0f);
	glVertex3f(-8.0f, 1.0f, 1.0f);
	glVertex3f(-8.0f, 0.0f, 1.0f);
	glVertex3f(-9.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-8.0f, 2.0f, 1.0f);
	glVertex3f(-7.0f, 2.0f, 1.0f);
	glVertex3f(-7.0f, 1.0f, 1.0f);
	glVertex3f(-8.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-7.0f, 3.0f, 1.0f);
	glVertex3f(-6.0f, 3.0f, 1.0f);
	glVertex3f(-6.0f, 2.0f, 1.0f);
	glVertex3f(-7.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-6.0f, 5.0f, 1.0f);
	glVertex3f(-5.0f, 5.0f, 1.0f);
	glVertex3f(-5.0f, 3.0f, 1.0f);
	glVertex3f(-6.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-5.0f, 5.0f, 1.0f);
	glVertex3f(-4.0f, 5.0f, 1.0f);
	glVertex3f(-4.0f, 4.0f, 1.0f);
	glVertex3f(-5.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-4.0f, 4.0f, 1.0f);
	glVertex3f(-3.0f, 4.0f, 1.0f);
	glVertex3f(-3.0f, 3.0f, 1.0f);
	glVertex3f(-4.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-14.0f, 5.0f, 1.0f);
	glVertex3f(-13.0f, 5.0f, 1.0f);
	glVertex3f(-13.0f, 4.0f, 1.0f);
	glVertex3f(-14.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-3.0f, 5.0f, 1.0f);
	glVertex3f(-2.0f, 5.0f, 1.0f);
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glVertex3f(-3.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-2.0f, 4.0f, 1.0f);
	glVertex3f(-1.0f, 4.0f, 1.0f);
	glVertex3f(-1.0f, 3.0f, 1.0f);
	glVertex3f(-2.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-1.0f, 3.0f, 1.0f);
	glVertex3f(0.0f, 3.0f, 1.0f);
	glVertex3f(0.0f, 2.0f, 1.0f);
	glVertex3f(-1.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(0.0f, 2.0f, 1.0f);
	glVertex3f(2.0f, 2.0f, 1.0f);
	glVertex3f(2.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(2.0f, 1.0f, 1.0f);
	glVertex3f(3.0f, 1.0f, 1.0f);
	glVertex3f(3.0f, 0.0f, 1.0f);
	glVertex3f(2.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(5.0f, 2.0f, 1.0f);
	glVertex3f(6.0f, 2.0f, 1.0f);
	glVertex3f(6.0f, 1.0f, 1.0f);
	glVertex3f(5.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(6.0f, 5.0f, 1.0f);
	glVertex3f(7.0f, 5.0f, 1.0f);
	glVertex3f(7.0f, 4.0f, 1.0f);
	glVertex3f(6.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(6.0f, 3.0f, 1.0f);
	glVertex3f(7.0f, 3.0f, 1.0f);
	glVertex3f(7.0f, 2.0f, 1.0f);
	glVertex3f(6.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(6.0f, 0.0f, 1.0f);
	glVertex3f(7.0f, 0.0f, 1.0f);
	glVertex3f(7.0f, -1.0f, 1.0f);
	glVertex3f(6.0f, -1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(8.0f, 6.0f, 1.0f);
	glVertex3f(9.0f, 6.0f, 1.0f);
	glVertex3f(9.0f, 5.0f, 1.0f);
	glVertex3f(8.0f, 5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(8.0f, 4.0f, 1.0f);
	glVertex3f(9.0f, 4.0f, 1.0f);
	glVertex3f(9.0f, 3.0f, 1.0f);
	glVertex3f(8.0f, 3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(8.0f, 1.0f, 1.0f);
	glVertex3f(9.0f, 1.0f, 1.0f);
	glVertex3f(9.0f, 0.0f, 1.0f);
	glVertex3f(8.0f, 0.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(10.0f, 5.0f, 1.0f);
	glVertex3f(11.0f, 5.0f, 1.0f);
	glVertex3f(11.0f, 4.0f, 1.0f);
	glVertex3f(10.0f, 4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(10.0f, 2.0f, 1.0f);
	glVertex3f(11.0f, 2.0f, 1.0f);
	glVertex3f(11.0f, 1.0f, 1.0f);
	glVertex3f(10.0f, 1.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(10.0f, 7.0f, 1.0f);
	glVertex3f(14.0f, 7.0f, 1.0f);
	glVertex3f(14.0f, 6.0f, 1.0f);
	glVertex3f(10.0f, 6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(11.0f, 3.0f, 1.0f);
	glVertex3f(13.0f, 3.0f, 1.0f);
	glVertex3f(13.0f, 2.0f, 1.0f);
	glVertex3f(11.0f, 2.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-8.0f, -4.0f, 1.0f);
	glVertex3f(-7.0f, -4.0f, 1.0f);
	glVertex3f(-7.0f, -5.0f, 1.0f);
	glVertex3f(-8.0f, -5.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-7.0f, -7.0f, 1.0f);
	glVertex3f(-6.0f, -7.0f, 1.0f);
	glVertex3f(-6.0f, -8.0f, 1.0f);
	glVertex3f(-7.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-6.0f, -8.0f, 1.0f);
	glVertex3f(-5.0f, -8.0f, 1.0f);
	glVertex3f(-5.0f, -9.0f, 1.0f);
	glVertex3f(-6.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-2.0f, -8.0f, 1.0f);
	glVertex3f(-1.0f, -8.0f, 1.0f);
	glVertex3f(-1.0f, -9.0f, 1.0f);
	glVertex3f(-2.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-1.0f, -5.0f, 1.0f);
	glVertex3f(0.0f, -5.0f, 1.0f);
	glVertex3f(0.0f, -6.0f, 1.0f);
	glVertex3f(-1.0f, -6.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-10.0f, -8.0f, 1.0f);
	glVertex3f(-9.0f, -8.0f, 1.0f);
	glVertex3f(-9.0f, -9.0f, 1.0f);
	glVertex3f(-10.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-9.0f, -9.0f, 1.0f);
	glVertex3f(-8.0f, -9.0f, 1.0f);
	glVertex3f(-8.0f, -10.0f, 1.0f);
	glVertex3f(-9.0f, -10.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-8.0f, -10.0f, 1.0f);
	glVertex3f(-6.0f, -10.0f, 1.0f);
	glVertex3f(-6.0f, -11.0f, 1.0f);
	glVertex3f(-8.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-6.0f, -11.0f, 1.0f);
	glVertex3f(-4.0f, -11.0f, 1.0f);
	glVertex3f(-4.0f, -12.0f, 1.0f);
	glVertex3f(-6.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(0.0f, -10.0f, 1.0f);
	glVertex3f(1.0f, -10.0f, 1.0f);
	glVertex3f(1.0f, -11.0f, 1.0f);
	glVertex3f(0.0f, -11.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(3.0f, -2.0f, 1.0f);
	glVertex3f(4.0f, -2.0f, 1.0f);
	glVertex3f(4.0f, -3.0f, 1.0f);
	glVertex3f(3.0f, -3.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(4.0f, -2.0f, 1.0f);
	glVertex3f(5.0f, -2.0f, 1.0f);
	glVertex3f(5.0f, -4.0f, 1.0f);
	glVertex3f(4.0f, -4.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(7.0f, -6.0f, 1.0f);
	glVertex3f(8.0f, -6.0f, 1.0f);
	glVertex3f(8.0f, -7.0f, 1.0f);
	glVertex3f(7.0f, -7.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(7.0f, -8.0f, 1.0f);
	glVertex3f(8.0f, -8.0f, 1.0f);
	glVertex3f(8.0f, -9.0f, 1.0f);
	glVertex3f(7.0f, -9.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(7.0f, -11.0f, 1.0f);
	glVertex3f(8.0f, -11.0f, 1.0f);
	glVertex3f(8.0f, -12.0f, 1.0f);
	glVertex3f(7.0f, -12.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(8.0f, -7.0f, 1.0f);
	glVertex3f(9.0f, -7.0f, 1.0f);
	glVertex3f(9.0f, -8.0f, 1.0f);
	glVertex3f(8.0f, -8.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(6.0f, -12.0f, 1.0f);
	glVertex3f(7.0f, -12.0f, 1.0f);
	glVertex3f(7.0f, -13.0f, 1.0f);
	glVertex3f(6.0f, -13.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(5.0f, -14.0f, 1.0f);
	glVertex3f(6.0f, -14.0f, 1.0f);
	glVertex3f(6.0f, -16.0f, 1.0f);
	glVertex3f(5.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(4.0f, -15.0f, 1.0f);
	glVertex3f(5.0f, -15.0f, 1.0f);
	glVertex3f(5.0f, -16.0f, 1.0f);
	glVertex3f(4.0f, -16.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(4.0f, -21.0f, 1.0f);
	glVertex3f(5.0f, -21.0f, 1.0f);
	glVertex3f(5.0f, -22.0f, 1.0f);
	glVertex3f(4.0f, -22.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(3.0f, -16.0f, 1.0f);
	glVertex3f(4.0f, -16.0f, 1.0f);
	glVertex3f(4.0f, -17.0f, 1.0f);
	glVertex3f(3.0f, -17.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(3.0f, -22.0f, 1.0f);
	glVertex3f(4.0f, -22.0f, 1.0f);
	glVertex3f(4.0f, -23.0f, 1.0f);
	glVertex3f(3.0f, -23.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(1.0f, -22.0f, 1.0f);
	glVertex3f(2.0f, -22.0f, 1.0f);
	glVertex3f(2.0f, -23.0f, 1.0f);
	glVertex3f(1.0f, -23.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(0.0f, -18.0f, 1.0f);
	glVertex3f(1.0f, -18.0f, 1.0f);
	glVertex3f(1.0f, -19.0f, 1.0f);
	glVertex3f(0.0f, -19.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(0.0f, -23.0f, 1.0f);
	glVertex3f(1.0f, -23.0f, 1.0f);
	glVertex3f(1.0f, -24.0f, 1.0f);
	glVertex3f(0.0f, -24.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-1.0f, -19.0f, 1.0f);
	glVertex3f(0.0f, -19.0f, 1.0f);
	glVertex3f(0.0f, -21.0f, 1.0f);
	glVertex3f(-1.0f, -21.0f, 1.0f);
	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-6.0f, 15.0f, 1.0f);
	glVertex3f(-5.0f, 15.0f, 1.0f);
	glVertex3f(-5.0f, 14.0f, 1.0f);
	glVertex3f(-6.0f, 14.0f, 1.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.5f, 0.3f, 0.0f);//cafe
	glVertex3f(-7.0f, -7.0f, 1.0f);
	glVertex3f(-6.0f, -7.0f, 1.0f);
	glVertex3f(-6.0f, -8.0f, 1.0f);
	glVertex3f(-7.0f, -8.0f, 1.0f);
	glEnd();

	

	glFlush();
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-25, 25, -30, 30, -25, 25);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(800, 800);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 2"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutMainLoop();          // 

	return 0;
}