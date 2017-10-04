#include <iostream>
using namespace std;

bool isItPerfect(int n)
{
	int sum = 1;
	int sqrtn = sqrt(n) + 1;
	for (int d = 2; d < sqrtn && n > 1;)
	{
		if (n == n / d * d)
		{
			sum += d;
			n /= d;
		}
		else
		{
			d++;
		}
	}
	return sum == n;
}

int task04()
{
	cout << "Input number N" << endl;
	int N;
	cin >> N;
	for (int n = 1; n < N; n++)
	{
		if (isItPerfect(n))
		cout << "n= " << n << endl;
	}
	system("pause");
	return 0;
}