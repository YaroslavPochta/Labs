#include <iostream>
using namespace std;
int main4()
{
	int n;
	int g;
	int i = 1;
	double sum=1, factorial=1; //блок формирования переменных
	cout << "Enter the N ";
	cin >> n; //ввод числа n
	while (i<=n) //выполнение цикла пока i не сравниться с n
	{
		factorial *= i; //вычисление факториала числа i
		sum += (1/factorial); //прибавляем значение 1/i! в случае успешного выполнения цикла
		i++; //увеличиваем i на 1 для того, чтобы оно приближалось к n
	}
	cout << "The answer is " << sum << endl; //вывод ответа
	cin >> g;
	return 0;
}