#include <iostream>
using namespace std;
void cat(int a)
{
}
int main(int argc, char** argv)
{
	int number;
	int answer;
	//資料量：1<=number<=30
	//和：1<=answer<=100000000
	//若無解則印出-1
	int array[30] = { 0 };
	cout << "數據量：";
	cin >> number;
	cout << "目標和：";
	cin >> answer;
	for (int i = 0; i < number; i++)
	{
		cout << "第" << i + 1 << "個數據：";
		cin >> array[i];
	}
	cout << endl;

	for(int)
	//選取2個數字相加
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (i != j && array[i] + array[j] == answer&&array[i]<=array[j])
				cout << array[i] << " " << array[j] << endl;
	//選取3個數字相加
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 4; k++)
				if (i != j && i != k && j != k && array[i] + array[j] + array[k] == answer&&array[i]<=array[j]&&array[j]<=array[k])
					cout << array[i] << " " << array[j] << " " << array[k] << endl;
	//選取4個數字相加
	int sum = 0;
	for (int i = 0; i < 4; i++)
		sum += array[i];
	if (sum == answer)
		for (int i = 0; i < 4; i++)
			cout << array[i] << " ";
	cout << endl;

	system("PAUSE");
	return 0;
}
