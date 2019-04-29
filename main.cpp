
/*

	Semestre 2019-2

	Ram�rez Verduzco Lizet

	Pr�ctica #5

	Visual Basic 2017

	Manual de uso:
	Con las teclas:
	U: falange del pulgar hacia adelante
	u: pulgar hacia atras}

	L:Falange 1 del indice se mueve hacia adelatne
	l:Falange 1 del indicese mueve hacia atras
	k:Falange 2 del indice se mueve hacia adelante

	J:Falange 1 del medio se mueve hacia adelante
	j:Falange 1 del medio se mueve hacia atras
	H:Falange 2 del medio se mueve hacia adelante
	
	G:Falange 1 del anular se mueve hacia adelante
	g:Falange 1 del anular se mueve hacia atras
	F:Falange 2 del anular se mueve hacia adelante
	

	M:Falange 1 del ME�IQUE se mueve hacia adelante
	m:Falange 1 del ME�IQUE se mueve hacia atras
	N:Falange 2 del IME�IQUE se mueve hacia adelante



*/

#include "Main.h"



float transZ = -5.0f;

float transX = 0.0f;

float angleX = 0.0f;

float angleY = 0.0f;

int screenW = 0.0;

int screenH = 0.0;

float angleHombro = 0.0;
float angleCodo = 0.0;
float angleMu = 0.0;
float anglepulgar = 0.0;
float angIndice1 = 0.0;
float angIndice2 = 0.0;
float angMedio1 = 0.0;
float angMedio2 = 0.0;
float angAnular1 = 0.0;
float angAnular2 = 0.0;
float angMe�ique1 = 0.0;
float angMe�ique2 = 0.0;

GLfloat Position[] = { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position

GLfloat Position2[] = { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position



void InitGL(void)     // Inicializamos parametros

{



	glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

	glClearDepth(1.0f);									// Configuramos Depth Buffer

	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing



	//Configuracion luz

	glLightfv(GL_LIGHT0, GL_POSITION, Position);

	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);

	glEnable(GL_LIGHTING);

	glEnable(GL_LIGHT0);





	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar

	glEnable(GL_COLOR_MATERIAL);

	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

}



void prisma(void)

{

	GLfloat vertice[8][3] = {

				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0

				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1

				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2

				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3

				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4

				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5

				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6

				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7

	};



	glBegin(GL_POLYGON);	//Front

	glNormal3f(0.0f, 0.0f, 1.0f);

	glVertex3fv(vertice[0]);

	glVertex3fv(vertice[4]);

	glVertex3fv(vertice[7]);

	glVertex3fv(vertice[1]);

	glEnd();



	glBegin(GL_POLYGON);	//Right

	glNormal3f(1.0f, 0.0f, 0.0f);

	glVertex3fv(vertice[0]);

	glVertex3fv(vertice[3]);

	glVertex3fv(vertice[5]);

	glVertex3fv(vertice[4]);

	glEnd();



	glBegin(GL_POLYGON);	//Back

	glNormal3f(0.0f, 0.0f, -1.0f);

	glVertex3fv(vertice[6]);

	glVertex3fv(vertice[5]);

	glVertex3fv(vertice[3]);

	glVertex3fv(vertice[2]);

	glEnd();



	glBegin(GL_POLYGON);  //Left

	glNormal3f(-1.0f, 0.0f, 0.0f);

	glVertex3fv(vertice[1]);

	glVertex3fv(vertice[7]);

	glVertex3fv(vertice[6]);

	glVertex3fv(vertice[2]);

	glEnd();



	glBegin(GL_POLYGON);  //Bottom

	glNormal3f(0.0f, -1.0f, 0.0f);

	glVertex3fv(vertice[0]);

	glVertex3fv(vertice[1]);

	glVertex3fv(vertice[2]);

	glVertex3fv(vertice[3]);

	glEnd();



	glBegin(GL_POLYGON);  //Top

	glNormal3f(0.0f, 1.0f, 0.0f);

	glVertex3fv(vertice[4]);

	glVertex3fv(vertice[5]);

	glVertex3fv(vertice[6]);

	glVertex3fv(vertice[7]);

	glEnd();

}



void display(void)   // Creamos la funcion donde se dibuja

{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer

	//glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();



	glTranslatef(transX, 0.0f, transZ);

	glRotatef(angleY, 0.0, 1.0, 0.0);

	glRotatef(angleX, 1.0, 0.0, 0.0);

	//Poner C�digo Aqu�.

	glPushMatrix(); //se encapsula todo el brazo dese el hombro hasta los dedos
	
		glPushMatrix(); //hombro derecho
		glRotatef(angleHombro, 0, 0, 1);
		glColor3f(0.0, 1.0, 0.0);
		glScalef(0.3, 0.5, 0.5);
		prisma();
		glPopMatrix();
		
		glPushMatrix();//bicep
		glColor3f(0.0, 0.0, 1.0);
		glTranslatef(0.65, 0, 0);
		glScalef(1, 0.5, 0.5);
		prisma();
		glPopMatrix();
		
		glPushMatrix();//codo
		glTranslatef(1.25, 0, 0);
		glRotatef(angleCodo, 0, 0, 1);
		glColor3f(1.0, 0.0, 0.0);
		glScalef(0.2, 0.5, 0.5);
		prisma();
		glPopMatrix();
		
		glPushMatrix();//antebrazo
		glTranslatef(1.75, 0, 0);
		glColor3f(0.0, 0.0, 1.0);
		glScalef(0.8, 0.5, 0.5);
		prisma();
		glPopMatrix();

		glPushMatrix();//mu�eca derecha
		glTranslatef(2.2, 0.0, 0.0);
		glRotatef(angleMu, 0, 1, 0);
		glColor3f(0.0, 1.0, 0.0);
		glScalef(0.1, 0.5, 0.5);
		prisma();
		glPopMatrix();

		glPushMatrix(); //palma 
		glTranslatef(2.55, 0, 0);
		glColor3f(0.0, 0.0, 1.0);
		glScalef(0.6, 0.6, 0.5);
		prisma();
		
			glPushMatrix();//pulgar
				glPushMatrix();//primer falange
				glTranslatef(0.65, 0.5, 0);
				glRotatef(anglepulgar, 0, 1, 0);
				glColor3f(1.0, 0.0, 0.0);
				glScalef(0.3, 0.2, 0.5);
				prisma();
				glScalef(3.3, 5, 2);//se regresa a escala original
			
					glPushMatrix(); //falange pulgar
				
					glColor3f(0.0, 0.0, 1.0);
					glTranslatef(0.3, 0, 0);
					glRotatef(anglepulgar, 0, 1, 0);
					glScalef(0.3, 0.2, 0.5);
					prisma();
					glScalef(5, 5, 2);//
					glPopMatrix();//fin falange
				glPopMatrix();//fin del primer falange
			glPopMatrix();//fin del pulgar
			

			glPushMatrix();//indice
				glPushMatrix();//Falange 1
				glColor3f(0.0, 1.0, 0.0);
				glTranslatef(0.65,0.25, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
				glRotatef(angIndice1, 0, 1, 0);
				glRotatef(angIndice2, 0, 1, 0);
				glScalef(0.3, 0.2, 0.5); //MEDIDAS DEL DEDO
				prisma();
				glScalef(3.33, 5, 2);//se regresa a escala original
				
					glPushMatrix();//Falange 2
					glColor3f(1.0, 0.0, 0.0);
					glTranslatef(0.35, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
					glRotatef(angIndice1, 0, 1, 0);
					glScalef(0.4, 0.2, 0.5); //MEDIDAS DEL DEDO
					prisma();
					glScalef(2.5, 5, 2);//se regresa a escala original
						
						glPushMatrix();//Falange 3
						glColor3f(0.0, 0.0, 1.0);
						glTranslatef(0.35, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
						glRotatef(angIndice2, 0, 1, 0);
						glScalef(0.3, 0.2, 0.5); //MEDIDAS DEL DEDO
						prisma();
						glScalef(3.33,5,2); //
						glPopMatrix();//falange 1
					glPopMatrix();//falange 2
				glPopMatrix();//falange 3
			glPopMatrix();//fin del indice

				
			glPushMatrix();//medio
				glPushMatrix();//Falange 1
				glColor3f(0.0, 1.0, 0.0);
				glTranslatef(0.65,0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
				glRotatef(angMedio1, 0, 1, 0);
				glRotatef(angMedio2, 0, 1, 0);
				glScalef(0.3, 0.2, 0.5); //MEDIDAS DEL DEDO
				prisma();
				glScalef(3.33, 5, 2);//se regresa a escala original
				
					glPushMatrix();//Falange 2
					glColor3f(1.0, 0.0, 0.0);
					glTranslatef(0.35, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
					glRotatef(angIndice1, 0, 1, 0);
					glScalef(0.4, 0.2, 0.5); //MEDIDAS DEL DEDO
					prisma();
					glScalef(2.5, 5, 2);//se regresa a escala original
						
						glPushMatrix();//Falange 3
						glColor3f(0.0, 0.0, 1.0);
						glTranslatef(0.35, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
						glRotatef(angIndice2, 0, 1, 0);
						glScalef(0.4, 0.2, 0.5); //MEDIDAS DEL DEDO
						prisma();
						glScalef(3.33,5,2); //
						glPopMatrix();//falange 1
					glPopMatrix();//falange 2
				glPopMatrix();//falange 3
			glPopMatrix();
			
			glPushMatrix();//anular
				glPushMatrix();//Falange 1
				glColor3f(0.0, 1.0, 0.0);
				glTranslatef(0.65, -0.25, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
				glRotatef(angAnular1, 0, 1, 0);
				glRotatef(angAnular2, 0, 1, 0);
				glScalef(0.3, 0.2, 0.5); //MEDIDAS DEL DEDO
				prisma();
				glScalef(3.33, 5, 2);//se regresa a escala original
					glPushMatrix();//Falange 2
					glColor3f(1.0, 0.0, 0.0);
					glTranslatef(0.35, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
					glRotatef(angIndice1, 0, 1, 0);
					glScalef(0.4, 0.2, 0.5); //MEDIDAS DEL DEDO
					prisma();
					glScalef(2.5, 5, 2);//se regresa a escala original
						glPushMatrix();//Falange 3
						glColor3f(0.0, 0.0, 1.0);
						glTranslatef(0.35, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
						glRotatef(angIndice2, 0, 1, 0);
						glScalef(0.3, 0.2, 0.5); //MEDIDAS DEL DEDO
						prisma();
						glScalef(3.33, 5, 2); //
						glPopMatrix();//falange 3
					glPopMatrix();//falange 2
				glPopMatrix();//falange 1
			glPopMatrix();
			
			glPushMatrix();//Me�ique
				glPushMatrix();//Falange 1
				glColor3f(0.0, 1.0, 0.0);
				glTranslatef(0.58, -0.5, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
				glRotatef(angMe�ique1, 0, 1, 0);
				glScalef(0.15, 0.2, 0.5); //MEDIDAS DEL DEDO
				prisma();
				glScalef(6.66, 5, 2);//se regresa a escala original
					glPushMatrix();//Falange2
					glColor3f(1.0, 0.0, 0.0);
					glTranslatef(0.15, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
					glRotatef(angMe�ique1, 0, 1, 0);
					glScalef(0.15, 0.2, 0.5); //MEDIDAS DEL DEDO
					prisma();
					glScalef(6.66, 5, 2);//se regresa a escala original
						glPushMatrix();//Falange 3
						glColor3f(0.0, 0.0, 1.0);
						glTranslatef(0.15, 0, 0);//lo que se traslada desde el centro del pulgar al centro del falange 1
						glRotatef(angMe�ique1, 0, 1, 0);
						glScalef(0.15, 0.2, 0.5); //MEDIDAS DEL DEDO
						prisma();
						glScalef(6.66, 5, 2);//se regresa a escala original
						glPopMatrix();//falange 3
					glPopMatrix();//falange 2
				glPopMatrix();//falange 1
			glPopMatrix();
			
		glPopMatrix();//fin de la palma
	glPopMatrix();//fin de la estructura del brazo



	

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

	//glLoadIdentity();									

}



void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function

{

	switch (key) {

	case 'p':

		if (angleHombro < 90)

			angleHombro += 0.5f;

		printf("ang: %f \n", angleHombro);

		break;

	case 'P':

		if (angleHombro > 90)

			angleHombro -= 0.5f;

		break;



	case 'o':

		if (angleCodo < 90)

			angleCodo += 0.5f;

		printf("ang: %f \n", angleCodo);

		break;

	case 'O':

		if (angleCodo > 0)

			angleCodo -= 0.5f;

		break;



	case 'i':

		if (angleMu < 90)

			angleMu += 0.5f;

		printf("ang: %f \n", angleMu);

		break;

	case 'I':

		if (angleMu > -45)

			angleMu -= 0.5f;

		break;





	case 'u':

		if (anglepulgar < 90)

			anglepulgar += 0.5f;

		printf("ang: %f \n", anglepulgar);

		break;

	case 'U':

		if (anglepulgar > -45)

			anglepulgar -= 0.5f;

		break;

	case 'L':
		if (angIndice1 > 45)
			angIndice1 -= 0.5f;
		break;

	case 'l':
		if (angIndice1 <45)
			angIndice1 += 0.5f;
		printf("ang: %f \n", angIndice1);
		break;

	case 'K':
		if (angIndice2 < 45)
			angIndice2 += 0.5f;
		break;


	case 'J':
		if (angMedio1 > 45)
			angMedio1 -= 0.5f;
		break;

	case 'j':
		if (angMedio1 < 45)
			angMedio1 += 0.5f;
		break;

	case 'H':
		if (angMedio2 < 45)
			angMedio2 += 0.5f;
		break;


	case 'G':
		if (angAnular1 > 45)
			angAnular1 -= 0.5f;
		break;

	case 'g':
		if (angAnular1 < 45)
			angAnular1 += 0.5f;
		break;

	case 'F':
		if (angAnular2 < 45)
			angAnular2 += 0.5f;
		break;


	case 'M':
		if (angMe�ique1 > 45)
			angMe�ique1 -= 0.5f;
		break;

	case 'm':
		if (angMe�ique1 < 45)
			angMe�ique1 += 0.5f;
		break;

	case 'N':
		if (angMe�ique2 < 45)
			angMe�ique2 += 0.5f;
		break;




	case 'w':
	case 'W':

		transZ += 0.2f;

		break;

	case 's':
	case 'S':

		transZ -= 0.2f;

		break;

	case 'a':
	case 'A':

		transX += 0.2f;

		break;

	case 'd':
	case 'D':

		transX -= 0.2f;

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

		angleX += 2.0f;

		break;

	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...

		angleX -= 2.0f;

		break;

	case GLUT_KEY_LEFT:

		angleY += 2.0f;

		break;

	case GLUT_KEY_RIGHT:

		angleY -= 2.0f;

		break;

	default:

		break;

	}

	glutPostRedisplay();

}





int main(int argc, char** argv)   // Main Function

{

	glutInit(&argc, argv); // Inicializamos OpenGL

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )

	screenW = glutGet(GLUT_SCREEN_WIDTH);

	screenH = glutGet(GLUT_SCREEN_HEIGHT);

	glutInitWindowSize(500, 500);	// Tama�o de la Ventana

	glutInitWindowPosition(0, 0);	//Posicion de la Ventana

	glutCreateWindow("Practica 5"); // Nombre de la Ventana

	printf("Resolution H: %i \n", screenW);

	printf("Resolution V: %i \n", screenH);

	InitGL();						// Parametros iniciales de la aplicacion

	glutDisplayFunc(display);  //Indicamos a Glut funci�n de dibujo

	glutReshapeFunc(reshape);	//Indicamos a Glut funci�n en caso de cambio de tamano

	glutKeyboardFunc(keyboard);	//Indicamos a Glut funci�n de manejo de teclado

	glutSpecialFunc(arrow_keys);	//Otras

	glutMainLoop();          // 



	return 0;

}