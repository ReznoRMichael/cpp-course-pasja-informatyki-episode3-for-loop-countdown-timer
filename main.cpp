#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for (int i=5; i>=1; i--)
    {
        system("cls");
        cout << i << endl;
        Sleep(1000);
    }
    system("cls");
    cout << "JEBUT";
    return 0;
}
