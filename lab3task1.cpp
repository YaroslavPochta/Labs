#include <iostream> 
using namespace std;

int task01()
{
	cout << "Input number N" << endl;
	int N;
	cin >> N;
	int mas[10] = {};
	while (N > 1)
	{
		int i = N % 10;
		++mas[i];
		N = N / 10;
	}
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		if (mas[i] != 0) k = k + 1;
	}
	cout << "There is " << k << " different numerals" << endl;
	system("pause");
return 0;
}