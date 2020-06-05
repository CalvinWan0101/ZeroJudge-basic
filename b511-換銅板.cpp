#include <iostream>
#include <iomanip>
using namespace std;
int arr[4] = { 0 };
int sum;
void cat(int a, int n, int orgin, int kind[4])
{
	if (a == n-1)
	{
		for (arr[a] = 0; arr[a] <= orgin; arr[a]++)
		{
			sum = 0;
			//計算當前搭配所構成的總金額
			for (int i = 0; i < n; i++)
				sum += (arr[i] * kind[i]);
			//當總金額==原金額時
			if (sum == orgin)
			{
				cout << "(";
				for (int i = 0; i < n; i++)
				{
					if (i != n - 1)
						cout << setw(2) << arr[i] << ",";
					else
						cout << setw(2) << arr[i] << ")" << endl;
				}
			}
		}
		return;
	}
	for (arr[a] = 0; arr[a] <= orgin; arr[a]++)
		cat(a + 1, n, orgin, kind);
}
int main(int argc, char** argv)
{
	int n;
	cout << "銅板種類：";
	cin >> n;
	//種類概念類似倍率
	int kind[4];
	for (int i =0 ; i < n; i++)
	{
		cout << "第" << i + 1 << "種面額：";
		cin >> kind[i];
	}
	int orgin;
	cout << "所給金額：";
	cin >> orgin;
	//回溯法
	cat(0, n, orgin, kind);
	system("PAUSE");
	return 0;
}
