#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int H1, M1, H2, M2;
	int need;
	cout << "現在時間：";
	cin >> H1 >> M1;
	cout << "發車時間：";
	cin >> H2 >> M2;
	cout << "來回所需時間：";
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