#include<iostream>
using namespace std;
//用以記錄已經出現過的數字
int bucket[10] = { 0 };
int answer[10] = { 0 };
void dfs(int step, int n)
{
	if (step == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d", answer[i]);
			printf(" ");
		}
		printf("\n");
		return;
	}
	//一般狀況
	for (int i = 1; i <= n; i++)
	{
		if (bucket[i] == 0)
		{
			answer[step] = i;
			bucket[i] = 1;
			dfs(step + 1, n);
			bucket[i] = 0;
		}
	}
}
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
		dfs(1, n);
	system("PAUSE");
	return 0;
}