#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "��μƶq�G";
	cin >> n;
	int array[100];
	for (int i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "�ڤ�Ϊ��סG";
		cin >> array[i];
	}
	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
			{
				if (i != j && i != k && j != k)
					if (pow(array[i], 2) + pow(array[j], 2) == pow(array[k], 2) ||
						pow(array[i], 2) + pow(array[k], 2) == pow(array[j], 2) ||
						pow(array[j], 2) + pow(array[k], 2) == pow(array[i], 2))
						if (array[i] > array[j] && array[j] > array[k])
							count++;
			}
	cout << "�i�H�c��" << count << "�ت����T����" << endl;
	system("PAUSE");
	return 0;
}