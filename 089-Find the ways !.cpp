#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int big;
	cout << "キチ竇计秖";
	cin >> big;
	int small;
	cout << "饼╊埃计秖";
	cin >> small;
	//だ
	long long son = 1;
	for (int i = 0; i < small; i++)
		son *= (big - i);
	cout <<"だ"<<son << endl;
	//だダ
	long long mother = 1;
	for (int i = small; i >= 1; i--)
		mother *= i;
	cout << "だダ"<<mother << endl;
	long long last = son / mother;
	cout << "よ猭计" << last << endl;
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
			cout <<"よ猭计"<< count << endl;
			break;
		}

	}
	system("PAUSE");
	return 0;
}