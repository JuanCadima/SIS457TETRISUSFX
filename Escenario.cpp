#include "Escenario.h"

Escenario::Escenario()
{
	nombre = "Sin nombre";
	puntaje = 0;
	MejorPuntaje = 0;
	nivel = 0;
	numeroVidas = 0;

}

void Escenario::Verpuntaje(float _Verpuntaje)
{
	cout << "Esta funcion muestra el puntaje en el escenario" << endl;
}

void Escenario::VerMejorPuntaje(float _VerMejorPuntaje)
{
	cout << "Esta funcion muestra el mejor puntaje del escenario" << endl;
}

void Escenario::Vernivel(int _Vernivel)
{
	cout << "Esta funcion muestra en el nivel que se esta desafiando en el escenario" << endl;
}

void Escenario::VernumeroVidas(int _VernumeroVidas)
{
	cout << "Esta funcion muestra el numero de vidas en el escenario" << endl;
}
