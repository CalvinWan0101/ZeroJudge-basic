#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
	//目的：判斷所輸入的字母是否能組成迴文
	int array[27] = { 0 };
	string input;
	cout << "欲檢驗的字串：";
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		//將各字母出現的次數存入預先設立的整數陣列當中
		switch (input[i])
		{
		case 'a':
		case 'A':
			array[1]++;
			break;
		case 'b':
		case 'B':
			array[2]++;
			break;
		case 'c':
		case 'C':
			array[3]++;
			break;
		case 'd':
		case 'D':
			array[4]++;
			break;
		case 'e':
		case 'E':
			array[5]++;
			break;
		case 'f':
		case 'F':
			array[6]++;
			break;
		case 'g':
		case 'G':
			array[7]++;
			break;
		case 'h':
		case 'H':
			array[8]++;
			break;
		case 'i':
		case 'I':
			array[9]++;
			break;
		case 'j':
		case 'J':
			array[10]++;
			break;
		case 'k':
		case 'K':
			array[11]++;
			break;
		case 'l':
		case 'L':
			array[12]++;
			break;
		case 'm':
		case 'M':
			array[13]++;
			break;
		case 'n':
		case 'N':
			array[14]++;
			break;
		case 'o':
		case 'O':
			array[15]++;
			break;
		case 'p':
		case 'P':
			array[16]++;
			break;
		case 'q':
		case 'Q':
			array[17]++;
			break;
		case 'r':
		case 'R':
			array[18]++;
			break;
		case 's':
		case 'S':
			array[19]++;
			break;
		case 't':
		case 'T':
			array[20]++;
			break;
		case 'u':
		case 'U':
			array[21]++;
			break;
		case 'v':
		case 'V':
			array[22]++;
			break;
		case 'w':
		case 'W':
			array[23]++;
			break;
		case 'x':
		case 'X':
			array[24]++;
			break;
		case 'y':
		case 'Y':
			array[25]++;
			break;
		case 'z':
		case 'Z':
			array[26]++;
			break;
		}
	}
	//存取出現次數為基數的次數
	int count = 0;
	for (int i = 1; i <= 26; i++)
	{
		if (array[i] % 2 != 0)
			count++;
	}
	if (count >= 2)
		cout << "no..." << endl;
	else
		cout << "yes!!!" << endl;
	system("PAUSE");
	return 0;
}