#include "Matrix.h"
#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
Matrix<T>::Matrix() : rows(1), cols(1), values(nullptr) {}

template <typename T>
Matrix<T>::Matrix(int rows, int cols) : rows(rows), cols(cols) 
{
	values = new T*[rows];
	for (int i = 0; i < rows; i++)
	{
		values[i] = new T[cols];
		for (int j = 0; j < cols; j++) 
		{
			values[i][j] = 0;
		}
	}
}

template <typename T>
Matrix<T>::~Matrix()
{
	if (values != nullptr)
	{
		for (int i = 0; i < rows; i++)
		{
			delete[] values[i];
		}
		delete[] values;
	}
}

template <typename T>
void Matrix<T>::Print()const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << values[i][j] << "\t";
		}
		cout << endl;
	} cout << endl << endl;
}

template <typename T>
void Matrix<T>::Input()
{
	cout << "Enter matrix : " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> values[i][j];
		}
	} cout << endl;
}

template <typename T>
void Matrix<T>::InputByRandom()
{
	T min;
	T max;
	cout << "Enter min and max : " << endl;
	cin >> min >> max;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			values[i][j] = min + (rand() % max - min + 1);
		}
	} cout << endl;
}

template<typename T>
Matrix<T> Matrix<T>::operator+(const T& number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			values[i][j] = values[i][j] + number;
		}
	} cout << endl;
	return *this;
}

template<typename T>
Matrix<T> Matrix<T>::operator-(const T& number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			values[i][j] = values[i][j] - number;
		}
	} cout << endl;
	return *this;
}

template<typename T>
Matrix<T> Matrix<T>::operator*(const T& number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			values[i][j] = values[i][j] * number;
		}
	} cout << endl;
	return *this;
}

template<typename T>
Matrix<T> Matrix<T>::operator/(const T& number)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			values[i][j] = values[i][j] / number;
		}
	} cout << endl;
	return *this;
}

template<typename T>
T Matrix<T>::FindMax()const 
{
	T max = values[0][0];
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < cols; ++j) 
		{
			if (values[i][j] > max) max = values[i][j];
		}
	}
	return max;
}

template<typename T>
T Matrix<T>::FindMin()const
{
	T min = values[0][0];
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (values[i][j] < min) min = values[i][j];
		}
	}
	return min;
}