
//semestre 2019-2
//ramirez verduzco Lizet
//Grupo 02
//Visual Studio 2017
//Practica 3
//En este ejercicio se modificó la función prisma con valores flotantes , además de conservar las teclas 
//w,a,s,d,q,y e utilizadas en la practica de laboratorio

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL(GLvoid)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {
				{0.8 ,-0.5, 0.3},    //Coordenadas Vértice 0 V0
				{-0.8 ,-0.5, 0.3},    //Coordenadas Vértice 1 V1
				{-0.8 ,-0.5, -0.3},    //Coordenadas Vértice 2 V2
				{0.8 ,-0.5, -0.3},    //Coordenadas Vértice 3 V3
				{0.8 ,0.5, 0.3},    //Coordenadas Vértice 4 V4
				{0.8 ,0.5, -0.3},    //Coordenadas Vértice 5 V5
				{-0.8 ,0.5, -0.3},    //Coordenadas Vértice 6 V6
				{-0.8 ,0.5, 0.3},    //Coordenadas Vértice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0, 0.0, 1.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0, 1.0, 1.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.4, 0.2, 0.6);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.8, 0.2, 0.4);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	//Poner Código Aquí.

	glTranslatef(transX, transY, transZ); //detecta cuando se oprime una tecla y usa funcion de translacion para manipular prisma
	glRotatef(45, angleX, angleY, angleZ);//rota 
	prisma();

	//primera linea

	glTranslatef(0.0, 1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	//segunda
	glTranslatef(1.0, 14.0, 0.0);
	prisma();


	glTranslatef(0.0, -1.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	glColor3f(1.0, 1.0, 1.0);

	prisma();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();


	//tercera

	glTranslatef(1.0, 14.0, 0.0);
	prisma();

	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	
	//cuarta
	glTranslatef(1.0, 15.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glColor3f(1.0, 1.0, 1.0);
	glTranslatef(0.0, -1.0, 0.0);
	prisma();


	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	

	//quinta
	glTranslatef(1.0, 15.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	

	//sexta
	glTranslatef(1.0, 17.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	
	//setpima
	glTranslatef(1.0, 18.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	//octava
	glTranslatef(1.0, 18.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	
	//9
	glTranslatef(1.0, 16.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	
	//10
	glTranslatef(1.0, 16.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	
	//11
	glTranslatef(1.0, 16.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	
	//12
	glTranslatef(1.0, 18.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	//13
	glTranslatef(1.0, 17.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	//14
	glTranslatef(1.0, 16.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	
	//15
	glTranslatef(1.0, 13.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	
	//16
	glTranslatef(1.0, 12.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	//primera linea

	glTranslatef(1.0, 9.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();
	glTranslatef(0.0, -1.0, 0.0);
	prisma();

	glutSwapBuffers();
	//glFlush();
	// Swap The Buffers
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

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.1,20);	//solo en 2d
	glFrustum(-0.1, 0.4, -0.3, 0.2, 0.1, 50.0); //con volumen
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 'a':
	case 'A':
		transX -= 0.2f;
		break;
	case 'd':
	case 'D':
		transX += 0.2f;
		break;

	case 'q':
	case 'Q':
		transY += 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;

	case 'e':
	case 'E':
		transY -= 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;


	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
		//glutFullScreen ( ); // Full Screen Mode
		//break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
		//glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
		//break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	//glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Ejercicio en casa 3"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}