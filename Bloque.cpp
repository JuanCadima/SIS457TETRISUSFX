#include "Bloque.h"

Bloque::Bloque()
{
	nombre = "No tiene";
	forma = "Cudrado";
	posicionX = 50;
	posicionY = 25;
	color = "#FFFFFF";
	velocidad = 0.01f;
	movimiento = true;

}
Bloque::Bloque(float _velocidad):velocidad(_velocidad)
{
	
		nombre = "No tiene";
		forma = "Cudrado";
		posicionX = 50;
		posicionY = 25;
		color = "#FFFFFF";
		velocidad = 0.01f;
		movimiento = true;
}
Bloque::Bloque(string _nombre, string _forma)
{
	nombre = "No tiene";
	forma = "Cudrado";
	posicionX = 50;
	posicionY = 25;
	color = "#FFFFFF";
	velocidad = 0.01f;
	movimiento = true;
}

void Bloque::rotacion(int _sentido)
{
	cout << "Esta funcion rota el bloque" << endl;
}

void Bloque::acelerar(float _velocidad)
{
	cout << "Esta funcion incrementa la velocidad de caida del bloque" << endl;
}

void Bloque::moverHorizontal(int _direccion)
{
	cout << "Esta funcion permite mover hacia la izquierda o derecha la figura" << endl;
}
