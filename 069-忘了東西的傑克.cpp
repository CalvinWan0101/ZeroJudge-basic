#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int H1, M1, H2, M2;
	int need;
	cout << "�{�b�ɶ��G";
	cin >> H1 >> M1;
	cout << "�o���ɶ��G";
	cin >> H2 >> M2;
	cout << "�Ӧ^�һݮɶ��G";
	cin >> need;
	if (M1 > M2)
	{
		M2 += 60;
		H2 -= 1;
	}
	int count = (H2 - H1) * 60 + M2 - M1;
	if (need > count)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	system("PAUSE");
	return 0;
}