#include <iostream>
using namespace std;
class student
{
public:
    int arr[10];
    int j = 0;
    void get()
    {
        cout << "Enter the marks of 10 students:" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << endl
                 << "Enter the marks of student no " << i + 1 << ":";
            cin >> arr[i];
        }
    }
    int find(int a)
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == a)
            {
                cout << "Marks belongs to student no:" << i + 1 << endl;
                j++;
            }
        }
        if (j == 0)
        {
            cout << endl
                 << "No not found..." << endl;
        }
    }
    int binary_s(int a)
    {
        int l = 0, h = (10-1), mid;
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (arr[mid] == a)
            {
                cout << "Marks belongs to student no:" << mid + 1 << endl;
                return 1;
            }
            else if (arr[mid] < a)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        cout << endl
             << "No not found..." << endl;
        return 0;
    }
};
int main()
{
    int f;

    student k;
    k.get();

    cout << endl
         << "Enter the marks of student you want to find:";
    cin >> f;
    cout<<endl<<"By linear Search:"<<endl;
    k.find(f);
    cout<<endl<<"By Binary Search:"<<endl;
    k.binary_s(f);
    return 0;
}