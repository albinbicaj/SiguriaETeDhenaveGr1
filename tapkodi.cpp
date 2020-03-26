#include <iostream>
#include<string>
using namespace std;
int main() {
	string emri;
	cout << "Jepni fjalen qe do kodoni:";
	cin >> emri;
	cout << "Fjala e koduar:";
	for (int i = 0; i < emri.size(); i++)
	{
		switch (emri[i]) {
		case 'a':
			cout << ". .   ";
			break;
		case 'b':
			cout << ". ..   ";
			break;
		case 'c':
			cout << ". ...   ";
			break;
		case 'd':
			cout << ". ....   ";
			break;
		case 'e':
			cout << ". .....   ";
			break;
		case 'f':
			cout << ".. .   ";
			break;
		case 'g':
			cout << ".. ..   ";
			break;
		case 'h':
			cout << ".. ...  ";
			break;
		case 'i':
			cout << ".. ....   ";
			break;
		case 'j':
			cout << ".. .....   ";
			break;
		case 'k':
			cout << ". ...   ";
			break;
		case 'l':
			cout << "... .   ";
			break;
		case 'm':
			cout << "... ..   ";
			break;
		case 'n':
			cout << "... ...   ";
			break;
		case 'o':
			cout << "... ....   ";
			break;
		case 'p':
			cout << "... .....   ";
			break;
		case 'q':
			cout << ".... .   ";
			break;
		case 'r':
			cout << ".... ..   ";
			break;
		case 's':
			cout << ".... ...   ";
			break;
		case 't':
			cout << ".... ....   ";
			break;
		case 'u':
			cout << ".... .....   ";
			break;
		case 'v':
			cout << "..... .   ";
			break;
		case 'w':
			cout << "..... ..   ";
			break;
		case 'x':
			cout << "..... ...   ";
			break;
		case 'y':
			cout << "..... ....   ";
			break;
		case 'z':
			cout << "..... .....   ";
			break;
		case ' ':
			cout << "  ";
			break;

		}
	}
}