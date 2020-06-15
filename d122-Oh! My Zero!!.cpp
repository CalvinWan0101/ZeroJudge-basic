#include <iostream>
using namespace std;
int  pt(short in)
{
	int out = 1;
	for (short i = 1; i <= in; i++)
		out *= 5;
	return out;
}
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		for (int i = 1; pt(i) <= n && i <= 13; i++)
			count += n / pt(i);
		cout << count << endl;
	}
}