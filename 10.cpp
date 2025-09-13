#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class list
{
public:
    node *head, *tail;
    list()
    {
        head = tail = NULL;
    }

    // Insert At Head:
    void insertathead(int val)
    {

        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
    // Insert At Tail:
    void insertattail(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }

        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }

    // Insert At Middle:
    void insertatmid(int val, int loc)
    {
        node *newnode = new node(val);
        int count = 2;
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        if (head != NULL && loc == 1)
        {
            insertathead(val);
            return;
        }
        node *temp = head;
        while (count != loc && temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        if (temp == NULL)
        {
            insertattail(val);
            return;
        }
        newnode->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = newnode;
        }
        else
        {
            tail = newnode;
        }
        newnode->prev = temp;
        temp->next = newnode;
    }

    // Delete at Head:
    void deletefromhead()
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = head;
        head->next->prev = NULL;
        head = head->next;

        delete temp;
    }

    // Delete at Tail:
    void deletefromtail()
    {
        if (head == NULL)
        {
            return;
        }
        node *temp = tail;
        tail->prev->next = NULL;
        tail = tail->prev;

        delete temp;
    }

    // Delete from Middle:
    void deletefrommid(int loc)
    {
        node *temp = head;
        int count = 1;
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        if (loc == 1)
        {
            deletefromhead();
            return;
        }
        while (count < loc && temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        if (temp == NULL)
        {
            deletefromtail();
            return;
        }
        if (temp == tail)
        {
            deletefromtail();
            return;
        }

        // unlink from middle
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
    }
    // Display:
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
list obj;
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