#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	int array[100];
	cout << "¬ì¥Ø¶q¡G";
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> array[i];
	
	double sum=0;
	for (int i = 0; i < n; i++)
		sum += array[i];

	cout <<"¥­§¡¬°"<<sum / n << endl;
	if (sum / 3 > 59)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("PAUSE");
	return 0;
}
