#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << "计沮秖";
	cin >> n;
	int array[10000];
	for (int i = 0; i < n; i++)
		cin >> array[i];
	int bucket[30001] = {0};
	//盢计癸莱表
	for (int i = 0; i < n; i++)
		bucket[array[i]]++;
	//穓碝┮Τ表い瞷Ω计程
	int large=0;
	for (int i = 0; i < 30001; i++)
		if (bucket[i] > large)
			large = bucket[i];
	//盿帝тㄓlargeт瞷largeΩ计
	for (int i = 0; i < 30001; i++)
		if (bucket[i] == large)
			cout << i << " " << bucket[i] << endl;
	system("PAUSE");
	return 0;
}