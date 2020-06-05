#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	int array[100];
	cout << "項數：";
	cin >> n;
	int buffer = 0;
	int sum = 0;
	//計算方程式f(x)
	for (int i = 1; i <= n; i++)
	{
		buffer++;
		sum += buffer;
		array[i] = sum;
	}
	cout << "f(" << n << ")=" << sum << endl;
	//計算方程式g(x)
	int sumg = 0;
	for (int i = 1; i <= n; i++)
		sumg += array[i];
	cout << "g(" << n << ")=" << sumg << endl;
	system("PAUSE");
	return 0;
}
