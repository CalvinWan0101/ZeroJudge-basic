#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	string a;
	string b;
	int front = 0, back = 0, point = 0;
	//buffer陣列用來暫時存取轉換字串
	int buffer[100] = { 0 };
	int sudden = 0;
	//placeA存入位置，numberA存入數值
	int placeA[100] = { -1 };
	int numberA[100] = { -1 };
	//處理輸入A字串
	cout << "向量A：" << endl;
	for (int o = 1;; o++)
	{
		cin >> a;
		for (int i = 0; i < a.length(); i++)
			if (a[i] == ':')
				point = i;
		//【:】前數值位置(非記憶體位置,從1開始)
		for (int i = 0; i < point; i++)
			buffer[i] = a[i];
		for (int i = 0; i < point; i++)
			buffer[i] -= 48;
		//轉換為一個整數存進變數sudden再存入placeA陣列
		for (int i = 0; i < point; i++)
			sudden += buffer[i] * pow(10, point - 1 - i);
		placeA[o] = sudden;
		sudden = 0;
		//【:】後數值
		for (int i = point + 1; i < a.length(); i++)
			buffer[i] = a[i];
		for (int i = point + 1; i < a.length(); i++)
			buffer[i] -= 48;
		for (int i = point + 1; i < a.length(); i++)
			sudden += buffer[i] * pow(10, a.length() - 1 - i);
		numberA[o] = sudden;
		sudden = 0;
		if (a == "0:0")
			break;
		front = back = point = 0;
	}
	//placeB存入位置，numberB存入數值
	int placeB[100] = { -1 };
	int numberB[100] = { -1 };
	//處理輸入B字串
	
	cout << "向量B：" << endl;
	
	for (int o = 1;; o++)
	{
		cin >> b;
		for (int i = 0; i < b.length(); i++)
			if (b[i] == ':')
				point = i;
		//【:】前數值位置(非記憶體位置,從1開始)
		for (int i = 0; i < point; i++)
			buffer[i] = b[i];
		for (int i = 0; i < point; i++)
			buffer[i] -= 48;
		//轉換為一個整數存進變數sudden再存入placeA陣列
		for (int i = 0; i < point; i++)
			sudden += buffer[i] * pow(10, point - 1 - i);
		placeB[o] = sudden;
		sudden = 0;
		//【:】後數值
		for (int i = point + 1; i < b.length(); i++)
			buffer[i] = b[i];
		for (int i = point + 1; i < b.length(); i++)
			buffer[i] -= 48;
		for (int i = point + 1; i < b.length(); i++)
			sudden += buffer[i] * pow(10, b.length() - 1 - i);
		numberB[o] = sudden;
		sudden = 0;
		if (b == "0:0")
			break;
		front = back = point = 0;
	}
	//開始比較placeA和placeB的差異，如果兩者皆!=(-1)
	//則計算兩者對應位置numberA*numberB的值
	int sum=0;
	//逐項比較
	for (int i = 1;i<100; i++)
		for(int j=1;j<100;j++)
	if (placeA[i] == placeB[j] && placeA[i] != -1)
		sum += numberA[i] * numberB[j];
	cout << "最終值：" << sum << endl;
	
	system("PAUSE");
	return 0;
}