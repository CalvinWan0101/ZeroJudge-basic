#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b,cou;
	cout << "請輸入兩相異整數，先小後大" << endl;
	cin >> a >> b;
	for (int i = a; pow(i, 2) <= b; i++)
	{
		if ((pow(i, 2) >= a) && (pow(i, 2) <= b))
			cou += pow(i, 2);
	}
	cout << "範圍內完全平方和為" << cou << endl;
	system("PAUSE");
	return 0;
}