#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int limit;
	int count[3] = {0,0,0};
	int orgin[100];
	cout << "請輸入元素個數" << endl;
	cin >> limit;
	cout << "請輸入各元素" << endl;
	for (int w = 0; w < limit; w++)
	{
		cin >> orgin[w];
		cout << "第" << w + 1 << "個元素輸入完畢" << endl;
	}
	cout << "所輸入的陣列為" << endl;
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
	cout <<setw(8)<< "3n有" << count[0] <<"個"<< endl;
	cout <<setw(8)<< "3n+1有" << count[1] <<"個"<< endl;
	cout << setw(8)<<"3n+2有" << count[2] <<"個"<< endl;
	system("PAUSE");
	return 0;
}