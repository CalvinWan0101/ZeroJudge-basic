#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	//start為起始點，end為結束後一點
	int start = 0, end = 0;
	getline(cin, a);
	while (true)
	{
		//尋找end
		for (int i = start; i < a.length(); i++)
			if (a[i] == ' ' || i == a.length() - 1)
			{
				end = i;
				break;
			}
		if (end != a.length() - 1)
			for (int i = start; i < end; i++)
				cout << a[i];
		else
			for (int i = start; i <= end; i++)
				cout << a[i];
		cout << endl;
		if (end == a.length() - 1)
			break;
		//更新start
		start = end + 1;
	}
	system("PAUSE");
	return 0;
}