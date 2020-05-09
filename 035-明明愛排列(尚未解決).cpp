#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int number;
	int array[1000];
	cout << "資料量：";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cout << "第" << i+1 << "個資料：";
		cin >> array[i];
	}

	system("PAUSE");
	return 0;
}