#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	int a;
	int array[1000];
	cout << "資料量：";
	cin >> a;
	cout << "請輸入資料" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << "第" << i << "個資料：";
		cin >> array[i];
	}
	//印出排序前
	cout << "排序前：";
	for (int i = 0; i < a; i++)
		cout << setw(4) << array[i];
	int buffer;
	//bubble sort
	for(int i=0;i<a;i++)
		for(int j=0;j<a;j++)
			if (array[j] > array[j + 1])
			{
				buffer = array[j];
				array[j] = array[i];
				array[i] = buffer;
			}
	//印出排序後
	cout << endl << "排序後：";
	for (int i = 0; i < a; i++)
		cout << setw(4) << array[i];
	system("PAUSE");
	return 0;
}