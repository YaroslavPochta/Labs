#include <iostream> 
using namespace std;

int NOD(int a, int b)
{
	while (a != 0 && b != 0)
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	return a + b;
}

int task03()
{
	cout << "Input number N" << endl;

	int N;
	cin >> N;
	for (int d = 2; d < N; d++)
	{
		for (int n = 1; n < d; n++)
		{
			if (NOD(d, n) == 1)
				cout << n << "/" << d << endl;
		}
	}
	system("pause");
	return 0;
}