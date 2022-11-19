#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int sign(double x){
	if (x< 0) return-1;
	if (x == 0)return 0;
	if (x > 0) return 1;
}
int rootscout(double a, double b, double c) {
	double d = b *b - 4 * a * c;
	if (d > 0) return 2;
	if (d == 0) return 1;
	if (d < 0) return 0;
}
double CircleS(double r) {
	double pi = 3.14;
	double s = pi * r*r;
	return s;
 }
double RingS(double r1, double r2) {
	double s = CircleS(r1) - CircleS(r2);
	return s;
}
double TriangleP(double a, double h) {
	/*return 2 * sqrt(pow(a / 2, 2) + pow(h, 2)) + a;*/
	return 2 * sqrt((a / 2) * (a / 2) + h * h) + a;
}
int SumRange(int a, int b) {
	int sum = 0;
	if (a > b) return 0;
	
	else {
		
		for (int i = a; i <= b; i++) {
			sum = sum + i;
		}
	} return sum;

}
int main() {
	setlocale(LC_ALL, "russian");
	/*Proc16.Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
	−1, если X < 0; 0, если X = 0; 1, если X > 0.
		С помощью этой функции найти значение выражения Sign(A) + Sign(B)
		для данных вещественных чисел A и B.*/

	/*double a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b);*/
	/*Proc17.Описать функцию RootsCount(A, B, C) целого типа, определяющую
		количество корней квадратного уравнения A·x
		2 + B·x + C = 0 (A, B, C —
			вещественные параметры, A != 0).С ее помощью найти количество корней
		для каждого из трех квадратных уравнений с данными коэффициентами.
		Количество корней определять по значению дискриминанта :
	D = B
		2 − 4·A·C.*/
	/*double a, b, c;
	cin >> a >> b >> c;
	cout << rootscout(a, b, c);*/
	/*Proc18.Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
		найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле S = π·R
		2
		.В качестве значения π использовать 3.14.*/
	/*double a, b, c;
	cin >> a >> b >> c;
	cout << CircleS(a) << endl << CircleS(b) << endl << CircleS(c) << endl;*/
	/*Proc19.Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром
		и радиусами R1 и R2(R1 и R2 — вещественные, R1 > R2).С ее помощью
		найти площади трех колец, для которых даны внешние и внутренние радиусы.Воспользоваться формулой площади круга радиуса R : S = π·R
		2
		.В
		качестве значения π использовать 3.14.*/
	/*double a,a1, b,b1, c,c1;
	cin >> a>>a1>> b >>b1>> c>>c1;
	cout << RingS(a, a1) << endl << RingS(b, b1) << endl << RingS(c, c1);*/
	/*Proc20.Описать функцию TriangleP(a, h), находящую периметр равнобедренного треугольника по его основанию a и высоте h, проведенной к
		основанию(a и h — вещественные).С помощью этой функции найти
		периметры трех треугольников, для которых даны основания и высоты.
		Для нахождения боковой стороны b треугольника использовать теорему
		Пифагора :
	b
		2 = (a / 2)2 + h
		2*/
	//double a, a1, a2, h, h1, h2;
	//cin >> a >> a1 >> a2 >> h >> h1 >> h2;
	//cout << TriangleP(a, h) << endl << TriangleP(a1, h1) << endl << TriangleP(a2, h2) << endl;
	/*Proc21◦
		.Описать функцию SumRange(A, B) целого типа, находящую сумму
		всех целых чисел от A до B включительно(A и B — целые).Если A > B, то функция возвращает 0. С помощью этой функции найти суммы чисел
		от A до B и от B до C, если даны числа A, B, C.*/
	//int a, b, c;
	//cin >> a >> b >> c;
	//cout << SumRange(a, b) << endl << SumRange(b, c) << endl;

}