#include<gl/glut.h>

void cowabunga()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);        /*Pierna Izquierda*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(170, 30);
	glVertex2i(200, 10);
	glVertex2i(250, 10);
	glVertex2i(280, 50);
	glVertex2i(230, 90);
	glEnd();

	glBegin(GL_POLYGON);        /*Pierna Derecha*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(470, 30);
	glVertex2i(440, 10);
	glVertex2i(390, 10);
	glVertex2i(360, 50);
	glVertex2i(420, 90);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 1*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(320, 20);
	glVertex2i(280, 50);
	glVertex2i(300, 90);
	glVertex2i(340, 90);
	glVertex2i(360, 50);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 2A*/
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(280, 50);
	glVertex2i(300, 90);
	glVertex2i(250, 140);
	glVertex2i(220, 90);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 2B*/
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(360, 50);
	glVertex2i(420, 90);
	glVertex2i(390, 140);
	glVertex2i(340, 90);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 3A*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(250, 140);
	glVertex2i(220, 90);
	glVertex2i(180, 190);
	glVertex2i(230, 180);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 3B*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(390, 140);
	glVertex2i(420, 90);
	glVertex2i(460, 190);
	glVertex2i(410, 180);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 4A*/
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(230, 180);
	glVertex2i(180, 190);
	glVertex2i(210, 320);
	glVertex2i(240, 260);
	glVertex2i(250, 220);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 4B*/
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(410, 180);
	glVertex2i(460, 190);
	glVertex2i(430, 320);
	glVertex2i(400, 260);
	glVertex2i(390, 220);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 5A*/
	glColor3f(0.0, 0.0, 1.0);;
	glVertex2i(240, 260);
	glVertex2i(210, 320);
	glVertex2i(250, 350);
	glVertex2i(260, 290);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 5B*/
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(400, 260);
	glVertex2i(430, 320);
	glVertex2i(390, 350);
	glVertex2i(380, 290);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 2*/
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(250, 140);
	glVertex2i(300, 90);
	glVertex2i(340, 90);
	glVertex2i(390, 140);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 3*/
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(250, 220);
	glVertex2i(230, 180);
	glVertex2i(250, 140);
	glVertex2i(390, 140);
	glVertex2i(410, 180);
	glVertex2i(390, 220);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 4*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(250, 220);
	glVertex2i(240, 260);
	glVertex2i(260, 290);
	glVertex2i(380, 290);
	glVertex2i(400, 260);
	glVertex2i(390, 220);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 5*/
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(260, 290);
	glVertex2i(250, 350);
	glVertex2i(280, 360);
	glVertex2i(320, 370);
	glVertex2i(360, 360);
	glVertex2i(390, 350);
	glVertex2i(380, 290);
	glEnd();

	glBegin(GL_POLYGON);        /*Cabeza*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(320, 370);
	glVertex2i(280, 360);
	glVertex2i(260, 420);
	glVertex2i(320, 460);
	glVertex2i(380, 420);
	glVertex2i(360, 360);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 6A*/
	glColor3f(1.0, 0.0, 0.0);;
	glVertex2i(210, 320);
	glVertex2i(250, 350);
	glVertex2i(220, 390);
	glVertex2i(120, 390);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 6C*/
	glColor3f(0.0, 0.0, 1.0);;
	glVertex2i(210, 320);
	glVertex2i(120, 390);
	glVertex2i(80, 320);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 6E*/
	glColor3f(0.0, 1.0, 0.0);;
	glVertex2i(80,320);
	glVertex2i(120,390);
	glVertex2i(30,350);
	glVertex2i(10,260);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 6B*/
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(430, 320);
	glVertex2i(390, 350);
	glVertex2i(420, 390);
	glVertex2i(520, 390);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 6D*/
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(430,320);
	glVertex2i(520,390);
	glVertex2i(560,320);
	glEnd();

	glBegin(GL_POLYGON);        /*Caparazon 6F*/
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(560, 320);
	glVertex2i(520,390);
	glVertex2i(610,350);
	glVertex2i(630,260);
	glEnd();

	glFlush();
}

void IniciarConfiguracion() {
	glClearColor(1, 1, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 800, 1, -1);
}

int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 800);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Rafael");
	glutDisplayFunc(cowabunga);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}

/*Teenage Mutant Ninja Turtles Heroes in a half shell
Turtle Power
Here we go its the
Lean green ninja team
On the scene
Cool teens doing ninja things
So extreme
Out the sewer like laser beams
Get rocked with the
Shell shocked pizza kings
Cant stop these radical dudes
The secret of the ooze
Made the chosen few
Emerge from the shadows
To make their move
The good guys win
And the bad guys LOSE!
Leonardo is the leader in blue
He does anything it takes
To get his ninjas through
Donatello, Is the fellow
Has a way with machines
Raphael's got the most
Attitude on the team
Michelangelo
Hes one of a kind
And you know just where to find him
When its party time
Master Splinter taught them every
Single skill they need
To be one lean mean green incredible team
Teenage Mutant Ninja Turtles Heroes in a half shell
Turtle Power!*/