#include<iostream>
#include<string>
using namespace std;
int main() {

	string plaintext, text;
	int length, x;
	int key;

	cout << "Please enter the text: ";
	getline(cin, plaintext);

	length = (int)plaintext.length();


	cout << "\nChoose the commande \n";

	cout << "1 = Encrypt text.\n";
	cout << "2 = Decrypt text.\n";
	cout << "3 = Brute-force.\n";
	cin >> x;


	switch (x) {
	case 1:
		cout << "Enter key: ";
		cin >> key;

		text = "";

		for (int i = 0; i < length; i++)
		{
			if (isupper(plaintext[i]))
				text += (plaintext[i] + key - 65) % 26 + 65;
			else if (islower(plaintext[i]))
				text += (plaintext[i] + key - 97) % 26 + 97;
			else
				text += plaintext[i];
		}
		cout << "\n$ ds caesar encrypt " << key << " " << plaintext << "\n" << text;

		break;
	case 2:
		cout << "Enter key: ";
		cin >> key;

		text = "";

		for (int i = 0; i < length; i++)
		{
			if (isupper(plaintext[i]))
				text += (plaintext[i] - key - 65) % 26 + 65;
			else if (islower(plaintext[i]))
				text += (plaintext[i] - key - 97) % 26 + 97;
			else
				text += plaintext[i];
		}
		cout << "\n$ ds caesar decrypt " << key << " " << plaintext << "\n" << text;
		break;
	case 3:
		for (int n = 1; n < 26; n++)
		{
			text = "";
			for (int i = 0; i < length; i++)
			{
				if (isupper(plaintext[i]))
				{
					if ((plaintext[i] - n - 65) < 0)
						text += 91 + (plaintext[i] - n - 65);
					else
						text += (plaintext[i] - n - 65) % 26 + 65;
				}
				else if (islower(plaintext[i]))
				{
					if ((plaintext[i] - n - 97) < 0)
						text += 123 + (plaintext[i] - n - 97);
					else
						text += (plaintext[i] - n - 97) % 26 + 97;
				}
				else
					text += plaintext[i];
			}
			cout << "\n" << "Key: " << n << "- " << text;
		}
	}
	return 0;
}
