#include <iostream>
#include <cmath>
// Подключил бибилотеки
using namespace std;

/*
Вариант 16 - вывести ln|x+sin bx| при x<=0,
cos(bx*x) + 0.5*x при 0<x<=12
и sqrt(a*a+x*x) при x>12
*/
int main()
{
	setlocale(LC_ALL, "RU");
	double a = 5.4, b = 5.3, x;
	// Создал три переменные с типом double
	cout << "Введите x: ";
	cin >> x;
	if (x <= 0) {
		cout << log(abs(x + sin(x * b)));
	}
	else if (x > 12) {
		cout << sqrt(a * a + x * x);
	}
	else {
		cout << cos(b * x * x) + 0.5 * x;
	}
	/*
	При помощи условных операторов
	проверил значения переменных
	*/
}


