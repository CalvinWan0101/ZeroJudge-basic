#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//月份天數基本資料，2月預設為0
	int month[12] = { 31,0,31,30,31,30,31,31,30,31,30,31 };
	//閏年規則：4閏40不閏100閏400不閏
	int start[3];
	cout << "開始日期：";
	cin >> start[0] >> start[1] >> start[2];
	int end[3];
	cout << "結束日期：";
	cin >> end[0] >> end[1] >> end[2];
	//開始日期到0001年01月01日的間隔天數
	int YearStart = start[0] * 365 + start[0] / 4 - start[0] / 40 + start[0] / 100 - start[0] / 400;
	if ((start[0] % 4 == 0 || start[0] % 100 == 0) && start[0] % 40 != 0 && start[0] % 400 != 0)
		month[1] = 29;
	else
		month[1] = 28;
	int monthStart=0;
	for (int i = 0; i < start[1] - 1; i++)
		monthStart += month[i];
	int sumStart = YearStart + monthStart + start[2];
	//結束日期到0001年01月01日的間隔天數
	int YearEnd = end[0] * 365 + end[0] / 4 - end[0] / 40 + end[0] / 100 - end[0] / 400;
	if ((end[0] % 4 == 0 || end[0] % 100 == 0) && end[0] % 40 != 0 && end[0] % 400 != 0)
		month[1] = 29;
	else
		month[1] = 28;
	int monthEnd = 0;
	for (int i = 0; i < end[1] - 1; i++)
		monthEnd += month[i];
	int sumEnd = YearEnd + monthEnd + end[2];
	//計算開始日期到0001年01月01日的間隔天數與結束日期到0001年01月01日的間隔天數的差即為兩日期間隔
	cout << "兩日期間隔：" << sumEnd - sumStart << endl;
	system("PAUSE");
	return 0;
}