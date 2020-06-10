#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int x, a, b;
	int n;
	int count=1001;
	while (cin >> n)
	{
		for (int i = 1; i <= n; i++)
		{
			count = 1001;
			cin >> x >> a >> b;
			for(int i=0;i<=x;i++)
				for (int j = 0; j <= x; j++)
				{
					if (a * i + b * j == x&& i + j < count)
							count = i + j;
				}
			if (count != 1001)
				cout << count << endl;
			else
				cout << "-1" << endl;
		}
	}
	system("PAUSE");
	return 0;
}