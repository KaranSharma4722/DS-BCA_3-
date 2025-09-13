#include <iostream>
using namespace std;
int main()
{
    int noyear = 0;
    int j = 0;
    int year[11];
    cout << "Enter the number of babies born in:" << endl;
    for (int i = 0; i < 11; i++)
    {
        int a = 1950;
        cout << a + i << "-";
        cin >> year[i];
        if (year[i] == 0)
        {
            noyear++;
        }
    }
    for (int i = 0; i < 11; i++)
    {
        int a = 1950;
        if (year[i] == 0)
        {
            cout << "In year" << a+1 << " - NO baby was born.";
            a++;
            j++;
        }
    }
    if (j == 0)
    {
        cout << endl
             << "'There was no year when No Baby was born'" << endl;
    }
    cout << endl
         << "Total No of years in which no baby was born:" << noyear;
    return 0;
}