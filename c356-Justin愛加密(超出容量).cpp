#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	string input;
	cin >> n >> input;
	for (int i = 0; i < n * n; i += n + 1)
		cout << input[i];
	system("PAUSE");
	return 0;
}