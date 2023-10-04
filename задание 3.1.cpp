#include <iostream>
#include <clocale>
// Подключил библиотеки
using namespace std;

/*
Вариант 16 - вывести "истина", если a>4 и b<=3
во остальных случаях "ложь"
*/
int main()
{
	setlocale(LC_ALL, "RU");
	int a, b;
	// Создал две переменные с целочисленным типом данных
	cout << "Введите число а: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	if (a > 4 && b <= 3) {
		cout << "True";
	}
	else {
		cout << "False";
	}
	/*
	При помощи условных операторов
	проверил значение переменных
	*/
}