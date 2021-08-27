#include "StdAfx.h"
#include "Computadora.h"


Computadora::Computadora(void)
{
}


Computadora::~Computadora(void)
{
}

void Computadora::Set_marca(std::string m)
{
	marca = m;
}
std::string Computadora::Get_marca()
{
	return marca;
}
void Computadora::Set_procesador(int p)
{
	procesador = p;
}
int Computadora::Get_procesador()
{
	return procesador;
}
void Computadora::Set_memoria(float m)
{
	memoria = m;
}
float Computadora::Get_memoria()
{
	return memoria;
}
void Computadora::Set_disco(float d)
{
	disco = d;
}
float Computadora::Get_disco()
{
	return disco;
}
void Computadora::Set_pantalla(float p)
{
	pantalla = p;
}
float Computadora::Get_pantalla()
{
	return pantalla;
}
float Computadora::Get_memoriaMB()
{
	return (memoria*1024);
}
float Computadora::Get_discoTB()
{
	return (disco/1024);
}