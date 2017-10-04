#include <iostream>
using namespace std;
int main1()
{
	int n;
	int g;
	cout << "Enter n ";
	bool isEvenNumber = true;
	cin >> n;//Ââîä ÷èñëà, êîòîðîå òðåáóåòñÿ ïðîâåðèòü
	while ((n > 2)&&(isEvenNumber)) //Ïðîâåðêà ÷èñëà
	{
		if (n % 2 == 0) //Ïðîâåðêà ÷åòíîñòè ÷èñëà
			n = n / 2; //Äåëåíèå ÷èñëà íà 2
		else
			isEvenNumber = false; //ïðèñâîåíèå ïåðåìåííîé ëîæíîãî çíà÷åíèÿ åñëè ÷èñëà íå äåëèòñÿ íà 2
	}
	if (((n % 2==0)&& isEvenNumber) || (n==1)) //Óñëîâèå,åñëè ÷èñëî ÿâëÿåòñÿ ñòåïåíüþ äâîéêè
		cout << "Yes, N is the degree of two";
	else
		cout << "No, N isn't the degree of two";
	cin >> g;
	return 0;
	
}
