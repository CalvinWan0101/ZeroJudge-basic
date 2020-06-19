#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int k, n, m, x, y, count;
	int array[200][200] = { 0 };
	while (cin >> k)
		for (int i = 1; i <= k; i++)
		{
			cin >> n >> m;
			//奇數邊
			if (n % 2 == 1)
			{
				x = y = n / 2 + 1;
				array[y][x] = n * n;
				count = n * n;
			}
			//偶數邊
			else
			{
				if (m == 1)
				{
					x = n / 2;
					y = n / 2 + 1;
					array[y][x] = n * n;
					count = n * n;
				}
				else if (m == 2)
				{
					x = n / 2 + 1;
					y = n / 2;
					array[y][x] = n * n;
					count = n * n;
				}
			}
			if (n % 2 == 1)
				switch (m)
				{
					//順時針
				case 1:
					for (int i = 1;; i += 2)
					{
						//左
						for (int j = 1; j <= i; j++)
						{
							x--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//下
						for (int j = 1; j <= i; j++)
						{
							y++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//右
						for (int j = 1; j <= i + 1; j++)
						{
							x++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//上
						for (int j = 1; j <= i + 1; j++)
						{
							y--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
					}
					for (int i = 1; i <= n; i++)
					{
						for (int j = 1; j <= n; j++)
							cout << setw(5) << array[i][j];
						cout << endl;
					}
					break;
					//順時針
				case 2:
					for (int i = 1;; i += 2)
					{
						//上右下左
						//上
						for (int j = 1; j <= i; j++)
						{
							y--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//右
						for (int j = 1; j <= i; j++)
						{
							x++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//下
						for (int j = 1; j <= i + 1; j++)
						{
							y++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//左
						for (int j = 1; j <= i + 1; j++)
						{
							x--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
					}
					for (int i = 1; i <= n; i++)
					{
						for (int j = 1; j <= n; j++)
							cout << setw(5) << array[i][j];
						cout << endl;
					}
					break;
				}
			else if (n % 2 == 0)
				switch (m)
				{
					//順時針
				case 1:
					for (int i = 1;; i += 2)
					{
						//右
						for (int j = 1; j <= i; j++)
						{
							x++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//上
						for (int j = 1; j <= i; j++)
						{
							y--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//左
						for (int j = 1; j <= i + 1; j++)
						{
							x--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//下
						for (int j = 1; j <= i + 1; j++)
						{
							y++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
					}
					for (int i = 1; i <= n; i++)
					{
						for (int j = 1; j <= n; j++)
							cout << setw(5) << array[i][j];
						cout << endl;
					}
					break;
					//逆時針
				case 2:
					for (int i = 1;; i += 2)
					{
						//下
						for (int j = 1; j <= i; j++)
						{
							y++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//左
						for (int j = 1; j <= i; j++)
						{
							x--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//上
						for (int j = 1; j <= i + 1; j++)
						{
							y--;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
						//右
						for (int j = 1; j <= i + 1; j++)
						{
							x++;
							count--;
							array[y][x] = count;
							if (count == 1)
								break;
						}
						if (count == 1)
							break;
					}
					for (int i = 1; i <= n; i++)
					{
						for (int j = 1; j <= n; j++)
							cout << setw(5) << array[i][j];
						cout << endl;
					}
					break;
				}
			cout << endl;
		}
	return 0;
}
