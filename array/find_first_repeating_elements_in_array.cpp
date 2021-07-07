#include<bits/stdc++.h>
using namespace std;
// int binary_search(int temp[],int searchelement,int n)
// {
//     int s=0;
//     int end=n,

//      while(s<end)
//     {
//         int mid=(s+end)/2;
//             if(temp[mid]==searchelement)
//                 return mid;
//             else if(temp[mid]>searchelement)
//                 end=mid-1;

//             else
//                 end=mid+1;


//     }
//     return -1;
// }

int main()
{

    int a[]={5,7,6,3,6,4,8,9,5,1,2,3,4};
    static int n=sizeof(a)/sizeof (a[0]);

    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[i]=a[i];
    }
    sort(temp,temp+n);
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }
    
    


    cout<<"\nsize of array::::"<<n;

    set<int> s;//hashset
    int min=-1;//these will return the index of first repeating element
    for( int i=n;i>=0;i--)
    {
        //if element is already in set,update min
        if(s.find(a[i])!=s.end())
        {
            min=i;
        }
        else{
            s.insert(a[i]);
        }
    }
    
    if (min != -1)
        cout << "\nThe first repeating element is " << a[min];
    else
        cout << "There are no repeating elements";

    return 0;
}