#include <iostream>
#include <cstdlib>
#include "Matrix.h"
#include "Matrix.cpp"

using namespace std;

int main()
{
	Matrix<int> mat(3, 3);
	mat.Print();

	/*Matrix<double> mat2(2, 2);
	mat2.Input();
	mat2.Print();*/

	Matrix<int> random(2, 2);
	random.InputByRandom();
	random.Print();
	/*cout << "max : " << rand.FindMax() << endl;
	cout << "min : " << rand.FindMin() << endl;*/
	random = random + 1;
	random.Print();
}