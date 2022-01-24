#include "stdafx.h"
#include <iostream>
using namespace std;
// начало объявления класса
class CppStudio // имя класса
{

public:
	void sides()const; //создание сторон
	void coordinates()const; //создание координат на плоскости
	void S()const; //S
	void P()const; //P
	
private: // спецификатор доступа private
	//int : x1, //длина 1 стороны
		 // x2, //длина 2 стороны 
		 // x3; //длина 3 стороны
	double a; //сторона 1
	double b; //сторона 2
	double c; //сторона 3
	double p; // периметр
	double area; // площадь
	double alpha; //угл1
	double betta; //угл2
	double gamma; //угл3
};
	
