#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int limit;
	int count[3] = {0,0,0};
	int orgin[100];
	cout << "�п�J�����Ӽ�" << endl;
	cin >> limit;
	cout << "�п�J�U����" << endl;
	for (int w = 0; w < limit; w++)
	{
		cin >> orgin[w];
		cout << "��" << w + 1 << "�Ӥ�����J����" << endl;
	}
	cout << "�ҿ�J���}�C��" << endl;
	for (int v = 0; v < limit; v++)
	{
		cout << setw(2) << orgin[v];
	}
	cout << endl;
	for (int i = 0; i < limit; i++)
	{
		//3n
		if (orgin[i] % 3 == 0)
			count[0]++;
		//3n+1
		else if ((orgin[i] - 1) % 3 == 0)
			count[1]++;
		//3n+2
		else if ((orgin[i] - 2) % 3 == 0)
			count[2]++;
	}
	cout <<setw(8)<< "3n��" << count[0] <<"��"<< endl;
	cout <<setw(8)<< "3n+1��" << count[1] <<"��"<< endl;
	cout << setw(8)<<"3n+2��" << count[2] <<"��"<< endl;
	system("PAUSE");
	return 0;
}