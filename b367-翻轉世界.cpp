#include <iostream>
using namespace std;
int main()
{
	int count;
	int n;
	int y, x;
	cin >> n;
	int map[12][12] = { 0 };
	int orgin[12][12] = { 0 };
	for (int i = 0; i < n; i++)
	{
		cin >> y >> x;
		for (int i = 0; i < y; i++)
			for (int j = 0; j < x; j++)
			{
				cin >> map[i][j];
				orgin[i][j] = map[i][j];
			}
		cout << "��l�}�C�G" << endl;
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
				cout << map[i][j] << " ";
			cout << endl;
		}
		//x����
		int buffer;
		for (int i = 0; i < y; i++)
			for (int j = 0; j < x; j++)
			{
				buffer = map[i][j];
				map[i][j] = map[i][x - 1 - j];
				map[i][x - 1 - j] = buffer;
				if (x - 1 - j - j == 0 || x - 1 - j - j == 1)
					break;
			}
		cout << "x������G" << endl;
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
				cout << map[i][j] << " ";
			cout << endl;
		}
		//y����
		for (int i = 0; i < x; i++)
			for (int j = 0; j < y; j++)
			{
				buffer = map[j][i];
				map[j][i] = map[y - 1 - j][i];
				map[y - 1 - j][i] = buffer;
				if (y - 1 - j - j == 1 || y - 1 - j - j == 0)
					break;
			}
		cout << "y������G" << endl;
		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
				cout << map[i][j] << " ";
			cout << endl;

			count = 0;
			for (int i = 0; i < y; i++)
				for (int j = 0; j < x; j++)
				{
					if (orgin[i][j] != map[i][j])
						count = 1;
				}
			if (count == 0)
				cout << "go forward" << "\n";
			else
				cout << "keep defending" << "\n";
		}
		system("PAUSE");
		return 0;
	}