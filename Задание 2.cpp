#include <iostream>
using namespace std;
int main2()
{
	float x;
	float y; //������������ ����������
	int g;
	int i = 1;
	cout << "Enter X and Y " << endl;
	cin >> x >> y; //���� ���������� ����������, ������� �������� ����� � ������ ����
	while ( x < y) //���� ����������� ��������� �� � ������ ���� �� 10%, ���� ��� �� �������� � ��������� ����
	{
		x = 1.1*x; 
		i++; // ���������� ����� ���� ��� ������� ���������� �����
	}
	cout << "The answer is " << i << " days";
	cin >> g;
	return 0;
}