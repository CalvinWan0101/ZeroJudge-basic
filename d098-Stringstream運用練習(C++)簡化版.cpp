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
			//��Xend��m�Aend�����I�K�Oa.length()-1
			for (end = start + 1; end < len; end++)
				if (a[end] == ' ')
					break;
			//�P�_�O�_�������O�Ʀr
			for(int i=start;i<end;i++)
				if (a[i] > '9' || a[i] < '0')
				{
					know = 1;
					break;
				}
			//�p�G�O�Ʀr�h�p�⤺�e���`�M
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