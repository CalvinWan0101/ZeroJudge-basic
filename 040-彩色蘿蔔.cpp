#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	//�N��1=���ڽ� +xg
	//�N��2=���ڽ� +yg
	//�N��3=���ڽ�  -zg
	//�N��4=���ڽ� -wg(�B���a���r�ĪG)
	//�N��0=���򳣨S���Y
	//���r�ĪG�G
	//1.�C��-ng(��Ѥ���)
	//2.�i�|�[
	//��l�魫=m

	int number;
	cout << "����ƶq�G";
	cin >> number;
	cout << endl;
	int x, y, z, w, n, m;
	string input;
	int array[100000] = { 0 };
	for (int i = 0; i < number; i++)
	{
		//�Ĥ@���Jx,y,z,w,n,m
		cout << "���ڽ��ƭȡG";
		cin >> x;
		cout << "���ڽ��ƭȡG";
		cin >> y;
		cout << "���ڽ��ƭȡG";
		cin >> z;
		z *= (-1);
		cout << "���ڽ��ƭȡG";
		cin >> w;
		w *= (-1);
		cout << "���r�ĪG���ˮ`�G";
		cin >> n;
		n *= (-1);
		cout << "��l�魫�G";
		cin >> m;
		cout << endl << "�C�ѩҭ����ڽ����ƦC�զX�G";
		//�ĤG���J�U���ڽ����ƦC�զX
		cin >> input;
		//�ഫ��J��string��int�}�C
		for (int i = 0; i < input.length(); i++)
		{
			stringstream transferA;
			transferA << input[i];
			transferA >> array[i];
		}
		//�@�ӥi�H�|�[�B���ܪ����r�ݩ�
		int ill = 0;
		//�`�魫
		int sum = m;
		//Ū��int�}�C�íp��ߤl���魫
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
				//case4�����ڽ��ݭp�⤤�r�ĪG
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
			cout << "�魫�G" << sum << endl;
	
	}
	system("PAUSE");
	return 0;
}