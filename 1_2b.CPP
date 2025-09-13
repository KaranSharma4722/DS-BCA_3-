#include <iostream>
using namespace std;
class cal
{
public:
    int sum = 0;
    int calculate(int s[])
    {
        for (int i = 0; i < 10; i++)
        {
            sum = sum + s[i];
        }
        return sum;
    }
};
int main()
{
    int arr[10];
    cal obj;
    cout << "Entert the scores:";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Totale Score:" << obj.calculate(arr);

    return 0;
}