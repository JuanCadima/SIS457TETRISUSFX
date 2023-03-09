#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Bloque
{
private:
	string nombre;
	string forma;
	int sentidoRotacion;
	int alto;
	int ancho;
	string color;
	float velocidad;
	int posicionX;
	int posicionY;
	bool movimiento;
	vector<vector<bool>>apariencia;
public:
	Bloque();
	Bloque(string _nombre, string _forma);
	Bloque(float);

	string getNombre() { return nombre;  }
	void setNombre(string _nombre) { nombre = _nombre;  }

	string getForma() { return forma; }

	void rotacion(int _sentido);
	void acelerar(float _velocidad);
	void moverHorizontal(int _direccion);


protected:

};

