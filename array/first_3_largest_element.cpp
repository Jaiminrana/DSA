#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={8,6,4,2,3,0,9};
    int n=sizeof(a)/sizeof(a[0]);

    int first_largest=INT_MIN,
        second_largest=INT_MIN,
        third_largest=INT_MIN;


    for(int i=0;i<n;i++)
    {
            if(a[i]>first_largest)//a[i] is greater hten all so update 1st
            {
                third_largest=second_largest;
                second_largest=first_largest;
                first_largest=a[i];
            }
            else if(a[i]>second_largest)//a[i] is between 1st and 2nd so update 2nd
            {
                third_largest=second_largest;
                second_largest=a[i];
            }
            else{
                third_largest=a[i]; 
            }

    }

    cout<<first_largest<<" "<<second_largest<<" "<<third_largest;
    return 0;
}