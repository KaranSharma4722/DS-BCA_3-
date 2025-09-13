#include<iostream>
using namespace std;
class array_operation{
 int n,a[100];   
public:
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
void get(){
    cout<<"Enter the number of elements you want:";
    cin>>n;
    cout<<"Enter the array Elements:";
    for (int i = 0; i < n; i++)
    {
        
        cin>>a[i];
    }

    
} 
int even(){
    int k=0;
for (int i = 0; i < n; i++){
    if((a[i]%2)==0){
      k+=a[i];}}
cout<<"Total sum of all evens  elements in array is :"<<k<<endl;} 
int prime(){
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if(isPrime(a[i])){continue;}
k++;
}
 cout<<"number of prime numbers:"<< k<<endl;  
}
int sum(){
    int k=0;
    for (int i = 0; i < n; i++)
    {
        k+=a[i];
    }
  cout<<"Sum is:"<<k<<endl;  
}
int max_min(){
    int max=a[0];
    int min=a[0];
    for (int i = 0; i < n; i++)
    {
        if (max<a[i]){
            max=a[i];}
        if (min>a[i]){
            min=a[i];}
    }
cout<<"Maximum number in array is:"<<max<<endl;
cout<<"Minimum number in array is:"<<min<<endl;
}
};
int main()
{
array_operation kar;
cout<<"--welcome to program--"<<endl<<endl;
cout<<"Enter 0 to exit and 1 to create an Array:";
int x;
yo:
cin>>x;
if(x==0){
    return 0;
}
if (x!=1)
{
    cout<<endl<<"Enter 0 or 1 only:"<<endl;
    goto yo;
}

kar.get();
ko:
cout<<"Enter 1 to: find sum of even elements:-"<<endl;
cout<<"Enter 2 to: find total prime numbers in array:-"<<endl;
cout<<"Enter 3 to: find sum of all elements:-"<<endl;
cout<<"Enter 4 to: find maimummen  & minimum elements:-"<<endl;
cout<<"Enter 0 to: exit:-"<<endl;
int z;
cin>>z;
switch (z)
{
case 1:
    kar.even();
    break;
case 2:
    kar.prime();
    break;
case 3:
    kar.sum();
    break;
case 4:
    kar.max_min();
    break;
case 0:
    cout<<endl<<"------Thankyou-------"<<endl<<endl;
    return 0;

default:
    break;
}
cout<<endl<<"Any other action???"<<endl<<endl;
goto ko;
return 0;
}