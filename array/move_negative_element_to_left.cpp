#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[]={5,-7,6,0,-3,-4,0,1,7,-5,100};

    int n=sizeof(a)/sizeof(a[0]);

    int start=0,current=0,last=n-1;

    while(current<last)
    {
        if(a[current]<0)
        {
            swap(current[a],start[a]);
            start++;

        }
        current++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}