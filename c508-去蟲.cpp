#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n, buffer;
	int array[100000];
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
			cin >> array[i];
		//°òÂ¦±Æ§Çªk
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (array[i] > array[j])
				{
					buffer = array[i];
					array[i] = array[j];
					array[j] = buffer;
				}
		for (int i = 0; i < n; i++)
			cout << array[i]<<" ";
		cout << endl;
		for (int i = n - 1; i >= 0; i--)
			if (i == n - 1)
				cout << array[i]<<" ";
			else if (array[i] != array[i + 1] && i !=n-1 )
				cout << array[i]<<" ";
		cout << endl;
	}
	system("PAUSE");
	return 0;
}