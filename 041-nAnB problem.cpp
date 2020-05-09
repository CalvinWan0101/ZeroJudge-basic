#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char** argv)
{
	string Opa;
	string Oin;
	int password[4] = { 0 };
	int input[4] = { 0 };
	cout << "正確密碼：";
	cin >> Opa;
	cout << "密碼：";
	cin >> Oin;
	//轉換正確密碼
	for (int i = 0; i < 4; i++)
	{
		stringstream transferA;
		transferA << Opa[i];
		transferA >> password[i];
	}
	//轉換輸入密碼
	for (int i = 0; i < 4; i++)
	{
		stringstream transferB;
		transferB << Oin[i];
		transferB >> input[i];
	}
	int countpass[10] = { 0 };
	int countin[10] = { 0 };
	cout << "正確密碼：";
	for (int i = 0; i < 4; i++)
		cout << password[i]<<" ";
	cout << endl;
	cout << "輸入密碼：";
	for (int i = 0; i < 4; i++)
		cout << input[i]<<" ";

	//先計算p
	int p = 0;
	for (int i = 0; i < 4; i++)
		if (input[i] == password[i])
		{
			p++;
			input[i] = 0;
			password[i] = 0;
		}
	cout << endl << "p=" << p << endl;
	//去掉已經確定正確的陣列
	cout << "去掉相對後正確密碼：";
	for (int i = 0; i < 4; i++)
		cout << password[i] << " ";
	cout << endl;
	cout << "去掉相對後輸入密碼：";
	for (int i = 0; i < 4; i++)
		cout << input[i] << " ";
	//輸入正確密碼出現的數字
	for (int i = 0; i < 4; i++)
		countpass[password[i]]++;
	//輸入密碼出現的數字
	for (int i = 0; i < 4; i++)
		countin[input[i]]++;
	//測試
	cout << endl;
	cout << "正確密碼數字出現次數" << endl;
	for (int i = 0; i < 10; i++)
		cout << countpass[i] << " ";
	cout << endl;
	cout << "輸入密碼數字出現次數" << endl;
	for (int i = 0; i < 10; i++)
		cout << countin[i] << " ";
	cout << endl;
	//對比兩個統計用的陣列
	//0的狀況
	int q = 0;
	if (countpass[0] != countin[0])
		if (countpass[0] > countin[0])
			q += (countin[0]-p);
		else
			q += (countpass[0]-p);
	for (int i = 1; i < 10; i++)
		if (countpass[i] != 0 && countin[i] != 0)
			if (countpass[i] > countin[i])
				q += countin[i];
			else
				q += countpass[i];
	cout << p << "A" << q << "B" << endl;
	system("PAUSE");
	return 0;
}