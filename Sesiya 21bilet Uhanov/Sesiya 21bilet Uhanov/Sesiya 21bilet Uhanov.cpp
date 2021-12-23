#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char strok1[1024], strok2[1024];
    int StrLength = 0;
    cout << "Введите первую строчку\n";
    cin >> strok1;
    cout << "Введите вторую строкчку\n";
    cin >> strok2;
    int i = 0;
    int j = 0;
    bool key = false;
    while (strok1[i] != '\0')
    {
        while (strok2[j] != '\0')
        {
            if (strok1[i] == strok2[j])
            {
                key = true;
                StrLength++;
                break;
            }
            j++;
        }
        if (!key)
        {
            break;
        }
        key = false;
        i++;
        j = 0;
    }
    cout << StrLength;
    return 0;
}