#include <iostream>
using namespace std;
void cat(int a)
{
}
int main(int argc, char** argv)
{
	int number;
	int answer;
	//��ƶq�G1<=number<=30
	//�M�G1<=answer<=100000000
	//�Y�L�ѫh�L�X-1
	int array[30] = { 0 };
	cout << "�ƾڶq�G";
	cin >> number;
	cout << "�ؼЩM�G";
	cin >> answer;
	for (int i = 0; i < number; i++)
	{
		cout << "��" << i + 1 << "�ӼƾڡG";
		cin >> array[i];
	}
	cout << endl;

	for(int)
	//���2�ӼƦr�ۥ[
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (i != j && array[i] + array[j] == answer&&array[i]<=array[j])
				cout << array[i] << " " << array[j] << endl;
	//���3�ӼƦr�ۥ[
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			for (int k = 0; k < 4; k++)
				if (i != j && i != k && j != k && array[i] + array[j] + array[k] == answer&&array[i]<=array[j]&&array[j]<=array[k])
					cout << array[i] << " " << array[j] << " " << array[k] << endl;
	//���4�ӼƦr�ۥ[
	int sum = 0;
	for (int i = 0; i < 4; i++)
		sum += array[i];
	if (sum == answer)
		for (int i = 0; i < 4; i++)
			cout << array[i] << " ";
	cout << endl;

	system("PAUSE");
	return 0;
}
