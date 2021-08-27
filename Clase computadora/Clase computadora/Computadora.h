#pragma once
#include <string>
using namespace std;
class Computadora
{
private:
	string marca;
	int procesador;
	float memoria;
	float disco;
	float pantalla;

public:
	Computadora(void);
	~Computadora(void);
	void Set_marca(std::string m);
	std::string Get_marca();
	void Set_procesador(int p);
	int Get_procesador();
	void Set_memoria(float m);
	float Get_memoria();
	void Set_disco(float d);
	float Get_disco();
	void Set_pantalla(float p);
	float Get_pantalla();

	float Get_memoriaMB();
	float Get_discoTB();
};

