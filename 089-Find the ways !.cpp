#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int big;
	cout << "�����]�ƶq�G";
	cin >> big;
	int small;
	cout << "����ƶq�G";
	cin >> small;
	//���l
	long long son = 1;
	for (int i = 0; i < small; i++)
		son *= (big - i);
	cout <<"���l"<<son << endl;
	//����
	long long mother = 1;
	for (int i = small; i >= 1; i--)
		mother *= i;
	cout << "����"<<mother << endl;
	long long last = son / mother;
	cout << "��k�ơG" << last << endl;
	int count = 0;
	while (true)
	{
		if (last /10!= 0)
		{
			count++;
			last /= 10;
		}
		else
		{
			count++;
			cout <<"��k���"<< count << endl;
			break;
		}

	}
	system("PAUSE");
	return 0;
}