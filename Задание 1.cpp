#include <iostream>
using namespace std;
int main1()
{
	int n;
	int g;
	cout << "Enter n ";
	bool isEvenNumber = true;
	cin >> n;//���� �����, ������� ��������� ���������
	while ((n > 2)&&(isEvenNumber)) //�������� �����
	{
		if (n % 2 == 0) //�������� �������� �����
			n = n / 2; //������� ����� �� 2
		else
			isEvenNumber = false; //���������� ���������� ������� �������� ���� ����� �� ������� �� 2
	}
	if (((n % 2==0)&& isEvenNumber) || (n==1)) //�������,���� ����� �������� �������� ������
		cout << "Yes, N is the degree of two";
	else
		cout << "No, N isn't the degree of two";
	cin >> g;
	return 0;
	
}