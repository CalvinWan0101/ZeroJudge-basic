#include<iostream>
using namespace std;
int main()
{
	double n;
	while (cin >> n)
		printf("%.3lf \n", (n + 40) / 1.8 - 40);
	return 0;
}