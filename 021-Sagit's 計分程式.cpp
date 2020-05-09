#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int in, score;
	cin >> in;
	if (in <= 10)
		score = in * 6;
	else if (in <= 20)
		score = 60 + (in - 10) * 2;
	else if (in <= 40)
		score = 60 + 20 + (in - 20) * 1;
	else
		score = 100;
	cout << "¤À¼Æ=" << score << endl;
	system("PAUSE");
	return 0;
}