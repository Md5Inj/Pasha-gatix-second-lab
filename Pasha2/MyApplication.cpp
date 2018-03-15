#include "stdafx.h"
#include "MyApplication.h"
#include "Vector.h"

MyApplication::MyApplication()
{
	Vector v(10);
	Vector b(10);
	char input = 0;
	int keyCode = 0,
		c = 0, r = 0, mode  = 1;


	while ((int)input != 48) // While zero not inputed
	{
		cout << "Current array: array " << mode << endl;
		cout << "1 - Create a array" << endl
			<< "2 - Print a array" << endl
			<< "3 - Get element from index" << endl
			<< "4 - add array 1 to array 2" << endl
			<< "5 - subtract array 1 form array 2" << endl
			<< "6 - Multiply array 1 to number" << endl
			<< "7 - Divide the array 1 by number" << endl
			<< "8 - Change now array" << endl
			<< "0 - Exit" << endl;

		cin >> input;
		keyCode = (int)input; // Char to int

		switch (keyCode)
		{
		case 49: // Matrix init
		{
			cout << "Input the length of array: "; cin >> c;
			if (mode == 1) v.changeLength(c);
			if (mode == 2) b.changeLength(c);

			break;
		}

		case 50: // Printing matrix
		{
			if (mode == 1) v.print();
			if (mode == 2) b.print();
			break;
		}

		case 51: // Changing count of the cols
		{
			cout << "Input the index: "; cin >> c;
			if (mode == 1) cout << v[c] << endl;
			if (mode == 2) cout << b[c] << endl;

			break;
		}

		case 52:
		{
			v = v + b;
			v.print();
			break;
		}

		case 53:
		{
			v = v - b;
			v.print();
			break;
		}

		case 54:
		{
			cout << "Input the number: "; cin >> c;
			v = v * c;
			v.print();
			break;
		}
		
		case 55:
		{
			cout << "Input the number: "; cin >> c;
			v = v / c;
			v.print();
			break;
		}

		case 56:
		{
			cout << "1 - array 1, 2 - array 2: "; cin >> mode;
			break;
		}

		}

		system("pause");
		system("cls");
	}
}


MyApplication::~MyApplication()
{
}
