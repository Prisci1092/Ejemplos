
#pragma once

using namespace std;

class Vector {

	friend ostream & operator<<(ostream &, const Vector &);

public:

	const int INITIAL_SIZE = 10;

	Vector();
	virtual ~Vector();
	void operator+=(int);
	Vector operator+(const Vector &);

private:
	int * vector; // almacena el vector
	int size; // tama�o real vector
	int capacity; // capacidad maxima del vector

	void init(int, int);
	void fillWithZeroes();
	void doubleSize(); // Duplicar el tama�o del vector y copiar valores
};

ostream & operator<<(ostream &, const Vector &);