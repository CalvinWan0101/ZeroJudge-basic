#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a, b, c;
	double x1, x2,x3;
	cin >> a >> b >> c;
	if (pow(b,2) - 4 * a * c > 0) {
		x1 = (-b + sqrt(b * b - 4 * a * c)) /( 2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		cout << "�Ĥ@�� x1=" << x1 << " , �ĤG�ѵ� x2=" << x2;
	}
	else if ((pow(b,2) - 4 * a * c) == 0) {
		x3 = (-b + sqrt(b * b - 4 * a * c)) /( 2 * a);
		cout << "�ߤ@��=" << x3;
	}
	else
		cout << "�L��Ƹ�";
	system("PAUSE");
	return 0;
}