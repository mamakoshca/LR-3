#include <iostream>
#include <clocale>
// Подключил билиотеки
using namespace std;
/*
Вариант 16 - при помощи оператора swithc
вывести день недели согласно его номеру
*/

int main()
{
	setlocale(LC_ALL, "RU");
	int x;
	// Создал переменную х
	cout << "Введите x: ";
	cin >> x;
	switch (x) {
		case 1:
			cout << "Понедельник";
			break;
		case 2:
			cout << "Вторник";
			break;
		case 3:
			cout << "Среда";
			break;
		case 4:
			cout << "Четверг";
			break;
		case 5:
			cout << "Пятница";
			break;
		case 6:
			cout << "Суббота";
			break;
		case 7:
			cout << "Воскресенье";
			break;
	}
	/*
	При помощи оператора switch
	вывел день недели, согласно его номеру
	*/
}
