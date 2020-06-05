#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int x;
	int y;
	cin >> x >> y;
	int r = sqrt(x + y);
	int yee = 100 - pow(r, 2);
	if (yee <= 30)
		cout << "sad!" << endl;
	else if (yee <= 60)
		cout << "hmm~~" << endl;
	else if (yee < 100)
		cout << "Happyyummy" << endl;
	system("PAUSE");
	return 0;
}
