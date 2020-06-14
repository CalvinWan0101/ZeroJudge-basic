#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while (getline(cin,a))
		cout << "Go, " << a << ", go go" << endl;
	return 0;
}