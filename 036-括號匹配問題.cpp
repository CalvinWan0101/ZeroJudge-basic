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
			//�X�k�ǰt���A�� �A �q���צC���}�Y�쵪�צC�Y�@�I�A���A�����ƥû��j�󵥩�k�A��!
			//1�N��]�A2�N��^
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
			//�p�⥪�k�A���X�{������
			countL = 0;
			countR = 0;
			for (int i = 1; i <= 2 * n; i++)
			{
				if (array[i] == 1)
					countL++;
				else if (array[i] == 2)
					countR++;
			}
			//�X�k�ǰt���A�� �A �q���צC���}�Y�쵪�צC�Y�@�I�A���A�����ƥû��j�󵥩�k�A��!
			//1�N��]�A2�N��^
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
	//cout << "�A����ơG";
	while (cin >> n)
	{
		//�Q�k�G
		//�Q�Φ^���k�A�h�Ƭ�2n,��0,1��إi��
		//�M��d�U���A���P�k�A���X�{���ƬۦP�����p
		print(1, n, array);
	}
	system("PAUSE");
	return 0;
}