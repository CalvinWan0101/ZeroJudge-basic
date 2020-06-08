#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int array[4];
	int buffer;
	while (cin >> array[1] >> array[2] >> array[3])
	{
		//±Æ§Ç
		for (int i = 1; i <= 2; i++)
			for (int j = 2; j <= 3; j++)
				if (array[j] < array[i])
				{
					buffer = array[i];
					array[i] = array[j];
					array[j] = buffer;
				}
		int a = array[1];
		int b = array[2];
		int c = array[3];
		if (a * a + b * b == c * c)
			cout << "right triangle" << endl;
		else if (a * a + b * b < c * c)
			cout << "obtuse triangle" << endl;
		else if (a * a + b * b > c * c)
			cout << "acute triangle" << endl;
	}
	system("PAUSE");
	return 0;
}