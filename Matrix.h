#pragma once
template <typename T>
class Matrix
{
	int rows;
	int cols;
	T** values;

public :
	Matrix();
	Matrix(int rows = 1, int cols = 1);
	~Matrix();
	void Print()const;
	void Input();
	void InputByRandom();
	Matrix<T> operator+(const T& number);
	Matrix<T> operator-(const T& number);
	Matrix<T> operator*(const T& number);
	Matrix<T> operator/(const T& number);
	T FindMax()const;
	T FindMin()const;
};

