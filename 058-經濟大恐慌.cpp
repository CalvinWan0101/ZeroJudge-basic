#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[100];
	int n;
	cin >> n;
	for (int i = 1; i <=n; i++)
	{
		cout << "第" << i  << "天買的饅頭量：";
		cin >> array[i];
	}
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += array[i]*i;
	cout << "總價：" << sum << endl;
	system("PAUSE");
	return 0;
}