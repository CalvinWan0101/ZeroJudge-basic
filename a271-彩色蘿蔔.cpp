#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//代號1=紅蘿蔔 +xg
	//代號2=白蘿蔔 +yg
	//代號3=黃蘿蔔  -zg
	//代號4=黑蘿蔔 -wg(且附帶中毒效果)
	//代號0=什麼都沒有吃
	//中毒效果：
	//1.每天-ng(當天不算)
	//2.可疊加
	//初始體重=m

	int number;
	cout << "測資數量：";
	cin >> number;
	cout << endl;
	int x, y, z, w, n, m;
	string input;
	int array[100000] = { 0 };
	for (int i = 0; i < number; i++)
	{
		//第一行輸入x,y,z,w,n,m
		cout << "紅蘿蔔數值：";
		cin >> x;
		cout << "白蘿蔔數值：";
		cin >> y;
		cout << "黃蘿蔔數值：";
		cin >> z;
		z *= (-1);
		cout << "黑蘿蔔數值：";
		cin >> w;
		w *= (-1);
		cout << "中毒效果的傷害：";
		cin >> n;
		n *= (-1);
		cout << "原始體重：";
		cin >> m;
		cout << endl << "每天所食用蘿蔔的排列組合：";
		//第二行輸入各種蘿蔔的排列組合
		cin >> input;
		//轉換輸入的string為int陣列
		for (int i = 0; i < input.length(); i++)
		{
			stringstream transferA;
			transferA << input[i];
			transferA >> array[i];
		}
		//一個可以疊加且改變的中毒屬性
		int ill = 0;
		//總體重
		int sum = m;
		//讀取int陣列並計算兔子的體重
		for (int i = 0; i < input.length(); i++)
		{
			sum += ill;
			switch (array[i])
			{
			case 0:
				sum += 0;
			case 1:
				sum += x;
				break;
			case 2:
				sum += y;
				break;
			case 3:
				sum += z;
				break;
				//case4為黑蘿蔔需計算中毒效果
			case 4:
				sum += w;
				ill += n;
				break;
			}
			if (sum <= 0)
			{
				cout << "bye~Rabbit" << endl;
				break;
			}

		}
		if (sum > 0)
			cout << "體重：" << sum << endl;
	
	}
	system("PAUSE");
	return 0;
}
