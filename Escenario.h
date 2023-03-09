#pragma once
#include<string>
#include "Tablero.h"

using namespace std;

class Escenario
{
private:
	string nombre;
	int alto;
	int ancho;
	string TipoBorde;
	string imagenFondo;
	int puntaje;
	int MejorPuntaje;
	int nivel;
	int numeroVidas;
	Tablero tablero;

public:
	Escenario();
	

	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setTablero(Tablero _tablero) { tablero = _tablero; }
	Tablero getTablero() { return tablero; }

	void Verpuntaje(float _Verpuntaje);
	void VerMejorPuntaje(float _VerMejorPuntaje);
	void Vernivel(int _Vernivel);
    void VernumeroVidas(int _VernumeroVidas);

};
