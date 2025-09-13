#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int data){
this->data=data;
next=NULL;
}
};
class stack{
    public:
node*top;
stack(){
    top=NULL;
}

//PUSH------>
void push(int val){
    node* newNode=new node(val);
if(top==NULL){
    top=newNode;
    return;
}
newNode->next=top;
top=newNode;
}

//POP------>
void pop(){
    if (top==NULL)
    {
        cout<<"Stack is Empty";
        return;
    }
    
    node* faltu;
    faltu=top;
    top=top->next;
    delete faltu;
}

//PEEK------>
void seek(){
    if (top==NULL)
    {
        cout<<"Stack is Empty";
        return;
    }
cout<<"The top element is:"<<top->data;
}

//DISPLAY------>
void display(){
    node*temp=top;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int main()
{
stack obj;
    int ch,a;
    cout<<"\t\t-:WELCOME:-"<<endl;
    
    do
    {
    yo:
    cout<<"Enter 1: to PUSH a Element in stack."<<endl;
    cout<<"Enter 2: to POP a Element in stack."<<endl;
    cout<<"Enter 3: to display whole stack."<<endl;
    cout<<"Enter 0: to EXIT"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter the Element you want to Push:";
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