#include <iostream>
using namespace std;
int main()
{
	int n, count;
	while (cin >> n)
	{
		count = 0;
		for (int i = 1; i < n; i++)
			if (n % i == 0)
				count += i;
		if (count == n)
			cout << "完全數" << endl;
		else if (count > n)
			cout << "盈數" << endl;
		else
			cout << "虧數" << endl;
	}
	return 0;
}