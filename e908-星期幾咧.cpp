#include <iostream>
#include <string>
using namespace std;
int main()
{
	long long int n;
	string a;
	int count = 0;
	while (cin >> a >> n)
	{
		count = 0;
		if (a[0] == 'M' && a[1] == 'o')
			count += 1;
		else if (a[0] == 'T' && a[1] == 'u')
			count += 2;
		else if (a[0] == 'W' && a[1] == 'e')
			count += 3;
		else if (a[0] == 'T' && a[1] == 'h')
			count += 4;
		else if (a[0] == 'F' && a[1] == 'r')
			count += 5;
		else if (a[0] == 'S' && a[1] == 'a')
			count += 6;
		else if (a[0] == 'S' && a[1] == 'u')
			count += 7;
		count += n;
		count %= 7;
		switch (count)
		{
		case 0:
			cout << "Sunday" << endl;
			break;
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		}
	}
	return 0;
}