#include <iostream>
#include <iomanip>
using namespace std;
//使用dfs進行排列(dfs的bucket需要再思考)
int answer[31];
//記錄array每一項使用狀況
int bucket[31] = { 0 };
int cou;
int know;
//step=層數
//end=最終層數=所取數字量、
//n=母陣列元素量
//m=目標和
void dfs(int step, int end, int n, int m, int array[31])
{
	//int count;
	//尋求結束
	if (step == end + 1)
	{
		cou = 0;
		//know確定後一項永遠大於前一項
		know = 0;
		//注意：dfs最後一層是到end+1
		//初始陣列時第一項為1
		//計算結果
		for (int i = 1; i <= end; i++)
			cou += array[answer[i]];
		//計算know
		for (int i = 1; i <= end - 1; i++)
			for (int j = i + 1; j <= end; j++)
				if (answer[i] > answer[j])
					know = 1;
		if (cou == m && know == 0)
		{
			for (int i = 1; i <= end; i++)
				cout << setw(3) << array[answer[i]];
			cout << endl;
		}
		return;
	}
	//一般狀況
	for (int i = 1; i <= n; i++)
	{
		if (bucket[i] == 0)
		{
			answer[step] = i;
			bucket[i] = 1;
			dfs(step + 1, end, n, m, array);
			bucket[i] = 0;
		}
	}
}
int main(int argc, char** argv)
{
	//1<=n<=30, 1<=m<=100000000
	int n, m;
	cin >> n >> m;
	int array[31];
	//輸入母陣列(從1開始輸入)
	for (int i = 1; i <= n; i++)
		cin >> array[i];
	cout << "排序前：";
	for (int i = 1; i <= n; i++)
		cout << setw(3) << array[i];
	//先整理一下母陣列(由小到大排序)
	int buffer;
	for (int i = 1; i <= n - 1; i++)
		for (int j = i + 1; j <= n; j++)
			if (array[j] < array[i])
			{
				buffer = array[j];
				array[j] = array[i];
				array[i] = buffer;
			}
	cout << endl;
	cout << "排序後：";
	for (int i = 1; i <= n; i++)
		cout << setw(3) << array[i];
	cout << endl;
	//假設n=10
	//就要嘗試在母陣列中取1,2,3,4,5,6......8,9,10個數字組合
	for (int i = 10; i >= 1; i--)
		dfs(1, i, n, m, array);
	system("PAUSE");
	return 0;
}
