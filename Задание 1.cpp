#include <iostream>
using namespace std;
int main1()
{
	int n;
	int g;
	cout << "Enter n ";
	bool isEvenNumber = true;
	cin >> n;//Ввод числа, которое требуется проверить
	while ((n > 2)&&(isEvenNumber)) //Проверка числа
	{
		if (n % 2 == 0) //Проверка четности числа
			n = n / 2; //Деление числа на 2
		else
			isEvenNumber = false; //присвоение переменной ложного значения если числа не делится на 2
	}
	if (((n % 2==0)&& isEvenNumber) || (n==1)) //Условие,если число является степенью двойки
		cout << "Yes, N is the degree of two";
	else
		cout << "No, N isn't the degree of two";
	cin >> g;
	return 0;
	
}