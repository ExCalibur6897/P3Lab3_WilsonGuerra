#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	while (true) {
		int x = 0;
		int y = 0;
		double mid = 0;
		double midn = 0;
		int i = 0;
		int n = 0;
		double min = 0;
		double max = 0;
		int opcion = 0;
		int longitud = 0;
		int arreglo[100];
		int suma = 0;
		double media = 0;
		double mediana = 0;
		int j = 0;
		int k = 0;
		int posicion = 0;
		int posicion2 = 0;
		double promedio = 0;
		int filas=0;
		int columnas = 0;
		int matriz[10][10];
		cout << "Menu Principal: " << endl;
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Ejercicio 3" << endl;
		cout << "4. Salir" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			system("cls");
			cout << "Ingrese la longitud del arreglo: ";
			cin >> longitud;

			for (i = 0; i < longitud; i++)
			{
				arreglo[i] = rand() % 500 + 100;
				suma = suma + arreglo[i];
			}

			media = suma / longitud;

			for (i = 0; i < longitud; i++)
			{
				for (j = 0; j < longitud; j++)
				{
					if (arreglo[i] < arreglo[j])
					{
						k = arreglo[i];
						arreglo[i] = arreglo[j];
						arreglo[j] = k;
					}
				}
			}

			if (longitud % 2 == 0)
			{
				posicion = longitud / 2;
				posicion2 = posicion + 1;
				promedio = (arreglo[posicion] + arreglo[posicion2]) / 2;
				mediana = promedio;
			}
			else
			{
				posicion = longitud / 2;
				mediana = arreglo[posicion];
			}

			cout << "El arreglo generado es: {";
			for (i = 0; i < longitud; i++)
			{
				cout << arreglo[i] << ", ";
			}
			cout << "}" << endl;
			cout << "La media es: " << media << endl;
			cout << "La mediana es: " << mediana << endl;
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			cout << endl << "Ingrese el valor de x: " << endl;
			cin >> x;
			cout << endl << "Ingrese el valor de n: " << endl;
			cin >> n;
			cout << endl << "Ingrese el numero maximo de iteraciones: " << endl;
			cin >> y;
			min = 1;
			max = x;

			for (i = 0; i < y; i++)
			{
				mid = (min + max) / 2;
				midn = pow(mid, n);
				if (midn > x)
				{
					max = mid;
				}
				else
				{
					min = mid;
				}
			}
			cout << "La raiz " << n << " de " << x << " es : " << mid << endl;
			system("pause");
			system("cls");
			break;
		case 3:
			srand(time(NULL));
			system("cls");
			cout << "Ingrese el numero de filas: ";
			cin >> filas;
			cout << "Ingrese el numero de columnas: ";
			cin >> columnas;

			for (i = 0; i < filas; i++)
			{
				for (j = 0; j < columnas; j++)
				{
					matriz[i][j] = rand() % 50 + 2;
				}
			}

			cout << "La matriz generada es: " << endl;
			for (i = 0; i < filas; i++)
			{
				for (j = 0; j < columnas; j++)
				{
					cout << matriz[i][j] << " ";
				}
				cout << endl;
			}

			cout << endl;

			cout << "Los numeros primos contenidos en la matriz son: " << endl;
			for (i = 0; i < filas; i++)
			{
				for (j = 0; j < columnas; j++)
				{
					if (matriz[i][j] == 2 || matriz[i][j] == 3 || matriz[i][j] == 5 || matriz[i][j] == 7)
					{
						cout << matriz[i][j] << " ";
					}
				}
			}
			cout << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "Saliendo...";
			exit(0);
			break;
		}
	}
}
