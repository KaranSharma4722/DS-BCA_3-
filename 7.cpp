#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{
public:
    node *head;
    list()
    {
        head = NULL;
    }
    // Insert at HEAD
    void insertathead(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
    }

    // Insert at Tail

    void insertatend(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    // Insert at Middle
    void insertatmid(int val, int loc)
    {
        node *newnode = new node(val);
        if (loc == 0)
        {
            cout << "invelid Location:" << endl;
            return;
        }

        if (loc == 1 || head == NULL)
        {
            insertathead(val);
            return;
        }
        node *temp = head;
        int count = 1;
        while (count < loc - 1 && temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            insertatend(val);
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    // Delete from Head
    void deletefromhead()
    {
        if (head == NULL)
        {
            cout << "-:List is Empty:-" << endl;
            return;
        }

        node *avail = head;
        head = head->next;
        delete avail;
    }

    // Delete from End
    void deletefromend()
    {
        if (head == NULL)
        {
            cout << "-:List is Empty:-" << endl;
            return;
        }
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *aval = temp->next;
        temp->next = NULL;
        delete aval;
    }
    // Delete from middle
    void deletefrommid(int loc)
    {
        if (head == NULL)
        {
            cout << "-:List is Empty:-" << endl;
            return;
        }
        node *temp = head;
        int count = 1;
        if (loc == 1)
        {
            deletefromhead();
        }

        while (count < loc - 1)
        {
            count++;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            deletefromend();
            return;
        }
        node *aval = temp->next;
        temp->next = temp->next->next;
        delete aval;
    }
    // Delete by Value
    void deletebyvalue(int val)
    {
        node *temp = head;
        int count = 1, yo = 0;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                deletefrommid(count);
                yo++;
            }

            count++;
            temp = temp->next;
        }
        if (yo == 0)
        {
            cout << "-:item not found:-" << endl;
        }
        else
        {
            cout << "Deleted item" << endl;
        }
    }
    // COUNT Elements:-
    void countelement()
    {
        node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        cout << "Total Number of nodes In list: " << count << endl;
    }
    // linear Search
    void linearsearch(int val)
    {
        node *temp = head;
        int count = 1, yo = 0;
        while (temp != NULL)
        {
            if (temp->data == val)
            {
                cout << "Item found at node no : " << count;
                yo++;
                break;
            }

            count++;
            temp = temp->next;
        }
        if (yo == 0)
        {
            cout << "-:item not found:-" << endl;
        }
    }
    // Display
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    list o;
    int k, j, l, m, n, p, q, r;
    int ch;

    do
    {
        cout << "\n\nEnter:-\n";
    big:
        cout << "1: To Insert an integer " << endl;
        cout << "2: To Delete a node" << endl;
        cout << "3: To Display all the integers in the list by traversing it." << endl;
        cout << "4: To Display the number of integers/nodes in the linked list" << endl;
        cout << "5: To Search an integer in the list and display its position." << endl;
        cout << "0: To 'EXIT' " << endl;

        cout << "Enter here:";
        cin >> ch;
        switch (ch)
        {
            // CASE 1--->
        case 1:
        in:
            cout << "Enter 1:To Insert at Start." << endl;
            cout << "Enter 2:To Insert at End." << endl;
            cout << "Enter 3:To Insert at Middle." << endl;
            cout << "0: To 'EXIT' " << endl;
            int a;
            cout << ":";
            cin >> a;
            switch (a)
            {
            case 1:

                cout << "Enter Number you want to inset:";
                cin >> k;
                o.insertathead(k);
                cout << endl
                     << "-:DONE:-" << endl;
                break;

            case 2:

                cout << "Enter Number you want to inset:";
                cin >> j;
                o.insertatend(j);
                cout << endl
                     << "-:DONE:-" << endl;
                break;

            case 3:
                int l, m;
                cout << "Enter Number you want to inset:";
                cin >> k;
                cout << "Enter the location where you want to enter:";
                cin >> j;
                o.insertatmid(l, m);
                cout << endl
                     << "-:DONE:-" << endl;
                break;
            case 0:
                break;

            default:
                cout << "***:Invalid entry:***" << endl;
                cout << "Choose From this:-" << endl;
                goto in;
                break;
            }

            break;
            // CASE 2--->
        case 2:
        de:
            cout << "Enter 1:To Delete from Start." << endl;
            cout << "Enter 2:To Delete from End." << endl;
            cout << "Enter 3:To Delete an element from choise location." << endl;
            cout << "Enter 4:To Delete all nodes having a specific integer value." << endl;
            cout << "0: To 'EXIT' " << endl;
            int b;
            cout << ":";
            cin >> b;
            switch (b)
            {
            case 1:
                o.deletefromhead();
                cout << endl
                     << "-:DONE:-" << endl;
                break;

            case 2:

                o.deletefromend();
                cout << endl
                     << "-:DONE:-" << endl;
                break;

            case 3:
                int p;
                cout << "Enter the location from where you want to Delete:";
                cin >> p;
                o.deletefrommid(p);
                cout << endl
                     << "-:DONE:-" << endl;
                break;
            case 4:
                int q;
                cout << "Enter value want to Delete:";
                cin >> q;
                o.deletefrommid(q);
                cout << endl
                     << "-:DONE:-" << endl;
                break;

            case 0:
                break;

            default:
                cout << "***:Invelid entery:***" << endl;
                cout << "Choose From this:-" << endl;
                goto de;
                break;
            }

            break;

            // CASE 3--->
        case 3:
            o.display();
            cout << endl
                 << "-:DONE:-" << endl;
            break;
            // CASE 4--->
        case 4:
            o.countelement();
            cout << endl
                 << "-:DONE:-" << endl;
            break;
            // CASE 5--->
        case 5:
            int r;
            cout << "Enter The value You want to find:";
            cin >> r;
            o.linearsearch(r);
            cout << endl
                 << "-:DONE:-" << endl;
            break;
        case 0:
            break;

        default:
            cout << "***:Invelid entery:***" << endl;
            cout << "Choose From this:-" << endl;
            goto big;
            break;
        }
    } while (ch != 0);
    return 0;
}