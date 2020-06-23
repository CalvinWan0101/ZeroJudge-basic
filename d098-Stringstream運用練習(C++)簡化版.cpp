#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int start, end, know, count, powten, len;
	while (getline(cin, a))
	{
		count = 0;
		start = 0;
		while (true)
		{
			know = 0;
			len = a.length();
			//тend竚end沧翴獽琌a.length()-1
			for (end = start + 1; end < len; end++)
				if (a[end] == ' ')
					break;
			//耞琌场常琌计
			for(int i=start;i<end;i++)
				if (a[i] > '9' || a[i] < '0')
				{
					know = 1;
					break;
				}
			//狦琌计玥璸衡ず甧羆㎝
			if (know == 0)
			{
				powten = 1;
				for (int i = end - 1; i >= start; i--)
				{
					count += (a[i] - '0') * powten;
					powten *= 10;
				}
			}
			if (end == len)
				break;
			else
				for(start=end+1;start<len;start++)
					if (a[start] != '0')
						break;
		}
		cout << count << endl;
	}
	return 0;
}