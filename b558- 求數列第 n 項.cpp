#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//f(1)=1
	//f(2)=f(1)+1
	//f(3)=f(2)+2
	//f(n)=1+(1+n-1)*n/2=1+pow(n,2)/2
	int n;
	cin >> n;
	if (n != 1)
		cout << 1 + pow(n, 2) / 2 << endl;
	else
		cout << "1" << endl;
	system("PAUSE");
	return 0;
}
