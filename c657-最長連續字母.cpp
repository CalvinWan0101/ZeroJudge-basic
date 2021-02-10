#include <iostream>
#include <string>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string input;
	while (cin >> input)
	{
		char a = input[0], maxchar;
		int num = 0, maxnum = -100;
		//check eachone
		for (int i = 0; i < input.length(); i++)
		{
			if (a == input[i])
			{
				num++;
				if (num > maxnum && i == (input.length() - 10))
				{
					maxnum = num;
					num = 1;
					maxchar = a;
					a = input[i];
				}
			}
			//when (a != input[i] && num > maxnum) upload the maxnum and maxchar
			else if (num > maxnum)
			{
				maxnum = num;
				num = 1;
				maxchar = a;
				a = input[i];
			}
		}
		cout << maxchar << " " << maxnum << endl;
	}
}
