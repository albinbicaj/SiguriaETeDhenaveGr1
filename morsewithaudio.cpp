#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <string.h>
using namespace std;
int main(int argc, char* argv[])
{
    string inpt;
    char ascii[28] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ", lwcAscii[28] = " abcdefghijklmnopqrstuvwxyz";
    string morse[27] = { "  ", ".- ", "-... ", "-.-. ", "-.. ", ". ", "..-. ", "--. ", ".... ", ".. ", ".--- ", "-.- ", ".-.. ", "-- ", "-. ", "--- ", ".--.", "--.- ", ".-. ", "... ", "- ", "..- ", "...- ", ".-- ", "-..- ", "-.-- ", "--.. " };
    string outpt;
    cin >> inpt;
    int y = 0;
    int size = inpt.length();
    cout << "Length:" << size << endl;

    y = 0;
    while (y < inpt.length())
    {
        int x = 0;
        bool working = false;
        while (!working)
        {
            if (ascii[x] != inpt[y] && lwcAscii[x] != inpt[y])
            {
                x++;
            }
            else
            {
                working = !working;
            }
        }

        cout << morse[x];
        outpt = outpt + morse[x];
        y++;
    }

    y = 0;
    while (y < outpt.length() + 1)
    {
        if (outpt[y] == '.')
        {
            Beep(1000, 250);
        }
        else
        {
            if (outpt[y] == '-')
            {
                Beep(1000, 500);
            }
            else
            {
                if (outpt[y] == ' ')
                {
                    Sleep(500);
                }
            }
        }
        y++;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
