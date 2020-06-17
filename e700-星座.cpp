/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int array[5] = { 0 };
	int m, d;
	while (cin >> a)
	{
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		//³æ³æ
		if (a.length() == 3)
		{
			m = array[0];
			d = array[2];
		}
		//Âù³æ
		else if (a.length() == 4 && array[2] == -1)
		{
			m = array[0] * 10 + array[1];
			d = array[3];
		}
		//³æÂù
		else if (a.length() == 4 && array[1] == -1)
		{
			m = array[0];
			d = array[2] * 10 + array[3];
		}
		//ÂùÂù
		else if (a.length() == 5)
		{
			m = array[0] * 10 + array[1];
			d = array[3] * 10 + array[4];
		}
		switch (m)
		{
		case 1:
			if (d >= 21)
				cout << "¤ô²~®y" << endl;
			else
				cout << "¼¯½~®y" << endl;
			break;
		case 2:
			if (d >= 20)
				cout << "Âù³½®y" << endl;
			else
				cout << "¤ô²~®y" << endl;
			break;
		case 3:
			if (d >= 21)
				cout << "¨d¦Ï®y" << endl;
			else
				cout << "Âù³½®y" << endl;
			break;
		case 4:
			if (d >= 21)
				cout << "ª÷¤û®y" << endl;
			else
				cout << "¨d¦Ï®y" << endl;
			break;
		case 5:
			if (d >= 22)
				cout << "Âù¤l®y" << endl;
			else
				cout << "ª÷¤û®y" << endl;
			break;
		case 6:
			if (d >= 22)
				cout << "¥¨ÃÉ®y" << endl;
			else
				cout << "Âù¤l®y" << endl;
			break;
		case 7:
			if (d >= 23)
				cout << "·à¤l®y" << endl;
			else
				cout << "¥¨ÃÉ®y" << endl;
			break;
		case 8:
			if (d >= 22)
				cout << "³B¤k®y" << endl;
			else
				cout << "·à¤l®y" << endl;
			break;
		case 9:
			if (d >= 24)
				cout << "¤Ñ¯¯®y" << endl;
			else
				cout << "³B¤k®y" << endl;
			break;
		case 10:
			if (d >= 24)
				cout << "¤ÑÃÈ®y" << endl;
			else
				cout << "¤Ñ¯¯®y" << endl;
			break;
		case 11:
			if (d >= 23)
				cout << "®g¤â®y" << endl;
			else
				cout << "¤ÑÃÈ®y" << endl;
			break;
		case 12:
			if (d >= 23)
				cout << "¼¯½~®y" << endl;
			else
				cout << "®g¤â®y" << endl;
		}
	}
	return 0;
}*/