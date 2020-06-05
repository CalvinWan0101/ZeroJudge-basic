#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int big;
	cout << "平民窟數量：";
	cin >> big;
	int small;
	cout << "欲拆除數量：";
	cin >> small;
	//分子
	long long son = 1;
	for (int i = 0; i < small; i++)
		son *= (big - i);
	cout <<"分子"<<son << endl;
	//分母
	long long mother = 1;
	for (int i = small; i >= 1; i--)
		mother *= i;
	cout << "分母"<<mother << endl;
	long long last = son / mother;
	cout << "方法數：" << last << endl;
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
			cout <<"方法位數"<< count << endl;
			break;
		}

	}
	system("PAUSE");
	return 0;
}
