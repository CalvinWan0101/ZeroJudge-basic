#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	int count, array[10000], start = -1, end = -1, dis;
	while (getline(cin, a))
	{
		count = 0;
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		while (true)
		{
			//最初的start
			if (start == -1)
			{
				for (int i = 0; i < a.length(); i++)
					if (array[i] != -16)
					{
						start = i;
						break;
					}
			}
			//後來的start
			else
				for (int i = end; i < a.length(); i++)
					if (array[i] != -16 || i == a.length() - 1)
					{
						start = i;
						break;
					}
			if (start == a.length() - 1)
				break;
			//end跟進
			for (int i = start; i < a.length(); i++)
				if (array[i] == -16)
				{
					end = i;
					break;
				}
			dis = end - start - 1;
			for (int i = start; i < end; i++)
			{
				count += array[i] * pow(10, dis);
				dis--;
			}
		}
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}