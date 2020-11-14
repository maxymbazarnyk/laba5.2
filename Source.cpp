// Lab_05_2.cpp 
// < Базарник Максим > 
// Лабораторна робота № 5.2 
//  Обчислення суми ряду Тейлора за допомогою функції
// Варіант 1
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double S(const double x, const double eps, int &n, double s);
double A(const double x, const int n, double a);
int main()
{
	double xp, xk, x, dx, eps, s = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "log((x + 1) / (x - 1))" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		s = S(x, eps, n, s);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log((x + 1)/(x - 1)) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}
double S(const double x, const double eps, int &n, double s)
{
	n = 0; // вираз залежить від умови завдання варіанту
	double a = 1. / x; // вираз залежить від умови завдання варіанту
	s = 2 * a;
	do {
		n++;
		a = A(x, n, a);
		s += 2 * a;
	} while (abs(a) >= eps);
	return s;
}
double A(const double x, const int n, double a)
{
	double R = (2 * n - 1) / ((2 * n + 1) * x * x); // вираз залежить від умови завдання варіанту
	a *= R;
	return a;
}

