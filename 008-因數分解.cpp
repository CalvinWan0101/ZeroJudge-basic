#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cin >> n;
		for (int i = 2; i <= n; i++)
		{
			int count = 0;
			while (n % i == 0)
			{
				count++;
				n /= i;
			}
				if (count == 1)
					cout << i << ((n == 1) ? "\n" : "*");
				else if (count > 1)
					cout << i << "^" << count << ((n == 1) ? "\n" : "*");
		}
	system("PAUSE");
	return 0;
}