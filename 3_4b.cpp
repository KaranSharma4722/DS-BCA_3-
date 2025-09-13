#include<iostream>
using namespace std;
class del{
    int n;
public:
    del(int n)
    {
        this->n = n;
    }

    int *arr = new int[n];

    int getarr()
    {

        cout << "enter the salary of " << n << "emplyes :" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Employee no " << i + 1 << ":";
            cin >> arr[i];
        }
        return arr[n];
    }
    int remove(){
        int place;
        cout<<"Enter the index no you want to delete:";
        cin>>place;
        int *d = &n;
        for (int i = place; i < n-1; i++)
        {
            arr[i]=arr[i+1];
        }
        
        (*d)--;
    }
    void display()
    {
        cout << endl
             << "Salaries of employess:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Employee no " << i + 1 << ":" << arr[i] << endl;
        }
    }
};
int main()
{
int nk;
    cout<<"Enter the number Employes you want:";
    cin>>nk;
    del k(nk);
    k.getarr();
    k.remove();
    k.display();
return 0;
}