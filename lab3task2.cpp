#include <iostream>  
using namespace std;

int task02()
{
	cout << "Input number N" << endl;
	int N;
	cin >> N;
	int n;
	int numerals = 0;
	for (n = 1; n < N; n++)
	{
		int m = n;
		while (m > 0)
		{
			m = m / 10;
			numerals++;
		}
		int p = 1;
		for (int i = 0; i < numerals; i++)
		{
			p = p * 10;
		}
		if (((n*n) % p) == n)
			cout << "Number " << n << endl;
		numerals = 0;
	}
	system("pause");
	return 0;
}