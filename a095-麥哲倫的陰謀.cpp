#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int N, M;
	cout << "總人數：";
	cin >> N;
	cout << "紅帽數：";
	cin >> M;
	//全部都是紅帽
	if(N==M)
		cout << "天數：" << M  << endl;
	else
	cout << "天數：" << M + 1 << endl;
	system("PAUSE");
	return 0;
}
