#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a, b;
	int logic;
	//a���s����b�����l��
	while (true)
	{
		getline(cin, a);
		getline(cin, b);
		logic = 0;
		for (int i = 0; i < b.length(); i++)
			for (int j = i; j < b.length() - a.length(); j++)
			{
				//�Hj���_�I�A�Z����a.length()�h���P�_
				for (int k = i; k < i + a.length(); k++)
					if (k-i)
						cout << endl;
			}
	}
	system("PAUSE");
	return 0;
}