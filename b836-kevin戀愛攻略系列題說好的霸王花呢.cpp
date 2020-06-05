#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "ªáÃ¤¶q¡G";
	cin >> n;
	int m;
	cout << "ªáÃ¤­¿²v¡G";
	cin >> m;
	int count=0;
	for (int i = 0;; i++)
	{
		count += (i * m+1);
		if (count >= n)
			break;
	}
	if (count == n)
		cout << "Go Kevin!!" << endl;
	else
		cout << "No Stop!!" << endl;
	system("PAUSE");
	return 0;
}
