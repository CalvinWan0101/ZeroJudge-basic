#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int num;
	cout << "���N�~�ƶq�G";
	cin >> num;
	double value[2];
	for (int i = 0; i < num; i++)
	{
		cout << "�����B�G";
		cin >> value[0];
		cout << "�ثe���ȡG";
		cin >> value[1];
		cout<<"��Q�v�G"<<((value[1] - value[0]) / value[0])*100<<"%"<<endl;
		if (((value[1] - value[0]) / value[0]) * 100 >= 10 || ((value[1] - value[0]) / value[0]) * 100 <= -7)
			cout << "dispose" << endl;
		else
			cout << "keep" << endl;
	}
	system("PAUSE");
	return 0;
}