#include <iostream>
using namespace std;
int main5()
{
	const int daysInMonthes[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days;
	int months;
	int years;
	int g;
	cout << "Enter the date "; //ïðîñüáà ââåñòè äàòó 
	cin >> days >> months >> years;
	if ((days > 31) || (days < 1)) 
	   { cout << "There are only 31 days"; } //óñëîâèå ïðè êîòîðîì ïðîãðàììà íå áóäåò ñ÷èòàòü äàòó, åñëè â ìåñÿöå íåâîçìîæíîå êîëè÷åñòâî äíåé
	else if ((months > 12) || (months < 1)) 
	   {cout << "There are only 12 months";}//óñëîâèå ïðè êîòîðîì ïðîãðàììà íå áóäåò ñ÷èòàòü äàòó, åñëè â ãîäó íåâîçìîæíîå êîëè÷åñòâî ìåñÿöåâ
	else {
		days < daysInMonthes[months] + (months == 2 && (years % 400 == 0 || (years % 4 == 0 && years % 100 != 0))) ? ++days : (days = 1, months == 12 ? months = 1, ++years : ++months); //âû÷èñëåíèå  äàòû ñëåäóþùåãî äíÿ ïðè âåðíî ââåä¸ííûõ äàííûõ
		cout << "The date of the naxt day is" << days << "." << months << "." << years;
	}
	cin >> g;
	return 0;
}
