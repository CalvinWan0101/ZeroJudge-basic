#include <iostream>
using namespace std;
struct point
{
	int x, y, step;
};
int main()
{
	//(1,1)�}�l(n-1,n-1)����
	struct point A[10001];
	char map[101][101];
	int bucket[101][101] = { 0 };
	//�k�U���W���ɰw
	int way[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
	int head, tail;
	int n, know;
	int bufferx, buffery;
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> map[i][j];
	//��C��l��
	head = tail = 1;
	//��J�_�I���
	A[head].x = 2;
	A[head].y = 2;
	A[head].step = 1;
	tail++;
	bucket[2][2] = 1;
	//know==0�|����F
	//know==1��F���I
	know = 0;
	while (true)
	{
		if (tail <= head)
			break;
		//���ը��|�Ӥ�V
		for (int i = 0; i < 4; i++)
		{
			bufferx = A[head].x + way[i][1];
			buffery = A[head].y + way[i][0];
			//�ݦ��S���W�ɩμ���
			if (map[buffery][bufferx] == '#')
				continue;
			//�T�w���I�i�H���}&&�S���ϥιL
			if (map[buffery][bufferx] == '.' && bucket[buffery][bufferx] == 0)
			{
				bucket[buffery][bufferx] = 1;
				A[tail].y = buffery;
				A[tail].x = bufferx;
				//�C�ӽ��j��tail���Ohead����l
				//��l�}�B=���˸}�B+1
				A[tail].step = A[head].step + 1;
				tail++;
			}
			//�p�G��ؼ��I�Nbreak������4�Ӥ�V���j��
			if (bufferx == n - 1 && buffery == n - 1)
			{
				know = 1;
				break;
			}
		}
		//�w�g��F���I�N���Xendless loop
		//���ɪ��B�Ƭ��̨θ�
		if (know == 1)
			break;
		else
			head++;
	}
	if (A[tail - 1].x == n - 1 && A[tail - 1].y == n - 1)
		cout << A[tail - 1].step << endl;
	else
		cout << "No solution!" << endl;
	return 0;
}