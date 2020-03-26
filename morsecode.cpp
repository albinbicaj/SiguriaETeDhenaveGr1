#include <iostream>
#include <string>
#include <cctype>
#include <windows.h>
#include <MMSystem.h>
#include <conio.h>
using namespace std;
string texttomorse(string, string[]);
string morsetotext(string, char[]);
string Word;

int main()
{
    char alpha[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    string morse[81] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
    string text, morsecode;
    char choice;
    char repeat = 'a';

    while (repeat == 'a')
    {
        cout << "Zgjedhni nr 1 per te dekoduar nga text ne Morse code.\nZgjedhni nr 2 per enkodimin nga  Morse code ne text" << endl;
        cin >> choice;

        if (choice == '1')
        {
            cout << "shkruani nje text:";
            cin.get();
            getline(cin, text);
            cout << "TEXT: " << text << endl;
            cout << "MORSE CODE: " << texttomorse(text, morse) << endl;
        }
        else if (choice == '2')
        {
            cout << "Shkruani nje Morse code per ta kthyer ne text:";
            cin.get();
            getline(cin, morsecode);
            cout << "MORSECODE: " << morsecode << endl;
            cout << "TEXT: " << morsetotext(morsecode, alpha) << endl;
        }
      

        cout << "klikoni a per riperseritje te perkthimit. Klikoni ndonje shkronje per te dale. ";
        cin >> repeat;
    }
    return 0;
}





string texttomorse(string text, string morse[])
{
    string morsevalue;
    string spacesbtwletters = " ";
    string spacesbtwwords = "  ";
    for (int k = 0; text[k]; k++)
    {
        if (text[k] != ' ') 
        {
            text[k] = toupper(text[k]); 
            morsevalue = spacesbtwletters += morse[text[k] - 'A'] + " ";
        }
        if (text[k] == ' ')
        {
            spacesbtwletters += spacesbtwwords;
        }
    }
    return morsevalue;
}

string morsetotext(string morsecode, char alpha[])
{
    const int count = 0;
    string tran;
    string spacesbtwlettercode = " ";
    string spacesbtwwordcode = " ";
    for (int k = 0; morsecode[k]; k++)
    {
        if (morsecode[k] != ' ')
        {
            tran = spacesbtwlettercode += alpha[k];
        }
    }
    return tran;
}




    