#include <iostream>
using namespace std;
class salary
{
public:
    int n;
    salary(int n)
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
    int add_start()
    {
        int item;

        cout << "Enter the number you want to enter:";
        cin >> item;

        int *d = &n;

        (*d)++;
        for (int i = n - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = item;
    }

    int add_end()
    {
        int item;
        int yo;
        cout << "Enter the number you want to enter:";
        cin >> item;

        int *d = &n;

        yo = (*d)++;
        arr[yo] = item;
    }
    int add_any()
    {
        int item, place;

        cout << "Enter the number you want to enter:";
        cin >> item;
        cout << "Enter the index no where you want to add number:";
        cin >> place;
        int *d = &n;
        (*d)++;
        for (int i = n - 1; i >= place; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[place] = item;
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
    int num,kk=2;
    cout<<"Enter the number Employes you want:";
    cin>>num;
    salary k(num);
    k.getarr();
int c,m=0;
while (1)
{
    


cout<<endl<<"---:MINU:---"<<endl<<endl;
cout<<"Enter ' 1 ' to ADD an element at start."<<endl;
cout<<"Enter ' 2 ' to ADD an element at end."<<endl;
cout<<"Enter ' 3 ' to ADD an element at choice index."<<endl;
cout<<"Enter ' 0 ' exit:";
cin>>c;

switch (c)
{
case 1:
    k.add_start();
    break;
case 2:
    k.add_end();
    break;
case 3:
    k.add_any();
    break;
default:
    break;
}
 
cout<<endl<<"Updated List:"<<endl;
    k.display();

cout<<endl<<"Enter ' 0 ' to Exit program and ' 1 ' add more changes:";
cin>>kk;
if (kk=0)
{
    break;
}

}
}