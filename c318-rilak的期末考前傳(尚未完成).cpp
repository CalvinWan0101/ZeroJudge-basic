#include <iostream>
using namespace std;
int answer[1001];
int count;
void fuc(int step, int end)
{
	if (step == end+1)
	{

	}
	//�@�몬�p
	//����ƶq���W���ݭn�A���
	for (int i = 0; i < 100; i++)
		fuc(step + 1, end);
}
int main(int argc, char** argv)
{
	int n, t;
	int array[1000][2];
	cin >> n >> t;
	for (int i = 0; i < n; i++)
		cin >> array[i][0] >> array[i][1];
	//n�Ӭ�ػݭnn�Ӱj��

	system("PAUSE");
	return 0;
}