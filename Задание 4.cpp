#include <iostream>
using namespace std;
int main4()
{
	int n;
	int g;
	int i = 1;
	double sum=1, factorial=1; //���� ������������ ����������
	cout << "Enter the N ";
	cin >> n; //���� ����� n
	while (i<=n) //���������� ����� ���� i �� ���������� � n
	{
		factorial *= i; //���������� ���������� ����� i
		sum += (1/factorial); //���������� �������� 1/i! � ������ ��������� ���������� �����
		i++; //����������� i �� 1 ��� ����, ����� ��� ������������ � n
	}
	cout << "The answer is " << sum << endl; //����� ������
	cin >> g;
	return 0;
}