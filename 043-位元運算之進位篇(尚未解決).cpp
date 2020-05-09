#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int in;
	cout << "測資：";
	cin >> in;
	int array[1000];
	int a = in / 2;
	int b = in % 2;
	for (int i = 0; i < a; i++)
		array[i] = 1;
	if (b == 0)
		array[a] = 0;
	else
		array[a] = 1;
	for (int i = 0; i < a; i++)
		cout << array[i];
	//計算到0前1的數量
	cout << endl;
	int sum = 0;
	for (int i = 0; i < a; i++)
	{
		if (array[a - i] == 1)
			sum++;
		else if (array[a - i] == 0)
			break;
	}
	cout << sum << endl;
	system("PAUSE");
	return 0;
}