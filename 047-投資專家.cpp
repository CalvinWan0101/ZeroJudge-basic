#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int num;
	cout << "藝術品數量：";
	cin >> num;
	double value[2];
	for (int i = 0; i < num; i++)
	{
		cout << "投資金額：";
		cin >> value[0];
		cout << "目前價值：";
		cin >> value[1];
		cout<<"獲利率："<<((value[1] - value[0]) / value[0])*100<<"%"<<endl;
		if (((value[1] - value[0]) / value[0]) * 100 >= 10 || ((value[1] - value[0]) / value[0]) * 100 <= -7)
			cout << "dispose" << endl;
		else
			cout << "keep" << endl;
	}
	system("PAUSE");
	return 0;
}