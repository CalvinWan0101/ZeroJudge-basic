#include <iostream>
using namespace std;
int answer[15];
void fuc(int step, int end)
{
	//當step達到臨界值
	if (step == end + 1)
	{
		for (int i = 1; i <= end; i++)
			cout << answer[i];
		cout << endl;
		return;
	}
	//一般狀況
	for (answer[step] = 0; answer[step] <= 1; answer[step]++)
		fuc(step + 1, end);
}
int main(int argc, char** argv)
{
	int n;
	while (cin >> n)
		fuc(1, n);
	system("PAUSE");
	return 0;
}