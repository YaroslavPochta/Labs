#include <iostream>
using namespace std;
int main3()
{
	int n;
	int g;
	int amount = 0; //������������ ���������� 
	int number = 0;
	cout << "Enter the N "; //�������� �����, ����� ���� �������� �� ����� ������
	cin >> n;
	while (n > 1) //���������� �����
	{
		number = n % 10; //������ ��������� ����� ����� ��������� ������� �� ������� �� 10
		amount += number; //������������ ���� � �����
		n = (n - number)/10;
	}
	cout << "The amount is " << amount;
		cin >> g;
	return 0;
}