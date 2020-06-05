#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	char alphabet[27] = {'.', 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	string input;
	cin >> input;
	
	//ÀË¬d®æ¦¡¬O§_²Å¦X
	int sure=0;
	for (int i = 0; i < input.length() - 1; i++)
		if (input[i] > input[i + 1])
		{
			sure = 1;
			cout << "0" << endl;
			break;
		}
	if (sure == 0)
	{
	
	}
	system("PAUSE");
	return 0;
}
