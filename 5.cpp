#include <iostream>
using namespace std;
class student
{
public:
    int n;
    student(int n)
    {
        this->n = n;
    }

    int *arr = new int[n];

    int getarr()
    {

        cout << "enter the marks of " << n << "Students :" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Student no " << i + 1 << ":";
            cin >> arr[i];
        }
        return arr[n];
    }
    int bubble_sort(){
        
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }}}}

int find_min(){
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
    if(min>arr[i]){
    min = arr[i];
    }
    }
    cout<<"minumam Marks:"<<min<<endl;

}
int find_max(){
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
    if(max<arr[i]){
    max = arr[i];
    }
    }
cout<<"maximum Marks:"<<max<<endl;
}
    void display()
    {
        cout << endl
             << "Marks Of Students are:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "Student No " << i + 1 << ":" << arr[i] << endl;
        }
    }

};
int main(){
    int var;
cout<<"Enter the No of students you want:";
cin >>var;
 student k(var);
 k.getarr();
 k.display();
 cout<<endl<<"After sort:"<<endl;
 k.bubble_sort();
 k.display();
k.find_max();
k.find_min();
    return 0;
}