#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//n�ح����An�ع�����
	//m�ئY�k�A�_�I~���I
	int array[1001] = { 0 };
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> array[i];
	int buffer[2];
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum = 0;
		cin >> buffer[0] >> buffer[1];
		for (int j = buffer[0]; j <= buffer[1]; j++)
			sum += array[j];
		cout << sum << endl;
	}
	system("PAUSE");
	return 0;
}