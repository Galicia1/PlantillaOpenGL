// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

int main()
{
	//Declaramos apuntador de ventana
	//TErminar ejecucion
	GLFWwindow *window;

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//si se pudo iniciar el GLFW
	//entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768,"Ventana", NULL, NULL);
	//si no podemos iniciar la ventana 
	//entonces erminamos la ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//establecer el color de borrado
		glClearColor(1, 0.8, 0, 1);
		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}
    return 0;
}

