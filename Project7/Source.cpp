
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	//getting the equation y = ax^2+bx+c and calculating y.
	
	int x;
	int a, b, c;
	float y;
	cout << "Enter the base:\n";
	cin >> x;
	cout << "Enter the coeff of x^2: ";
	cin >> a;
	cout << "Enter the coeff of x^1: ";
	cin >> b;
	cout << "Enter the coeff of x^0: ";
	cin >> c;
	cout << "y = ";
	
	if (a != 0)
	{
		if (a == -1)
			cout << "-";
		if (a != 1 && a != -1)
			cout << a;
		cout << "x^2";
	}
	if (b != 0)
	{
		if (b > 0 && b != 1)
			cout << "+";
		if (b == -1)
			cout << "-";
		if (b != 1 && b != -1)
			cout << b;
		cout << "x";
	}
	if (c > 0)
		cout << "+" << c;
	else if (c < 0)
		cout << c;


	y = (a * pow(x, 2)) + (b * x) + c;

	cout << "\ny = " << y << endl;
	return 0;
}
