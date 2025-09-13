#include <iostream>
using namespace std;
class book
{
public:
    int n, top;
    int *arr;

    void get_n()
    {
        cout << "Enter the maximum number of books you want:";
        cin >> n;
    }
    book()
    {
        arr = new int(n);
        top = -1;
    }

    void push(int val)
    {
        if (top == n - 1)
        {
            cout << endl
                 << "Stack Overflow" << endl;
        }
        top++;
        arr[top] = val;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return;
        }
        cout <<endl<< "Deleted - " << arr[top] << "from top of the stack." << endl;
        top--;
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return;
        }

        cout << "top";
        for (int i = 0; i <= top;)
        {
            cout << "->";
            cout << arr[i]<<endl;
            i++;
        }
    }
};
int main()
{
    book obj;
    int ch,a;
    cout<<"\t\t-:WELCOME:-"<<endl;
    obj.get_n();
    do
    {
    yo:
    cout<<"Enter 1: to PUSH a book in stack."<<endl;
    cout<<"Enter 2: to POP a book in stack."<<endl;
    cout<<"Enter 3: to display all books of stack."<<endl;
    cout<<"Enter 0: to EXIT"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter the book ID you want to Push:";
        cin>>a;
        obj.push(a);
        break;
    
    case 2:
        obj.pop();
        break;

    case 3:
        obj.display();
        break;

    case 0:
        break;
    
    default:
    cout<<endl<<"Invelid Entery:-"<<endl;
    goto yo;
        break;
        }} while (ch!=0);

    return 0;
}