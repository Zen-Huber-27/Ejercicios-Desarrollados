/*
	TEMA:CONDICIONALES O ESTRUCTURAS DE SELECCION 
	SIMPLES (IF-ELSE)

	EXAMPLE: Determinar si un numero es mayor a 5.
			 y si lo es que imprima que "se gano un dulce",
			 si no que imprima "siga participando"
*/

#include <iostream>
#include <stdlib.h>
using namespace std;   // --> aqui van las librerias

int main()
{
	/*int num1 = 8;

	int num2;

	cout << "::::::::::::::BIENVENIDO A MI APLICACION::::::::::::::\n";
	cout << "Ingrese el numero que desee evaluar: ";
	cin >> num2;

	if (num2 > 5)
	{
		cout << "Felicidades te ganaste un dulce!!! :3";
	}
	else 
	{
		cout << "Lo siento, pero no te ganaste nada,",
				"siga participando";
	}

	string ave;

	cout << "\n\n\nCual es el nombre del ave nacional de El Salvador? ";
	cin >>ave;

	if (ave == "torogoz" || ave == "TOROGOZ")
	{
		cout << "Felicidades, acertaste correctamente la respuesta";
	}
	else
	{
		cout << "Ni modo mi rey, a seguir intentando";
	}*/

	//Ejercicio #2: Determinar si el estudiante aprobo la materia,
	//si la nota minima para aprobar es de 7.

	int nota, edad;
	string nombre;


	cout << ":::::::::::::::::::Bienvenido a mi sistema:::::::::::::::::::::::\n";
	cout << "Por favor ingresar la nota del estudiante: \n";
	cin >> nota;

	cout << "Ingrese el nombre del estudiante por favor: \n";
	cin >> nombre;

	cout << "Ingrese la edad del estudiante: \n";
	cin >> edad;

	if (nota >= 7) 
	{
		cout << "Felicidades has aprobado la materia!!!\n";
	}
	else
	{
		cout << "Lo siento pero no pasaste la materia!!!\n";
	}

	cout << "El nombre del estudiante es: " + nombre + "\n";
	/*cout << "La edad el estudiante es: " + edad + " \n";
	cout << "La nota del estudiante es: " + nota + "\n";*/



}
