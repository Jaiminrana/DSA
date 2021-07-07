//https://www.geeksforgeeks.org/find-the-missing-number-in-a-sorted-array/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[]={1,3,2,6,4};
    int n=sizeof(a)/sizeof(a[0]);

    sort(a,a+n);
    cout<<"sorted array:-";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int XOR_result1=1;//it will store XOR of the first natural number till last number of array here last number is 6
    int last_element=a[n-1];
    for(int i=2;i<=n;i++)
    {
        XOR_result1^=i;
    }


    int XOR_result2=a[0];//it will store XOR of our given array
    for(int i=1;i<=n;i++)
    {
        XOR_result2^=a[i];
    }
    
    if((XOR_result1^XOR_result2)==a[n-1])
    {
        cout<<"\nno missing number found";
    }
    else    
    {  
        cout<<endl<<"missing element:-"<<(XOR_result1^XOR_result2);
    
    }


    return 0;
}