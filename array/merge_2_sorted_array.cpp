//Merge 2 sorted arrays without using Extra space.
#include<iostream>
#include<algorithm>
using namespace std;

int merge(int a[],int n,int b[],int m)
{
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>b[0])
        {
            swap(a[i],b[0]);
            sort(b,b+m);

        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int j=0;j<m;j++)
    {
        cout<<b[j]<<" ";
    }

}
int main()
{
    int a[]={2,4,6,8};
    int n=sizeof(a)/sizeof(a[0]);
    int b[]={1,3,5};
    int m=sizeof(b)/sizeof(b[0]);
cout<<"start"<<endl;
    merge(a,n,b,m);
    cout<<endl<<"after calling function"<<endl;
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(int j=0;j<m;j++)
    {
        cout<<b[j]<<" ";
    }*/

    return 0;
}
