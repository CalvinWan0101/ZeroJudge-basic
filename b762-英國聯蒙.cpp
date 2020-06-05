#include <iostream>
#include <string>
//必須嘴炮一下XDD
//ENGLAND
//Expansive National Guardianship Loli Analysis Neighborly Dynasty
//國際蘿莉保護王朝
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cin >> n;
	string a;
	int kill = 0, help = 0, die = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a == "Get_Kill")
		{
			kill++;
			if (kill < 3)
				cout << "You have slain an enemie." << endl;
			else if (kill== 3)
				cout << "KILLING SPREE!" << endl;
			else if (kill == 4)
				cout << "RAMPAGE~" << endl;
			else if (kill == 5)
				cout << "UNSTOPPABLE!" << endl;
			else if (kill == 6)
				cout << "DOMINATING!" << endl;
			else if (kill == 7)
				cout << "GUALIKE!" << endl;
			else
				cout << " LEGENDARY!" << endl;
		}
		else if (a == "Get_Assist")
			help++;
		else if (a == "Die")
		{
			die++;
			if (kill < 3)
				cout << "You have been slained." << endl;
			else
				cout << "SHUTDOWN." << endl;
		}
	}
	cout << "(" << kill << "," << die << "," << help << ")" << endl;
	system("PAUSE");
	return 0;
}
