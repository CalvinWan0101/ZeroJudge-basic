#include <iostream>
using namespace std;
int bucket[10] = { 0 };
int answer[10] = { 0 };
void dfs(int step, int n, int m, int array[101])
{
	if (step == m + 1)
	{
		int know = 0;
		for (int i = 1; i < m; i++)
			if (array[answer[i]] > array[answer[i + 1]])
				know = 1;
		if (know == 0)
		{
			for (int i = 1; i <= m; i++)
				cout << array[answer[i]] << " ";
			cout << endl;
		}
		return;
	}
	//¤@¯ëª¬ªp
	for (int i = 1; i <= n; i++)
	{
		if (bucket[i] == 0)
		{
			answer[step] = i;
			bucket[i] = 1;
			dfs(step + 1, n, m, array);
			bucket[i] = 0;
		}
	}
}
int main()
{
	int n;
	int array[101];
	int m;
	int buffer;
	while (cin >> n)
	{
		if (n == 0)
			break;
		for (int i = 1; i <= n; i++)
			cin >> array[i];
		for (int i = 1; i <= n - 1; i++)
			for (int j = i + 1; j <= n; j++)
				if (array[i] > array[j])
				{
					buffer = array[i];
					array[i] = array[j];
					array[j] = buffer;
				}
		cin >> m;
		dfs(1, n, m, array);
		cout << endl;
	}
	return 0;
}