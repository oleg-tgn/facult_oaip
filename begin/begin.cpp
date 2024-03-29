#include <iostream>
#include <cmath>
using namespace std;

/*
Begin40
Найти решение системы линейных уравнений вида
A1·x + B1·y = C1,
A2·x + B2·y = C2,
заданной своими коэффициентами A1, B1, C1, A2, B2, C2, если известно,
что данная система имеет единственное решение. Воспользоваться формулами
x = (C1·B2 − C2·B1)/D, y = (A1·C2 − A2·C1)/D,
где D = A1·B2 − A2·B1.
*/
int main() {
	double A1, B1, C1;
	double A2, B2, C2;
	
	cin >> A1 >> B1 >> C1;
	cin >> A2 >> B2 >> C2;

	double D = A1 * B2 - A2 * B1;
	double x = (C1 * B2 - C2 * B1) / D;
	double y = (A1 * C2 - A2 * C1) / D;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	
	system("pause");
	return 0;
}


/*
Begin35
Скорость лодки в стоячей воде V км/ч, скорость течения реки U км/ч
(U < V). Время движения лодки по озеру T1 ч, а по реке (против течения)
— T2 ч. Определить путь S, пройденный лодкой (путь = время · скорость).
Учесть, что при движении против течения скорость лодки уменьшается
на величину скорости течения
*/
//int main() {
//	double v, u;
//	double t1, t2;
//	cin >> v >> u >> t1 >> t2;
//
//	double S = t1*v + t2*(v - u);
//
//	cout << "S = " << S << endl;
//
//	system("pause");
//	return 0;
//}

/*
Begin30
Дано значение угла α в радианах (0 < a < 2pi). Определить значение
этого же угла в градусах, учитывая, что 180 = pi радианов. В качестве
значения π использовать 3.14.
*/
//int main() {
//	double a;
//	cin >> a;
//	
//	double x = a * 180 / 3.14;
//	cout << x << endl;
//
//	system("pause");
//	return 0;
//}

/*
Begin25
Найти значение функции y = 3x^6 - 6x^2 - 7  при данном значении x.
*/

//int main() {
//	double x;
//	cin >> x;
//	double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
//
//	cout << "y = " << y << endl;
//
//	system("pause");
//	return 0;
//}


/*
Begin20
Найти расстояние между двумя точками с заданными координатами
(x1, y1) и (x2, y2) на плоскости. 
*/

//int main() {
//	int x1, y1; 
//	int x2, y2;
//
//	cin >> x1 >> y1;
//	cin >> x2 >> y2;
//	
//	double a = pow((double)(x2 - x1), 2);
//	double b = pow((double)(y2 - y1), 2);
//	double L = sqrt(a + b);
//	
//	cout << "L = " << L << endl;
//
//	system("pause");
//	return 0;
//}



/*
Begin15
Дана площадь S круга. Найти его диаметр D и длину L окружности,
ограничивающей этот круг, учитывая, что L = 2·pi·R, S = pi·(R^2). В качестве
значения pi использовать 3.14.
*/
//int main() {
//	double S, R;
//	cin >> S;
//	R = sqrt(S / 3.14);
//
//	cout << "D = " << 2 * R << endl;
//	cout << "L = " << 2 * PI * R << endl;
//
//	system("pause");
//	return 0;
//}

/*
Begin10
Даны два ненулевых числа. 
Найти сумму, разность, произведение и частное их квадратов.
*/
//int main() {
//	double a, b;
//	cin >> a >> b;
//	a *= a; //a = a * a;
//	b *= b; //b = b * b;
//	
//	cout << "a^2 + b^2 = " << a + b << endl;
//	cout << "a^2 - b^2 = " << a - b << endl;
//	cout << "a^2 * b^2 = " << a * b << endl;
//	cout << "a^2 / b^2 = " << a / b << endl;
//
//	system("pause");
//	return 0;
//}

/*
Begin5
Дана длина ребра куба a. Найти объем куба V = a^3 и площадь его поверхности S = 6·a
*/
//int main() {
//	double a;
//	cin >> a;
//	
//	cout << "V = " << pow(a, 3) << endl;
//	cout << "S = " << 6 * a << endl;
//
//	system("pause");
//	return 0;
//}

/*
Begin1
 Дана сторона квадрата a. Найти его периметр P = 4·a.
*/

//int main() {
//	int a;
//	cin >> a;
//	cout << "p = " << 4 * a << endl;
//
//	system("pause");
//	return 0;
//}






