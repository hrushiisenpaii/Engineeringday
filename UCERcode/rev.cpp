#include<iostream>

using namespace std;

int main()
{
    int t,n,j,a[100];
    cout<<"Numbers of array: ";
    cin>>t;
    
    for(int i=t;i>0;i--)
    {   cout<<"Enter number of data:";
        cin>>n;
        cout<<"Enter data:";
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        j=n-1;
        cout<<"Reverse:";
        for(int i=j;i>=0;i--)
        cout<<a[i]<<" ";
    cout<<"\n";
    }    
    return 0;
}