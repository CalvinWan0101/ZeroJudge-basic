#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	cout << "�����G";
	cin >> a;
	int b;
	cout << "�����G";
	cin >> b;
	int d;
	cout << "���t�G";
	cin >> d;
	for (int i = a; i <= b; i+=d)
		cout << i << " ";
	system("PAUSE");
	return 0;
}