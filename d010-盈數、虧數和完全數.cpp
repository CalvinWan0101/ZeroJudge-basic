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
			cout << "������" << endl;
		else if (count > n)
			cout << "�ռ�" << endl;
		else
			cout << "����" << endl;
	}
	return 0;
}