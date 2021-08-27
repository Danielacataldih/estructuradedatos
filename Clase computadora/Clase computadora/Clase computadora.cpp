// Clase computadora.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Computadora.h"
#include <conio.h>
using namespace std;

void main()
{
	Computadora comp;
	string m;
	int pr;
	float mem, d, p;
	cout<<"Ingrese la marca : "<<endl;
	cin>>m;
	cout<<"Ingrese la cantidad de procesadores : "<<endl;
	cin>>pr;
	cout<<"Ingrese la cantidad de memoria RAM[GB] : "<<endl;
	cin>>mem;
	cout<<"Ingrese el espacio del disco duro[GB] : "<<endl;
	cin>>d;
	cout<<"Ingrese el tamanho de la pantalla[in] : "<<endl;
	cin>>p;
	comp.Set_marca(m);
	comp.Set_procesador(pr);
	comp.Set_memoria(mem);
	comp.Set_disco(d);
	comp.Set_pantalla(p);
	cout<<"La marca es : "<<comp.Get_marca()<<endl;
	cout<<"La cantidad de procesador es : "<<comp.Get_procesador()<<endl;
	cout<<"La cantidad de memoria es : "<<comp.Get_memoria()<<" GB "<<endl;
	cout<<"El espacio del disco duro es : "<<comp.Get_disco()<<" GB "<<endl;
	cout<<"El tamanho de la pantalla es : "<<comp.Get_pantalla()<<" pulgadas "<<endl;

	cout<<"La cantidad de memoria es : "<<comp.Get_memoriaMB()<<" MB "<<endl;
	cout<<"El espacio del disco duro es : "<<comp.Get_discoTB()<<" TB "<<endl;
	getch();


}

