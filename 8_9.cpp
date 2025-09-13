#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int var)
    {
        data = var;
        next = NULL;
    }
};

class Clink
{
public:
    node *head, *tail;

    Clink()
    {
        head = tail = NULL;
    }

    void insertathead(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = head; // circular link
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head; // maintain circular link
    }

    // Insert At tail------>

    void insertattail(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            newNode->next = head; // circular link
            return;
        }
        tail->next = newNode;
        tail = newNode;
        tail->next = head; // maintain circular link
    }
    // Insert At Mid
    void insertatmid(int val, int loc)
    {
        if (loc == 0)
        {
            insertathead(val);
            return;
        }
        node *newNode = new node(val);
        int count = 1;
        node *temp = head;
        while (loc - 1 != count)
        {
            count++;
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    // Delete from head------>
    void deletefromhead()
    {
        if (head == NULL)
        {
            cout << "-:List is Empty:-" << endl;
            return;
        }

        node *aval = head;
        head = head->next;
        tail->next = head;
        delete aval;
    }
    void deletefrommid(int loc)
    {
        if (head == NULL || loc == 1)
        {
            deletefromhead();
            return;
        }
        node *temp = head;
        int count = 1;
        while (count < loc - 1 && temp->next != head)
        {
            count++;
            temp = temp->next;
        }
        node *avail = temp->next;
        temp->next = temp->next->next;
    }
    // Display------>
    void display()
    {
        if (head == NULL)
        {
            cout << "List is empty." << endl;
            return;
        }
        node *temp = head;
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);
        cout << "(head)" << endl;
    }
};

int main()
{
    Clink obj;
    int a, b, c, d, e, f;
    int ch;
    do
    {
    big:
        cout << "\nEnter:-\n";
        cout << "1: to Insert a node at the end of list." << endl;
        cout << "2: to Insert a node at specific position in the list." << endl;
        cout << "3: to Delete first node of the list." << endl;
        cout << "4: to Delete a specific node (based on position) in the list." << endl;
        cout << "5: to Display List" << endl;
        cout << "0: to EXIT" << endl;
        cout<<":";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the Element you want to Insert in list:";
            cin >> a;
            obj.insertathead(a);
            break;

        case 2:
            cout << "Enter the Element you want to Insert in list:";
            cin >> b;
            cout << "Enter Location where you want to insert:";
            cin >> c;
            obj.insertatmid(b, c);
            break;

        case 3:
            obj.deletefromhead();
            break;

        case 4:
            cout << "Enter the location from where you want to delete element:";
            cin >> d;
            obj.deletefrommid(d);
            break;

        case 5:
            obj.display();
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
