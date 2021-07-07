#include<bits/stdc++.h>
using namespace std;

void sort_without_sort(int a[],int n)
{
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        switch(a[mid])
        {
            case 0:
                swap(a[low],a[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;

            case 2:
                swap(a[mid],a[high]);
                high--;
                break;
        }
    }
}
int main()
{

    int a[]={1,0,2,1,0,2,2,1,0,0,1,2};
    int n=sizeof(a)/sizeof(a[0]);

    sort_without_sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<"  "<<a[i];
    }
    return 0;
}
