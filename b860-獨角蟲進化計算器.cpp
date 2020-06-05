#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "糖果數：";
	cin >> n;
	int before;
	cout << "獨角仙數：";
	cin >> before;
	//進化後的數量
	int after=0;
	int count = 0;
	while (before + after + n >= 12)
	{
		if (n >= 12)
		{
			n -= 12;
			before--;
			after++;
			count++;
			n++;
		}
		else if (n < 12 && after + n >= 12)
		{
			n -= n;
			after -= (12 - n);
			before--;
			after++;
			count++;
			n++;
		}
		else if (n < 12 && after + n < 12 && before + after + n >= 13)
		{
			n -= n;
			after -= after;
			before--;
			before -= (12 - n - after);
			after++;
			count++;
			n++;
		}
		else
			break;
	}
	cout << count << endl;
	system("PAUSE");
	return 0;
}
