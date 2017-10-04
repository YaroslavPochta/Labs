#include <iostream>
using namespace std;
int main3()
{
	int n;
	int g;
	int amount = 0; //ôîðìèðîâàíèå ïåðåìåííûõ 
	int number = 0;
	cout << "Enter the N "; //ââåäåíèå ÷èñëà, ñóììó öèôð êîòîðîãî ìû áóäåì èñêàòü
	cin >> n;
	while (n > 1) //ïîñòðîåíèå öèêëà
	{
		number = n % 10; //÷òåíèå ïîñëåäíåé öèôðû ïóòåì ïîëó÷åíèÿ îñòàòêà îò äåëåíèÿ íà 10
		amount += number; //ñóììèðîâàíèå öèôð â ÷èñëå
		n = (n - number)/10;
	}
	cout << "The amount is " << amount;
		cin >> g;
	return 0;
}
