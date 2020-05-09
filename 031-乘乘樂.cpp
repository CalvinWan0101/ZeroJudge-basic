#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	int A[500];
	int number;
	int sum;
	cout << "測試資料量：";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		//清空整列A使其所有項=1
		for (int i = 0; i < number; i++)
			A[i] = 1;
		//清空sum
		sum = 1;
		//input
		cout << "第一個數：";
		cin >> a;
		//轉換string為int陣列
		for (int i = 0; i < a.length(); i++)
		{
			stringstream transferA;
			transferA << a[i];
			transferA >> A[i];
		}
		//計算相乘的值
		for (int i = 0; i < a.length(); i++)
			sum *= A[i];
		//印出來
		cout << "值=" << sum << endl;
	}
	system("PAUSE");
	return 0;
}