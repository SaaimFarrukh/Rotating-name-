#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

int main()
{
    while(true)
    {
        for(int i = 0; i <= 100; i++)
        {
            system("cls");
            gotoxy(i, 5);
            cout << "Saaim Farrukh";
            Sleep(40);
        }

        for(int i = 100; i >= 140; i--)
        {
            system("cls");
            gotoxy(i, 5);
            cout << "Saaim Farrukh";
            Sleep(40);
        }
    }

    return 0;
}
