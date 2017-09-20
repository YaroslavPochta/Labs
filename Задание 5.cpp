#include <iostream>
using namespace std;
int main5()
{
	const int year[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days;
	int months;
	int years;
	int g;
	cout << "Enter the date "; //просьба ввести дату 
	cin >> days >> months >> years;
	if ((days > 31) || (days < 1)) 
	   { cout << "There are only 31 days"; } //условие при котором программа не будет считать дату, если в мес€це невозможное количество дней
	else if ((months > 12) || (months < 1)) 
	   {cout << "There are only 12 months";}//условие при котором программа не будет считать дату, если в году невозможное количество мес€цев
	else {
		days < year[months] + (months == 2 && (years % 400 == 0 || (years % 4 == 0 && years % 100 != 0))) ? ++days : (days = 1, months == 12 ? months = 1, ++years : ++months); //вычисление  даты следующего дн€ при верно введЄнных данных
		cout << "The date of the naxt day is" << days << "." << months << "." << years;
	}
	cin >> g;
	return 0;
}