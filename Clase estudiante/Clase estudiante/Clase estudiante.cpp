// Clase estudiante.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Estudiante.h"
#include <string>
#include <conio.h>
using namespace std;

void main()
{
	Estudiante est;
	string n, a, c;
	double r;
	cout<<"Ingrese un nombre : "<<endl;
	cin>>n;
	cout<<"Ingrese un apellido : "<<endl;
	cin>>a;
	cout<<"Ingrese un registro : "<<endl;
	cin>>r;
	cout<<"Ingrese una carrera : "<<endl;
	cin>>c;
	est.Set_nombre(n);
	est.Set_apellido(a);
	est.Set_carrera(c);
	est.Set_registro(r);
	cout<<"El nombre es : "<<est.Get_nombre()<<endl;
	cout<<"El apellido es : "<<est.Get_apellido()<<endl;
	cout<<"El registro es : "<<est.Get_registro()<<endl;
	cout<<"La carrera es : "<<est.Get_carrera()<<endl;
	getch();
}

