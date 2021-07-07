#include<bits/stdc++.h>
using namespace std;

void leader(int a[],int n){

    cout<<"Leader elements are as follow:-"<<endl;
    cout<<endl<<a[n-1];
    for(int i=n;i>0;i--)
    {
        if(a[i]<a[i-1])
        {
            cout<<endl<<a[i-1];
        }
    }
    


}
int main(){

    int n;
    cout<<"array size:-";
    cin>>n;

    int arr[n];

    cout<<endl<<"enter elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    leader(arr,n);

    return 0;
}