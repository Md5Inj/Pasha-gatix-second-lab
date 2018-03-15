#include "stdafx.h"
#include "Vector.h"


Vector::Vector()
{
	srand((unsigned)time(0));
}

Vector::Vector(int length)
{
	srand((unsigned)time(0));
	this->length = length;
	this->maxLength = length;
	this->array = new int[maxLength];
	this->setRandom();
}

Vector::Vector(int length, int maxLength)
{
	srand((unsigned)time(0));
	this->length = length;
	this->maxLength = maxLength;
	this->array = new int[maxLength];
	this->setRandom();
}

void Vector::setRandom()
{
	for (int i = 0; i < length; i++)
	{
		this->array[i] = rand() % 10 - 5;
	}
}

void Vector::changeLength(int length)
{
	srand((unsigned)time(0));
	this->length = length;
	this->maxLength = length;
	this->array = new int[maxLength];
	this->setRandom();
}

void Vector::insert(int i)
{
	this->array[this->length] = i;
	this->length++;
}

void Vector::print()
{
	for (int i = 0; i < length; i++)
	{
		cout << this->array[i] << " ";
	}
	cout << endl;
}

int Vector::operator[](int index)
{
	if (index >= 0 && index < this->length)
		return this->array[index];
}

const Vector & Vector::operator*(int a)
{
	for (int i = 0; i < length; i++)
	{
		this->array[i] *= a;
	}
	return *this;
}

const Vector & Vector::operator/(int a)
{
	for (int i = 0; i < length; i++)
	{
		this->array[i] /= a;
	}

	return *this;
}

Vector::~Vector()
{
}

const Vector & operator+(Vector & a, Vector & b)
{
	if (a.length != b.length)
		cout << "Length of vectors is not equal to";
	else
	{
		for (int i = 0; i < a.length; i++)
		{
			a.array[i] += b[i];
		}
	}
	return a;
}

const Vector & operator-(Vector & a, Vector & b)
{
	if (a.length != b.length)
		cout << "Length of vectors is not equal to";
	else
	{
		for (int i = 0; i < a.length; i++)
		{
			a.array[i] -= b[i];
		}
	}
	return a;
}