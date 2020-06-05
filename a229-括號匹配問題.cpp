#include <iostream>
#include <string>
using namespace std;
int countL = 0;
int countR = 0;
void print(int floor, int n, int array[27])
{
	int bo = 0;
	if (floor == 2 * n)
	{
		for (array[floor] = 1; array[floor] <= 2; array[floor]++)
		{
			//合法匹配的括號 ， 從答案列的開頭到答案列某一點，左括弧次數永遠大於等於右括弧!
			//1代表（，2代表）
			for (int i = 1; i < 2 * n; i++)
				for (int j = i + 1; j <= 2 * n; j++)
				{
					countL = 0;
					countR = 0;
					if (array[j] == 1)
						countL++;
					else
						countR++;
					if (countL >= countR)
						bo = 1;
					else
						bo = 0;
				}
			//計算左右括號出現的次數
			countL = 0;
			countR = 0;
			for (int i = 1; i <= 2 * n; i++)
			{
				if (array[i] == 1)
					countL++;
				else if (array[i] == 2)
					countR++;
			}
			//合法匹配的括號 ， 從答案列的開頭到答案列某一點，左括弧次數永遠大於等於右括弧!
			//1代表（，2代表）
			if (countL == countR && countL == n && bo == 0)
			{
				for (int i = 1; i <= 2 * n; i++)
				{
					if (i == 2 * n)
					{
						if (array[i] == 1)
							cout << "(" << endl;
						else
							cout << ")" << endl;
					}
					else
					{
						if (array[i] == 1)
							cout << "(";
						else
							cout << ")";
					}
				}
			}

		}
	}
	else
		for (array[floor] = 1; array[floor] <= 2; array[floor]++)
			print(floor + 1, n, array);
}
int main(int argc, char** argv)
{
	int n;
	int array[27];
	//cout << "括號對數：";
	while (cin >> n)
	{
		//想法：
		//利用回溯法，層數為2n,有0,1兩種可能
		//然後留下左括號與右括號出現次數相同的狀況
		print(1, n, array);
	}
	system("PAUSE");
	return 0;
}
