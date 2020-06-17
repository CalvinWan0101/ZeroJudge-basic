#include <iostream>
using namespace std;
int main()
{
	int A[3], B[5], C[5];
	long long int count;
	while (cin >> A[0] >> A[1] >> A[2])
	{
		count = 0;
		for (int i = 0; i < 5; i++)
			cin >> B[i];
		for (int i = 0; i < 5; i++)
			cin >> C[i];
		//น๏ทำ
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 5; j++)
				if (A[i] == B[j])
					count += C[j];
		for (int j = 0; j < 5; j++)
			if (A[2] == B[j])
			{
				count -= C[j];
				break;
			}
			else if (j == 4 && A[2] != B[4])
			{
				count *= 2;
				break;
			}
		if (count < 0)
			count = 0;
		cout << count << endl;
	}
	return 0;
}