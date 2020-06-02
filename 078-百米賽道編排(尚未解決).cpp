#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int number[16];
	double score[16];
	for (int i = 0; i < 16; i++)
	{
		cin >> number[i];
		cin >> score[i];
	}
	double buffer;
	for (int i = 0; i < 16; i++)
		for (int j = i; j < 16; j++)
			if (score[i] > score[j])
			{
				buffer = score[i];
				score[i] = score[j];
				score[j] = buffer;
				buffer = number[i];
				number[i] = number[j];
				number[j] = buffer;
			}
	cout << endl;
	for (int i = 0; i < 16; i++)
		cout << setw(2) << number[i] << " " << setw(5) << score[i] << endl;
	system("PAUSE");
	return 0;
}