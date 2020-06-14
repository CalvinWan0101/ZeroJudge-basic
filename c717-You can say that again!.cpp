#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	while (getline(cin, a))
		cout << a << " " << a << endl;
	system("PAUSE");
	return 0;
}