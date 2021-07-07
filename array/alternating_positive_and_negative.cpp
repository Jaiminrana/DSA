#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={8,6,4,7,-8,2,3,-7,0,9,-2};
    int n=sizeof(a)/sizeof(a[0]);

    static int start=0;
    int current=0;
    int end=n-1;

    while(current<=end)
    {
            if(a[current]<0)
            {
                swap(a[current],a[start]);
                current++;
                start++;
            }
            else{
                current++;
            }
    }
    for(int i=0;i<n;i++)
    {
          cout<<a[i]<<" ";
    }
    cout<<endl<<"current index of start:-"<<start;
    int copystart=start;
    for(int i=1;i<=copystart;i+=2)
    {
        swap(a[i],a[start]);
        start++;
    }
    cout<<endl<<"after swapping:   ";
    for(int i=0;i<n;i++)
    {
          cout<<a[i]<<" ";
    }
    cout<<"\nafter swapping start___"<<start;


return 0;}
