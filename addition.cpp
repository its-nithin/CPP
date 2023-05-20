#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    cout<<"The sum of the elements is: "<<sum;
    return 0;
    
}