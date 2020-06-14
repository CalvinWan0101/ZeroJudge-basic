#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a, b;
	int logic;
	//a為連接詞b為母子串
	while (true)
	{
		getline(cin, a);
		getline(cin, b);
		logic = 0;
		for (int i = 0; i < b.length(); i++)
			for (int j = i; j < b.length() - a.length(); j++)
			{
				//以j為起點，距離為a.length()去做判斷
				for (int k = i; k < i + a.length(); k++)
					if (k-i)
						cout << endl;
			}
	}
	system("PAUSE");
	return 0;
}