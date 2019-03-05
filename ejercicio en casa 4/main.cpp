
/*

Ramírez Verduzco lizet

Semestre 2019-2

Visual Studio 2017

Grupo 02

Práctica en casa #4

Programa que muestra una robot construido con lo visto en la práctica 4, que cuenta con una cabeza, cuello y demás partes las cuales
fueron construidas modificando los tamaños de los prismas

*/

#include "Main.h"





int screenW = 0.0;

int screenH = 0.0;



float angleX = 0.0f;

float angleY = 0.0f;

float angleZ = 0.0f;

float transX = 0.0f;

float transY = 0.0f;

float transZ = -5.0f;





void InitGL(void)     // Inicializamos parametros

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



void prisma(float x, float y, float z)

{

	GLfloat vertice[8][3] = {

				{x/2 ,-y/2, 0.5},    //Coordenadas Vértice 0 V0

				{-x / 2 ,-y / 2, z/2},    //Coordenadas Vértice 1 V1

				{-x / 2 ,-y / 2, -z / 2},    //Coordenadas Vértice 2 V2

				{x / 2 ,-y / 2, -z / 2},    //Coordenadas Vértice 3 V3

				{x / 2 ,y / 2, z / 2},    //Coordenadas Vértice 4 V4

				{x / 2 ,y / 2, -z / 2},    //Coordenadas Vértice 5 V5

				{-x / 2 ,y / 2, -z / 2},    //Coordenadas Vértice 6 V6

				{-x / 2 ,y / 2, z / 2},    //Coordenadas Vértice 7 V7

	};



	glBegin(GL_POLYGON);	//Front

	//glColor3f(1.0, 0.0, 0.0);//rojo

	glVertex3fv(vertice[0]);

	glVertex3fv(vertice[4]);

	glVertex3fv(vertice[7]);

	glVertex3fv(vertice[1]);

	glEnd();



	glBegin(GL_POLYGON);	//Right

	//glColor3f(1.0, 1.0, 0.3); //amarillo

	glVertex3fv(vertice[0]);

	glVertex3fv(vertice[3]);

	glVertex3fv(vertice[5]);

	glVertex3fv(vertice[4]);

	glEnd();



	glBegin(GL_POLYGON);	//Back

	//glColor3f(0.0, 0.0, 1.0);//azul

	glVertex3fv(vertice[6]);

	glVertex3fv(vertice[5]);

	glVertex3fv(vertice[3]);

	glVertex3fv(vertice[2]);

	glEnd();



	glBegin(GL_POLYGON);  //Left

	//glColor3f(1.0, 0.0, 0.8);//magenta

	glVertex3fv(vertice[1]);

	glVertex3fv(vertice[7]);

	glVertex3fv(vertice[6]);

	glVertex3fv(vertice[2]);

	glEnd();



	glBegin(GL_POLYGON);  //Bottom

	//glColor3f(0.2, 1.0, 1.0);//cian 

	glVertex3fv(vertice[0]);

	glVertex3fv(vertice[1]);

	glVertex3fv(vertice[2]);

	glVertex3fv(vertice[3]);

	glEnd();



	glBegin(GL_POLYGON);  //Top

	//glColor3f(0.0, 1.0, 0.0);//verde

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
	glTranslatef(transX, transY, transZ);
	glRotatef(angleX, 0.0, 1.0, 0.0);
	//cabeza
	glColor3f(1.0, 0.0, 0.0);
	prisma(1, 1, 1);

	//cuello
	glTranslatef(0.0, -0.6, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.8, 0.2, 1);

	//cuerpo
	glTranslatef(0.0, -1.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(2.0, 2.0, 1);

	//hombro izquierdo
	glTranslatef(-1.1, 0.7, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.2, 0.5, 1);

	//hombro derecho
	glTranslatef(2.2, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.2, 0.5, 1);

	//brazo izquierdo
	glTranslatef(-2.8, 0.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(1.0, 0.5, 1);

	//antebrazo izquierdo
	glTranslatef(-0.9, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.8, 0.5, 1);

	//mano izquierda
	glTranslatef(-0.5, 0.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(0.2, 0.6, 1);

	//brazo derecho
	glTranslatef(4.8, 0.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(1.0, 0.5, 1);

	//antebrazo derecho
	glTranslatef(0.6, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.8, 0.5, 1);

	//mano derecha
	glTranslatef(0.5, 0.0, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(0.2, 0.6, 1);

	//pierna derecha
	glTranslatef(-2.1, -2.2, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.6, 1, 1);
	//rodilla derecha
	glTranslatef(0, -0.5, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(0.6, 0.3, 1);
	//pantorrilla derecha
	glTranslatef(0, -0.5, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.6 ,0.8, 1);
	//pie derecho
	glTranslatef(0.2, -0.5, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(1, 0.4, 1);


	//pierna izquierda
	glTranslatef(-1.5,1.5, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.6, 1, 1);

	//rodilla izquierda
	glTranslatef(0, -0.5, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(0.6, 0.3, 1);

	//pantorrilla izquierda
	glTranslatef(0, -0.5, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	prisma(0.6, 0.8, 1);
	
	//pie izquierdo
	glTranslatef(-0.2, -0.5, 0.0);
	glColor3f(0.0, 0.0, 1.0);
	prisma(1, 0.4, 1);
	


	glutSwapBuffers();

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

	//glOrtho(-5,5,-5,5,0.2,20);	

	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);



	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix

}



void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function

{

	switch (key) {

	case 'w':

	case 'W':

		transZ += 0.3f;

		break;

	case 's':

	case 'S':

		transZ -= 0.3f;

		break;

	case 'a':

	case 'A':



		break;

	case 'd':

	case 'D':



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

	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...

		angleX += 1.0f;

		break;

	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...

		angleX -= 1.0f;

		break;

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

	screenW = glutGet(GLUT_SCREEN_WIDTH);

	screenH = glutGet(GLUT_SCREEN_HEIGHT);

	glutInitWindowSize(500, 500);	// Tamaño de la Ventana

	glutInitWindowPosition(0, 0);	//Posicion de la Ventana

	glutCreateWindow("Practica 4"); // Nombre de la Ventana

	printf("Resolution H: %i \n", screenW);

	printf("Resolution V: %i \n", screenH);

	InitGL();						// Parametros iniciales de la aplicacion

	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo

	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano

	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado

	glutSpecialFunc(arrow_keys);	//Otras

	glutMainLoop();          // 



	return 0;

}