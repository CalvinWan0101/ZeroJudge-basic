#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//�褸�~�Q4�㰣�B���Q100�㰣�A�γQ400�㰣�̧Y���|�~
	int year;
	for(int i=1;i<=2;i++)
	{
		cout << "�п�J�z�ҷQ�n�d�ߪ��~��" << endl;
	cin >> year;
	if (year % 400 == 0)
		cout << year << "�~�O�|�~" << endl;
	else if (year % 4 == 0 && year % 100 != 0)
		cout << year << "�~�O�|�~" << endl;
	else
		cout << year << "�O���~" << endl;
	}
	system("PAUSE");
	return 0;
}
