#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int bucket[4] = { 0 };
	int n, a;
	cin >> a;
	while (cin >> n)
		bucket[n]++;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= bucket[i]; j++)
			cout << i << " ";
	}
	system("PAUSE");
	return 0;
}