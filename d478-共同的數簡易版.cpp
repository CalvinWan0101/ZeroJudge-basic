#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int bucket[240] = { 0 };
	int n, m;
	int a;
	int count;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		count = 0;
		for (int i = 0; i < 240; i++)
			bucket[i] = 0;
		for (int i = 1; i <= 2 * m; i++)
		{
			cin >> a;
			bucket[a]++;
		}
		for (int i = 0; i < 240; i++)
			if (bucket[i] >= 2)
				count++;
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}