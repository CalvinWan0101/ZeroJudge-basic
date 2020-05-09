#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	long long n, m;
	cout << "起始數字：";
	cin >> n;
	cout << "和上限：";
	cin >> m;
	//endless cycle
	int sum = 0;
	int buffer = 0;
	for (;;)
	{
		sum += n;
		sum += buffer;
		buffer++;
		if (sum > m)
		{
			cout << buffer<<endl;
			break;
		}
	}
	system("PAUSE");
	return 0;
}