#include <iostream>
#include<string>
using namespace std;
int main(int argc, char** argv)
{
	//�j�ư��k
	string a;
	int array[10000] = { 0 };
	int sum;
	while (cin >> a)
	{
		sum = 0;
		for (int i = 0; i < a.length(); i++)
		{
			array[i] = a[i];
			array[i] -= 48;
		}
		//���ɡi-�j���Ȭ�-3
		//����
		if (array[0] != -3)
		{
			for (int i = 0; i < a.length(); i++)
			{
				sum += array[i];
				sum %= 3;
				if (i == a.length() - 1 && sum != 0)
					cout << "no" << endl;
				else if (i == a.length() - 1 && sum == 0)
					cout << "yes" << endl;
			}
		}
		//�D�ػ{�w0��3������
		else if (array[0] == 0)
			cout << "yes" << endl;
		//�t��
		else
		{
			for (int i = 1; i < a.length(); i++)
			{
				sum += array[i];
				sum %= 3;
				if (i == a.length() - 1 && sum != 0)
					cout << "no" << endl;
				else if (i == a.length() - 1 && sum == 0)
					cout << "yes" << endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}