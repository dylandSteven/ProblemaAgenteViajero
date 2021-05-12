#pragma once
#include<iostream>
#include<vector>
#include <queue>
using namespace System;
using namespace System::Drawing;
#define MAXV 100 
#define oo 0x3f3f3f3f 
using namespace std;

class Distancia
{
public:
	int nodo; 
	int costo; 
	vector<int> last;
	Distancia(int _nodo, int _costo)  {
		nodo = _nodo; costo = _costo;
		last.push_back(_nodo);
	} 
	Distancia() : nodo(-1), costo(-1) {} 

	void dibujarDistancias()
	{

	}
};

class Grafo
{
private:
	int x, y;
public:
	
	vector<Distancia> G[MAXV]; 
	int V; 
	int E; 
	
	void SetX(int n)
	{
		x = n;
	}
	int GetX()
	{
		return x;
	}

	void SetY(int n)
	{
		y = n;
	}
	int GetY()
	{
		return y;

	}
	void DibujarGrafo(Graphics^ grafico, int x, int y)
	{
		grafico->FillEllipse(Brushes::BlueViolet, x, y, 50, 50);
	
	}
};

class Condicion
{
public:
	int nodo;
	int costo; 

	Condicion(int _nodo, int _costo)  {
		nodo = _nodo; costo = _costo;
		
	} 
	bool operator <(const Condicion& b) const 
	{
		return costo > b.costo;
	}
};