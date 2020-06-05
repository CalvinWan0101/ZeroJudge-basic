#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	long long n, m;
	cout << "°_©l¼Æ¦r¡G";
	cin >> n;
	cout << "©M¤W­­¡G";
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
