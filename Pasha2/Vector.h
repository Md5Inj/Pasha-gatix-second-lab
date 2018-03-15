#include <iostream>
#include <ctime>

using namespace std;

#pragma once
class Vector
{
private:
	int *array;
	int length;
	int maxLength;
public:
	Vector();
	Vector(int length);
	Vector(int length, int maxLength);
	void setRandom();
	void changeLength(int length);
	void insert(int i);
	void print();
	int operator[](int index);
	friend const Vector& operator + (Vector& a, Vector& b);
	friend const Vector& operator - (Vector& a, Vector& b);
	const Vector& operator * (int a);
	const Vector& operator / (int a);
	~Vector();
};

