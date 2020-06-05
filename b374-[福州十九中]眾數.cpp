#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "數據量：";
	cin >> n;
	int array[10000];
	for (int i = 0; i < n; i++)
		cin >> array[i];
	int bucket[30001] = {0};
	//將數字存入相對應的桶子
	for (int i = 0; i < n; i++)
		bucket[array[i]]++;
	//搜尋所有桶子中出現的次數最多的仔
	int large=0;
	for (int i = 0; i < 30001; i++)
		if (bucket[i] > large)
			large = bucket[i];
	//帶著找出來的large再回去找出現【large】次的數字
	for (int i = 0; i < 30001; i++)
		if (bucket[i] == large)
			cout << i << " " << bucket[i] << endl;
	system("PAUSE");
	return 0;
}
