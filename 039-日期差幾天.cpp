#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//����Ѽư򥻸�ơA2��w�]��0
	int month[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
	//�|�~�W�h�G4�|40���|100�|400���|
	int start[3];
	cout << "�}�l����G";
	cin >> start[0] >> start[1] >> start[2];
	int end[3];
	cout << "��������G";
	cin >> end[0] >> end[1] >> end[2];
	//�}�l�����0001�~01��01�骺���j�Ѽ�
	int YearStart = start[0] * 365 + start[0] / 4 - start[0] / 40 + start[0] / 100 - start[0] / 400;
	if ((start[0] % 4 == 0 || start[0] % 100 == 0) && start[0] % 40 != 0 && start[0] % 400 != 0)
		month[1] = 29;
	else
		month[1] = 28;
	int monthStart=0;
	for (int i = 0; i < start[1] - 1; i++)
		monthStart += month[i];
	int sumStart = YearStart + monthStart + start[2];
	//���������0001�~01��01�骺���j�Ѽ�
	int YearEnd = end[0] * 365 + end[0] / 4 - end[0] / 40 + end[0] / 100 - end[0] / 400;
	if ((end[0] % 4 == 0 || end[0] % 100 == 0) && end[0] % 40 != 0 && end[0] % 400 != 0)
		month[1] = 29;
	else
		month[1] = 28;
	int monthEnd = 0;
	for (int i = 0; i < end[1] - 1; i++)
		monthEnd += month[i];
	int sumEnd = YearEnd + monthEnd + end[2];
	//�p��}�l�����0001�~01��01�骺���j�ѼƻP���������0001�~01��01�骺���j�Ѽƪ��t�Y���������j
	cout << "�������j�G" << sumEnd - sumStart << endl;
	system("PAUSE");
	return 0;
}