#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	//1hr=60min=3600s=3600000ms
	//1min=60s=60000ms
	//1s=1000ms
	//1ms=1ms
	int array[100] = { 0 };
	string a;
	int h, m, s, point;
	while (cin >> a)
	{
		for (int i = 0; i < a.length(); i++)
			array[i] = a[i];
		for (int i = 0; i < a.length(); i++)
			if (array[i] <= 57)
				array[i] -= 48;
		int count = 0;
		h = 0;
		m = 0;
		point = 0;
		s = 0;
		//��ih�j�im�j�is�j�i.�j����m�A�Y�S���h��0
		for (int i = 0; i < a.length(); i++)
		{
			if (array[i] == 104)
				h = i;
			if (array[i] == 109)
				m = i;
			if (array[i] == (-2))
				point = i;
			if (array[i] == 115)
				s = i;
		}
		//�}�l�����U�ز��W�䧮�����p
		//X hour
		if (array[a.length() - 1] == 114)
		{
			//�@��
			if (a.length() == 5)
			{
				count += array[0];
				count *= 3600000;
			}
			// ���
			else if (a.length() == 6)
			{
				count += (array[0] * 10 + array[1]);
				count *= 3600000;
			}
		}
		//X h Y m
		else if (array[a.length() - 1] == 109)
		{
			//���
			if (a.length() == 4)
				count = array[0] * 60 * 60 * 1000 + a[2] * 60 * 1000;
			//����
			else if (a.length() == 6)
				count = (array[0] * 10 + array[1]) * 60 * 60 * 1000 + (array[3] * 10 + array[4]) * 60 * 1000;
			//���Ϊ��׬�5�]�t�����P�����ت��p
			else if (a.length() == 5)
			{
				//����
				if (array[1] == 104)
					count = (array[0] * 60 + array[2] * 10 + array[3]) * 60 * 1000;
				//����
				else if (array[2] == 104)
					count = (array[0] * 10 + array[1]) * 60 * 60 * 1000 + array[3] * 60 * 1000;
			}
		}
		//X min
		else if (array[a.length() - 1] == 110)
		{
			//��
			if (array[1] == 109)
				count = array[0] * 60 * 1000;
			//��
			else if (array[2] == 109)
				count = (array[0] * 10 + array[1]) * 60 * 1000;
		}
		//X ms
		else if (array[a.length() - 1] == 115 && array[a.length() - 2] == 109)
		{
			//��
			if (array[1] == 109)
				count = array[0];
			//��
			else if (array[2] == 109)
				count = array[0] * 10 + array[1];
			//�T
			else if (array[3] == 109)
				count = array[0] * 100 + array[1] * 10 + array[2];
		}
		//X s
		else if (array[a.length() - 1] == 115 && a.length() <= 3)
		{
			//��
			if (array[1] == 115)
				count = array[0] * 1000;
			//��
			if (array[2] == 115)
				count = (array[0] * 10 + array[1]) * 1000;
		}
		//A.B s
		else if (array[a.length() - 1] == 115 && h == 0 && m == 0)
		{
			//��
			if (point == 1)
				count = array[0] * 1000 + array[2] * 100;
			//��
			else if (point == 2)
				count = (array[0] * 10 + array[1]) * 1000 + array[3] * 100;
		}
		//AmBs
		else if (array[a.length() - 1] == 115 && h == 0 && m != 0)
		{
			//���
			if (a.length() == 4)
				count = array[0] * 60 * 1000 + array[2] * 1000;
			//����
			else if (a.length() == 6)
				count = (array[0] * 10 + array[1]) * 60 * 1000 + (array[3] * 10 + array[4]) * 1000;
			else if (a.length() == 5)
			{
				//����
				if (m == 1)
					count = array[0] * 60 * 1000 + (array[2] * 10 + array[3]) * 1000;
				//����
				else if (m == 2)
					count = (array[0] * 10 + array[1]) * 60 * 1000 + array[3] * 1000;
			}
		}
		//AhBmCs
		else if (h != 0 && m != 0 && array[a.length() - 1] == 115)
		{
			//111
			if (h == 1 && m == 3 && s == 5)
				count = array[0] * 60 * 60 * 1000 + array[2] * 60 * 1000 + array[5] * 1000;
			//112
			else if (h == 1 && m == 3 && s == 6)
				count = array[0] * 60 * 60 * 1000 + array[2] * 60 * 1000 + (array[5] * 10 + array[6]) * 1000;
			//121
			else if (h == 1 && m == 4 && s == 6)
				count = array[0] * 60 * 60 * 1000 + (array[2] * 10 + array[3]) * 60 * 1000 + array[5] * 1000;
			//122
			else if (h == 1 && m == 4 && s == 7)
				count = array[0] * 60 * 60 * 1000 + (array[2] * 10 + array[3]) * 60 * 1000 + (array[5] * 10 + array[6]) * 1000;
			//211
			else if (h == 2 && m == 4 && s == 6)
				count = (array[0] * 10 + array[1]) * 60 * 60 * 1000 + array[3] * 60 * 1000 + array[5] * 1000;
			//212
			else if (h = 2 && m == 4 && s == 7)
				count = (array[0] * 10 + array[1]) * 60 * 60 * 1000 + array[3] * 60 * 1000 + (array[5] * 10 + array[6]) * 1000;
			//221
			else if ( m == 5&&s==7)
				count = (array[0] * 10 + array[1]) * 60 * 60 * 1000 + (array[3] * 10 + array[4]) * 60 * 1000 + array[6] * 1000;
			//222
			else if ( m == 5&&s==8)
				count = (array[0] * 10 + array[1]) * 60 * 60 * 1000 + (array[3] * 10 + array[4]) * 60 * 1000 + (array[6] * 10 + array[7]) * 1000;
		}
		cout << count << endl;
	}
	system("PAUSE");
	return 0;
}