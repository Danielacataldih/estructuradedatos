// Clase peliculas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Pelicula.h"
#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	Pelicula pel;
	string n, g;
	int d, cd, cp;
	cout<<"Ingrese el nombre de la pelicula : "<<endl;
	cin>>n;
	cout<<"Ingrese el genero de la pelicula : "<<endl;
	cin>>g;
	cout<<"Ingrese la duracion de la pelicula[min] : "<<endl;
	cin>>d;
	cout<<"Ingrese la cantidad de directores : "<<endl;
	cin>>cd;
	cout<<"Ingrese la cantidad de personajes : "<<endl;
	cin>>cp;
	pel.Set_nombre(n);
	pel.Set_genero(g);
	pel.Set_duracion(d);
	pel.Set_cantidad_de_directores(cd);
	pel.Set_cantidad_de_personajes(cp);
	cout<<"El nombre de la pelicula es : "<<pel.Get_nombre()<<endl;
	cout<<"El genero de la pelicula es : "<<pel.Get_genero()<<endl;
	cout<<"La duracion de la pelicula es : "<<pel.Get_duracion()<<" min "<<endl;
	cout<<"La cantidad de directores es : "<<pel.Get_cantidad_de_directores()<<endl;
	cout<<"La cantidad de personajes es : "<<pel.Get_cantidad_de_personajes()<<endl;
	getch();

}

